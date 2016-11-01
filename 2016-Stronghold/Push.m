#include "Push.h"
@interface MPCHandler() <MCSessionDelegate>
//advertise showing
//browse looking

@end
@implementation MPCHandler

NSString *CID = @"ghjkl2";
NSString *value;
MCSession* derpy;
bool something = false;
- (void)setupPeerWithDisplayName:(NSString *)displayName{
   // NSLog(@"Step 1/4");
    self.peerID = [[MCPeerID alloc] initWithDisplayName:displayName];//name
}
- (void)setupSession{
    //NSLog(@"Step 2/4");
    self.session = [[MCSession alloc] initWithPeer:_peerID];
    self.session.delegate=self;
}
- (void)setupBrowser{
    
    self.browser = [[MCBrowserViewController alloc] initWithServiceType:CID session:_session];;
}


-(void)SEND:(NSString*)Info{
//    NSError* error = nil;
//    NSData* data = [NSKeyedArchiver archivedDataWithRootObject:Info];
//    [self.session sendData:data toPeers:self.session.connectedPeers withMode:(MCSessionSendDataReliable) error:&error];
//    NSLog(@"README %@", error);
  //  NSLog(@"README: %@", self.session.connectedPeers);
  //  NSLog(@"Peer Name: %@", self.session.connectedPeers);
  //  NSLog(@"Function Called");
    NSData* data=[Info dataUsingEncoding:NSUTF8StringEncoding];
    
    
    
    NSError* error = nil;
    [self.session sendData:data toPeers:self.session.connectedPeers withMode:(MCSessionSendDataReliable) error:&error];
    NSLog(@"[ERROR] %@", error);
    NSLog(@"[Data] %@", data);
    NSLog(@"[Info] %@", Info);
}

#pragma mark -
#pragma mark Session Delegate Methods
- (void)session:(MCSession *)session peer:(MCPeerID *)peerID didChangeState:(MCSessionState)state {
    NSDictionary *userInfo = @{ @"peerID": peerID,
                                @"state" : @(state) };
    
    dispatch_async(dispatch_get_main_queue(), ^{
        [[NSNotificationCenter defaultCenter] postNotificationName:@"MPCDemo_DidChangeStateNotification"
                                                            object:nil
                                                          userInfo:userInfo];
        NSLog(@"%@",userInfo);
    });
}

- (void)session:(MCSession *)session didReceiveData:(NSData *)data fromPeer:(MCPeerID *)peerID {
    NSDictionary *userInfo = @{ @"data": data,
                                @"peerID": peerID };
    
    dispatch_async(dispatch_get_main_queue(), ^{
        [[NSNotificationCenter defaultCenter] postNotificationName:@"MPCDemo_DidReceiveDataNotification"
                                                            object:nil
                                                          userInfo:userInfo];
    });
    
}

- (void)session:(MCSession *)session didStartReceivingResourceWithName:(NSString *)resourceName fromPeer:(MCPeerID *)peerID withProgress:(NSProgress *)progress {
    
}

- (void)session:(MCSession *)session didFinishReceivingResourceWithName:(NSString *)resourceName fromPeer:(MCPeerID *)peerID atURL:(NSURL *)localURL withError:(NSError *)error {
    
}

- (void)session:(MCSession *)session didReceiveStream:(NSInputStream *)stream withName:(NSString *)streamName fromPeer:(MCPeerID *)peerID {
    
}
@end


@interface MCSessionDelegate:NSObject

- (void)session:(MCSession *)session peer:(MCPeerID *)peerID didChangeState:(MCSessionState)state;
- (void)session:(MCSession *)session didReceiveData:(NSData *)data fromPeer:(MCPeerID *)peerID;
- (void)session:(MCSession *)session didStartReceivingResourceWithName:(NSString *)resourceName fromPeer:(MCPeerID *)peerID withProgress:(NSProgress *)progress;
- (void)session:(MCSession *)session didFinishReceivingResourceWithName:(NSString *)resourceName fromPeer:(MCPeerID *)peerID atURL:(NSURL *)localURL withError:(NSError *)error;
- (void)session:(MCSession *)session didReceiveStream:(NSInputStream *)stream withName:(NSString *)streamName fromPeer:(MCPeerID *)peerID;

@end

@implementation MCSessionDelegate : NSObject
//MCSession Work Pls

- (void)session:(MCSession *)session peer:(MCPeerID *)peerID didChangeState:(MCSessionState)state {
    NSDictionary *userInfo = @{ @"peerID": peerID,
                                @"state" : @(state) };
    
    dispatch_async(dispatch_get_main_queue(), ^{
        [[NSNotificationCenter defaultCenter] postNotificationName:@"MPCDemo_DidChangeStateNotification"
                                                            object:nil
                                                          userInfo:userInfo];
    });
}
- (void)session:(MCSession *)session didReceiveData:(NSData *)data fromPeer:(MCPeerID *)peerID {
    NSDictionary *userInfo = @{ @"data": data,
                                @"peerID": peerID };
    
    dispatch_async(dispatch_get_main_queue(), ^{
        [[NSNotificationCenter defaultCenter] postNotificationName:@"MPCDemo_DidReceiveDataNotification"
                                                            object:nil
                                                          userInfo:userInfo];
    });
    // something = true;
    // value = [data valueForKey:@"HAI"];
    
    NSLog(@"Something was recieved?");
}

- (void)session:(MCSession *)session didStartReceivingResourceWithName:(NSString *)resourceName fromPeer:(MCPeerID *)peerID withProgress:(NSProgress *)progress {
    
}

- (void)session:(MCSession *)session didFinishReceivingResourceWithName:(NSString *)resourceName fromPeer:(MCPeerID *)peerID atURL:(NSURL *)localURL withError:(NSError *)error {
    
}

- (void)session:(MCSession *)session didReceiveStream:(NSInputStream *)stream withName:(NSString *)streamName fromPeer:(MCPeerID *)peerID {
    
}

@end
