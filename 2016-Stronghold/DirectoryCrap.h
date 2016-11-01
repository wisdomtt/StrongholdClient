////
////  ViewController.m
////  DatabaseAgain
////
////  Created by Curtis Mason on 3/22/16.
////  Copyright © 2016 Curtis Mason. All rights reserved.
////
//
//#import "ViewController.h"
//
//@interface ViewController ()
//
//@end
//
//@implementation ViewController
//int quantity = 0;
//-(NSDictionary*)Information:(NSString*)title{
//    
//    if((title != nil)&&(![title isEqual:@""])){
//        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
//        NSString *documentsDirectory = [paths objectAtIndex:0]; // Get documents directory
//        
//        
//        NSString* path = [NSString stringWithFormat:documentsDirectory, title];
//        NSURL *url = [NSURL fileURLWithPath:path];
//        NSDictionary *fileContent = [NSDictionary dictionaryWithContentsOfURL:url];
//        return fileContent;
//    }else{return nil;}
//}
//-(NSArray*)arrayOfFoldersInFolder:(NSString*) folder {
//    
//    NSFileManager *fm = [NSFileManager defaultManager];
//    NSArray* files = [fm directoryContentsAtPath:folder];
//    NSMutableArray *directoryList = [NSMutableArray arrayWithCapacity:200];
//    
//    for(NSString *file in files) {
//        NSString *path = [folder stringByAppendingPathComponent:file];
//        BOOL isDir = NO;
//        [fm fileExistsAtPath:path isDirectory:(&isDir)];
//        if(isDir) {
//            [directoryList addObject:file];
//            NSLog(@"Printing stuff: %@", file);
//        }
//    }
//    
//    return directoryList;
//}
////- (NSArray*)scanPath:(NSString *) sPath {
////
////    BOOL isDir;
////
////    [[NSFileManager defaultManager] fileExistsAtPath:sPath isDirectory:&isDir];
////
////    if(isDir)
////    {
////        NSArray *contentOfDirectory=[[NSFileManager defaultManager] contentsOfDirectoryAtPath:sPath error:NULL];
////
////        int contentcount = [contentOfDirectory count];
////        int i;
////        for(i=0;i<contentcount;i++)
////        {
////            NSString *fileName = [contentOfDirectory objectAtIndex:i];
////            NSString *path = [sPath stringByAppendingFormat:@"%@%@",@"/",fileName];
////
////
////            if([[NSFileManager defaultManager] isDeletableFileAtPath:path])
////            {
////                //NSLog(path);
////                [self scanPath:path];
////            }
////        }
////        //   NSLog(@"Number of items: %d", i);
////        // quantity = i;
////        return contentOfDirectory;
////
////    }
////    else
////    {
////        NSString *msg=[NSString stringWithFormat:@"%@",sPath];
////        // NSLog(msg);
////    }
////    return nil;
////}
//- (NSDictionary*)scanPath:(NSString *) sPath {
//    // NSDictionary *everything;
//    NSDictionary *everything;
//    
//    BOOL isDir;
//    NSString *nom;
//    
//    [[NSFileManager defaultManager] fileExistsAtPath:sPath isDirectory:&isDir];
//    
//    if(isDir)
//    {
//        NSArray *contentOfDirectory=[[NSFileManager defaultManager] contentsOfDirectoryAtPath:sPath error:NULL];
//        
//        int contentcount = [contentOfDirectory count];
//        int i;
//        NSString *fileContents[contentcount];
//        for(i=0;i<contentcount;i++)
//        {
//            NSString *fileName = [contentOfDirectory objectAtIndex:i];
//            
//            
//            
//            
//            
//            
//            NSLog(@"%@", fileName);
//            NSString *path = [sPath stringByAppendingFormat:@"%@%@",@"/",fileName];
//            fileContents[i] = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil];
//            // NSLog(@"README %@", fileContents[i]);
//            nom = [NSString stringWithFormat:@"%d", i];
//            //if (fileContents[i] != nil){
//            
//            
//            //[everything setValue:fileContents[i] forKey:nom];
//            //NSLog(@"%@", [everything objectForKey:nom]);
//            
//            if([[NSFileManager defaultManager] isDeletableFileAtPath:path])
//            {
//                [self scanPath:path];
//            }
//            
//        }
//        //NSLog(@"%@", everything);
//        // quantity = i;
//        
//        //NSLog(@"Count: %d", i);
//        int y;
//        NSDictionary* dictionary;
//        NSString *help;
//        //        for(y = 0; y < i; y++){
//        //            NSString* help = [NSString stringWithFormat:@"%d",y ];
//        //            [dictionary setValue:fileContents[y] forKey:help];
//        //       // NSLog(@"%@", fileContents[y]);
//        //        }
//        //        NSLog(@"%@", [dictionary valueForKey:help]);
//        
//        //NSLog(@"%@", fileContents[i--]);
//        return everything;
//        
//    }
//    else
//    {
//        NSString *msg=[NSString stringWithFormat:@"%@",sPath];
//        // NSLog(msg);
//    }
//    return nil;
//}
//-(NSString*)Digest:(NSDictionary*)info{
//    NSString* item = [NSString stringWithFormat:@"entry.813025841=%@", [info objectForKey:@"Team Number"]];
//    item = [NSString stringWithFormat:@"%@&entry.777222975=%@", item, [info objectForKey:@"Match Number"]];
//    if([[info objectForKey:@"Courtyard"] isEqual:@"1"]){
//        item = [NSString stringWithFormat:@"%@&entry.261331349=%@", item, [info objectForKey:@"Courtyard"]];
//    }else if([[info objectForKey:@"Neutral Zone"] isEqual: @"1"]){
//        item = [NSString stringWithFormat:@"%@&entry.261331349=%@", item, [info objectForKey:@"Neutral Zone"]];
//    }else if([[info objectForKey:@"Spy Box"] isEqual:@"1"]){
//        item = [NSString stringWithFormat:@"%@&entry.261331349=%@", item, [info objectForKey:@"Spy Box"]];
//    }
//    NSString *etc = @"";
//    if([[info objectForKey:@"Crossed a defense"] isEqual:@"1"]){
//        etc = [NSString stringWithFormat:@"%@Crossed a defense,", etc];
//    }
//    if([[info objectForKey:@"Reached a defense"] isEqual:@"1"]){
//        etc = [NSString stringWithFormat:@"%@Reached a defense,", etc];
//    }if([[info objectForKey:@"Low Goal"] isEqual:@"1"]){
//        etc = [NSString stringWithFormat:@"%@Low Goal,",etc];
//    }if([[info objectForKey:@"High Goal"] isEqual:@"1"]){
//        etc = [NSString stringWithFormat:@"%@High Goal,", etc];
//    }
//    item = [NSString stringWithFormat:@"%@&entry.1457582528=%@", item, etc];
//    item = [NSString stringWithFormat:@"%@&entry.692810015=%@", item, [info objectForKey:@"Cheval De Frise"]];
//    item = [NSString stringWithFormat:@"%@&entry.1022071610=%@", item, [info objectForKey:@"Draw Bridge"]];
//    item = [NSString stringWithFormat:@"%@&entry.2105397300=%@", item, [info objectForKey:@"Low Bar"]];
//    item = [NSString stringWithFormat:@"%@&entry.232625040=%@", item, [info objectForKey:@"Moat"]];
//    item = [NSString stringWithFormat:@"%@&entry.948750806=%@", item, [info objectForKey:@"Portcullis"]];
//    item = [NSString stringWithFormat:@"%@&entry.997255660=%@", item, [info objectForKey:@"Rockwall"]];
//    item = [NSString stringWithFormat:@"%@&entry.1269434723=%@", item, [info objectForKey:@"Rough Terrain"]];
//    item = [NSString stringWithFormat:@"%@&entry.1510219932=%@", item, [info objectForKey:@"Sally Port"]];
//    item = [NSString stringWithFormat:@"%@&entry.810830027=%@", item, [info objectForKey:@"Ramparts"]];
//    item = [NSString stringWithFormat:@"%@&entry.922677734=%@", item, [info objectForKey:@"High Goals"]];
//    item = [NSString stringWithFormat:@"%@&entry.1434193940=%@", item, [info objectForKey:@"Low Goals"]];
//    NSString *etc2 = @"";
//    if([[info objectForKey:@"Ground"]isEqual:@"1"]){
//        etc2 = [NSString stringWithFormat:@"%@Ground,",etc2];
//    }if([[info objectForKey:@"Secret Passage"]isEqual:@"1"]){
//        etc2 = [NSString stringWithFormat:@"%@Secret Passage,", etc2];
//    }if([[info objectForKey:@"Pre-Loaded"]isEqual:@"1"]){
//        etc2= [NSString stringWithFormat:@"%@Pre Loaded,", etc2];
//    }
//    item = [NSString stringWithFormat:@"%@&entry.2032659013=%@", item, etc2];
//    
//    NSString* etc3 = @"";
//    if([[info objectForKey:@"Red Card"]isEqual:@"1"]){
//        etc3 = [NSString stringWithFormat:@"%@Red Card,",etc3];
//    }if([[info objectForKey:@"Foul"]isEqual:@"1"]){
//        etc3 = [NSString stringWithFormat:@"%@Foul,", etc3];
//    }if([[info objectForKey:@"Yellow Card"]isEqual:@"1"]){
//        etc3= [NSString stringWithFormat:@"%@Yellow Card,", etc3];
//    }if([[info objectForKey:@"Technical Foul"]isEqual:@"1"]){
//        etc3= [NSString stringWithFormat:@"%@Technical Foul,", etc3];
//    }
//    item = [NSString stringWithFormat:@"%@&entry.1557361793=%@", item, etc3];
//    item = [NSString stringWithFormat:@"%@&entry.1459319659=%@", item, [info objectForKey:@"Total Score"]];
//    item = [NSString stringWithFormat:@"%@&entry.1784012999=%@", item, [info objectForKey:@"Robot Comments"]];
//    item = [NSString stringWithFormat:@"%@&entry.292897778=%@", item, [info objectForKey:@"Driver Comments"]];
//    
//    
//    return item;
//}
//- (void)viewDidLoad {
//    [super viewDidLoad];
//    NSDictionary* derp = [[NSDictionary alloc] init];
//    derp=@{
//           @"HAI": @"herro",
//           };
//    NSError *error;
//    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
//    NSString *documentsDirectory = [paths objectAtIndex:0]; // Get documents folder
//    NSString *dataPath = [documentsDirectory stringByAppendingPathComponent:@"/Scouting"];
//    
//    if (![[NSFileManager defaultManager] fileExistsAtPath:dataPath])
//        [[NSFileManager defaultManager] createDirectoryAtPath:dataPath withIntermediateDirectories:NO attributes:nil error:&error];
//    NSString *myString = [NSString stringWithFormat:@"%@", derp];
//    
//    double unixTime = [[NSDate date] timeIntervalSince1970];
//    NSString *UnixTime = [NSString stringWithFormat:@"%f", unixTime];
//    
//    NSDirectoryEnumerator *de = [[NSFileManager defaultManager] enumeratorAtPath:documentsDirectory] ;
//    
//    documentsDirectory = [NSString stringWithFormat:@"%@/Scouting", documentsDirectory];
//    
//    
//    
//    BOOL succeed = [myString writeToFile:[documentsDirectory stringByAppendingPathComponent:[NSString stringWithFormat:@"%@", UnixTime]] // Overwrites file with string,
//                              atomically:YES encoding:NSUTF8StringEncoding error:&error];
//    if (!succeed){
//        // Handle error here
//    }
//    NSString * combinedStuff = [paths componentsJoinedByString:@""];
//    
//    NSDictionary* Items = [self scanPath:combinedStuff];
//    //NSLog(@"%@", combinedStuff);
//    
//}
//
//- (void)didReceiveMemoryWarning {
//    [super didReceiveMemoryWarning];
//    // Dispose of any resources that can be recreated.
//}
//
//@end
