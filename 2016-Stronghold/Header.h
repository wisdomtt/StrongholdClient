////
////  ViewController.m
////  2016-Stronghold
////
////  Created by Curtis Mason on 3/8/16.
////  Copyright © 2016 Curtis Mason. All rights reserved.
////
//
//#import "ViewController.h"
//#include "Push.h"
//@interface ViewController ()
//
//@property (weak, nonatomic) IBOutlet UILabel *TotalScore;
//@property (weak, nonatomic) IBOutlet UIButton *TeleHighNeg;
//@property (weak, nonatomic) IBOutlet UILabel *TeleHighV;
//@property (weak, nonatomic) IBOutlet UIButton *TeleHighPos;
//
//@property (weak, nonatomic) IBOutlet UIButton *TeleLowNeg;
//@property (weak, nonatomic) IBOutlet UILabel *TeleLowV;
//@property (weak, nonatomic) IBOutlet UIButton *TeleLowPos;
//
//@property (weak, nonatomic) IBOutlet UITextView *DriverCommentsBox;
//
//@property (weak, nonatomic) IBOutlet UITextView *RobocCommentsBox;
//@property (weak, nonatomic) IBOutlet UIButton *ChevalDeFrisePositive;
//@property (weak, nonatomic) IBOutlet UIButton *ChevalDeFriseNegative;
//@property (weak, nonatomic) IBOutlet UIButton *DrawBridgeNegative;
//@property (weak, nonatomic) IBOutlet UIButton *DrawBridgePositive;
//@property (weak, nonatomic) IBOutlet UIButton *LowBarNegative;
//@property (weak, nonatomic) IBOutlet UIButton *LowBarPositive;
//@property (weak, nonatomic) IBOutlet UIButton *MoatPositive;
//@property (weak, nonatomic) IBOutlet UIButton *MoatNegative;
//@property (weak, nonatomic) IBOutlet UIButton *PortcullisPositive;
//@property (weak, nonatomic) IBOutlet UILabel *RoughterrainLabel;
//@property (weak, nonatomic) IBOutlet UILabel *SallyportLabel;
//@property (weak, nonatomic) IBOutlet UILabel *RampartsLabel;
//@property (weak, nonatomic) IBOutlet UIButton *PortcullisNegative;
//@property (weak, nonatomic) IBOutlet UILabel *RockwallLabel;
//@property (weak, nonatomic) IBOutlet UILabel *PortcullisLabel;
//@property (weak, nonatomic) IBOutlet UILabel *MoatLabel;
//@property (weak, nonatomic) IBOutlet UIButton *RockwallPositive;
//@property (weak, nonatomic) IBOutlet UILabel *DrawbridgeLabel;
//@property (weak, nonatomic) IBOutlet UILabel *LowbarLabel;
//@property (weak, nonatomic) IBOutlet UIButton *RockwallNegative;
//@property (weak, nonatomic) IBOutlet UILabel *ChevaldefriseLabel;
//@property (weak, nonatomic) IBOutlet UIButton *RoughterrainPositive;
//@property (weak, nonatomic) IBOutlet UIImageView *ChevaldefriseImage;
//@property (weak, nonatomic) IBOutlet UIButton *RoughterrainNegative;
//@property (weak, nonatomic) IBOutlet UIImageView *DrawbridgeImage;
//@property (weak, nonatomic) IBOutlet UIButton *SallyportPositive;
//@property (weak, nonatomic) IBOutlet UIImageView *MoatImage;
//@property (weak, nonatomic) IBOutlet UIImageView *LowbarImage;
//@property (weak, nonatomic) IBOutlet UIButton *SallyportNegative;
//@property (weak, nonatomic) IBOutlet UIButton *RampartsPositive;
//@property (weak, nonatomic) IBOutlet UIButton *RampartsNegative;
//@property (weak, nonatomic) IBOutlet UIImageView *PortcullisImage;
//@property (weak, nonatomic) IBOutlet UIImageView *RampartsImage;
//@property (weak, nonatomic) IBOutlet UIImageView *SallyportImage;
//@property (weak, nonatomic) IBOutlet UIImageView *RoughterrainImage;
//@property (weak, nonatomic) IBOutlet UIImageView *RockwallImage;
//
//@property (weak, nonatomic) IBOutlet UIButton *spyBox;
//@property (weak, nonatomic) IBOutlet UIButton *courtyard;
//@property (weak, nonatomic) IBOutlet UIButton *neutralZone;
//@property (weak, nonatomic) IBOutlet UITextView *RobotComments;
//@property (weak, nonatomic) IBOutlet UITextView *DriverComments;
//@property (weak, nonatomic) IBOutlet UILabel *ChevalDeFriseV;
//@property (weak, nonatomic) IBOutlet UILabel *DrawBridgeV;
//@property (weak, nonatomic) IBOutlet UILabel *LowBarV;
//@property (weak, nonatomic) IBOutlet UILabel *MoatV;
//@property (weak, nonatomic) IBOutlet UILabel *PortcullisV;
//@property (weak, nonatomic) IBOutlet UILabel *RockwallV;
//@property (weak, nonatomic) IBOutlet UILabel *RoughterrainV;
//@property (weak, nonatomic) IBOutlet UILabel *SallyportV;
//@property (weak, nonatomic) IBOutlet UILabel *RampartsV;
//@property (weak, nonatomic) IBOutlet UITextField *MatchNumber;
//@property (weak, nonatomic) IBOutlet UITextField *TeamNumber;
//
//
//@end
//
//@implementation ViewController
//@synthesize spyBox;
//@synthesize courtyard;
//@synthesize neutralZone;
//@synthesize RobotComments;
//@synthesize DriverComments;
//@synthesize ChevalDeFriseV;
//@synthesize DrawBridgeV;
//@synthesize LowBarV;
//@synthesize MoatV;
//@synthesize PortcullisV;
//@synthesize RockwallV;
//@synthesize RoughterrainV;
//@synthesize SallyportV;
//@synthesize RampartsV;
//@synthesize MatchNumber;
//@synthesize TeamNumber;
//MPCHandler *object;
//NSDictionary* TeamInfo;
//NSString *pMatchNumber = nil;
//NSString *pTeamNumber = nil;
//
//bool DidTheyDoNothing = false;
//
//int ChevalDeFrise = 0;
//int DrawBridge = 0;
//int LowBar = 0;
//int Moat = 0;
//int Portcullis = 0;
//int Rockwall = 0;
//int RoughTerrain = 0;
//int SallyPort = 0;
//int Ramparts = 0;
//int totalScore = 0;
//int pHighGoals = 0;
//int pLowGoals = 0;
//int i = 0;
//
//bool Scale = false;
//bool Weaken = false;
//bool Breach = false;
//bool Capture = false;
//bool Challenge = false;
//
//bool NeutralZone = false;
//bool SpyBox = false;
//bool Courtyard = false;
//
//bool ReachedADefense = false;
//bool CrossedADefense = false;
//bool LowGoal = false;
//bool HighGoal = false;
//bool Nothing = false;
//
//bool PreLoaded = false;
//bool SecretPassage = false;
//bool Ground = false;
//bool NoPickup = false;
//
//bool Foul = false;
//bool TechnicalFoul = false;
//bool YellowCard = false;
//bool RedCard = false;
//bool Disabled = false;
//
//NSString *pRobotComments = nil;
//NSString *pDriverComments = nil;
//
//- (void)viewDidLoad {
//    [super viewDidLoad];
//    
//    _TeleHighNeg.layer.borderColor = [UIColor blackColor].CGColor;
//    _TeleHighNeg.layer.borderWidth = 1.0;
//    _TeleHighV.layer.borderColor = [UIColor blackColor].CGColor;
//    _TeleHighV.layer.borderWidth = 1.0;
//    _TeleHighPos.layer.borderColor = [UIColor blackColor].CGColor;
//    _TeleHighPos.layer.borderWidth = 1.0;
//    _TeleLowNeg.layer.borderColor = [UIColor blackColor].CGColor;
//    _TeleLowNeg.layer.borderWidth = 1.0;
//    
//    _TeleLowPos.layer.borderColor = [UIColor blackColor].CGColor;
//    _TeleLowPos.layer.borderWidth = 1.0;
//    _TeleLowV.layer.borderColor = [UIColor blackColor].CGColor;
//    _TeleLowV.layer.borderWidth = 1.0;
//    
//    _RobocCommentsBox.layer.borderColor = [UIColor blackColor].CGColor;
//    _RobocCommentsBox.layer.borderWidth = 1.0;
//    
//    _DriverCommentsBox.layer.borderColor = [UIColor blackColor].CGColor;
//    _DriverCommentsBox.layer.borderWidth = 1.0;
//    _ChevaldefriseLabel.layer.borderColor = [UIColor blackColor].CGColor;
//    _ChevaldefriseLabel.layer.borderWidth = 1.0;
//    _DrawbridgeLabel.layer.borderWidth = 1.0;
//    _DrawbridgeLabel.layer.borderColor = [UIColor blackColor].CGColor;
//    _LowbarLabel.layer.borderWidth = 1.0;
//    _LowbarLabel.layer.borderColor = [UIColor blackColor].CGColor;
//    _MoatLabel.layer.borderWidth = 1.0;
//    _MoatLabel.layer.borderColor = [UIColor blackColor].CGColor;
//    _PortcullisLabel.layer.borderWidth = 1.0;
//    _PortcullisLabel.layer.borderColor = [UIColor blackColor].CGColor;
//    _RockwallLabel.layer.borderWidth = 1.0;
//    _RockwallLabel.layer.borderColor = [UIColor blackColor].CGColor;
//    _RoughterrainLabel.layer.borderWidth = 1.0;
//    _RoughterrainLabel.layer.borderColor = [UIColor blackColor].CGColor;
//    _SallyportLabel.layer.borderWidth = 1.0;
//    _SallyportLabel.layer.borderColor = [UIColor blackColor].CGColor;
//    _RampartsLabel.layer.borderWidth = 1.0;
//    _RampartsLabel.layer.borderColor = [UIColor blackColor].CGColor;
//    
//    
//    _ChevaldefriseImage.layer.borderWidth = 1.0;
//    _ChevaldefriseImage.layer.borderColor = [UIColor blackColor].CGColor;
//    _DrawbridgeImage.layer.borderWidth = 1.0;
//    _DrawbridgeImage.layer.borderColor = [UIColor blackColor].CGColor;
//    _LowbarImage.layer.borderWidth = 1.0;
//    _LowbarImage.layer.borderColor = [UIColor blackColor].CGColor;
//    _MoatImage.layer.borderWidth = 1.0;
//    _MoatImage.layer.borderColor = [UIColor blackColor].CGColor;
//    _PortcullisImage.layer.borderWidth = 1.0;
//    _PortcullisImage.layer.borderColor = [UIColor blackColor].CGColor;
//    _RockwallImage.layer.borderWidth = 1.0;
//    _RockwallImage.layer.borderColor = [UIColor blackColor].CGColor;
//    _RoughterrainImage.layer.borderWidth = 1.0;
//    _RoughterrainImage.layer.borderColor = [UIColor blackColor].CGColor;
//    _SallyportImage.layer.borderWidth = 1.0;
//    _SallyportImage.layer.borderColor = [UIColor blackColor].CGColor;
//    _RampartsImage.layer.borderWidth = 1.0;
//    _RampartsImage.layer.borderColor = [UIColor blackColor].CGColor;
//    
//    _ChevalDeFrisePositive.layer.borderWidth = 1.0;
//    _ChevalDeFrisePositive.layer.borderColor = [UIColor blackColor].CGColor;
//    _DrawBridgePositive.layer.borderWidth = 1.0;
//    _DrawBridgePositive.layer.borderColor = [UIColor blackColor].CGColor;
//    _LowBarPositive.layer.borderWidth = 1.0;
//    _LowBarPositive.layer.borderColor = [UIColor blackColor].CGColor;
//    _MoatPositive.layer.borderWidth = 1.0;
//    _MoatPositive.layer.borderColor = [UIColor blackColor].CGColor;
//    _PortcullisPositive.layer.borderWidth = 1.0;
//    _PortcullisPositive.layer.borderColor = [UIColor blackColor].CGColor;
//    _RockwallPositive.layer.borderWidth = 1.0;
//    _RockwallPositive.layer.borderColor = [UIColor blackColor].CGColor;
//    _RoughterrainPositive.layer.borderWidth = 1.0;
//    _RoughterrainPositive.layer.borderColor = [UIColor blackColor].CGColor;
//    _SallyportPositive.layer.borderWidth = 1.0;
//    _SallyportPositive.layer.borderColor = [UIColor blackColor].CGColor;
//    _RampartsPositive.layer.borderWidth = 1.0;
//    _RampartsPositive.layer.borderColor = [UIColor blackColor].CGColor;
//    
//    
//    _ChevalDeFriseNegative.layer.borderWidth = 1.0;
//    _ChevalDeFriseNegative.layer.borderColor = [UIColor blackColor].CGColor;
//    _DrawBridgeNegative.layer.borderWidth = 1.0;
//    _DrawBridgeNegative.layer.borderColor = [UIColor blackColor].CGColor;
//    _LowBarNegative.layer.borderWidth = 1.0;
//    _LowBarNegative.layer.borderColor = [UIColor blackColor].CGColor;
//    _MoatNegative.layer.borderWidth = 1.0;
//    _MoatNegative.layer.borderColor = [UIColor blackColor].CGColor;
//    _PortcullisNegative.layer.borderWidth = 1.0;
//    _PortcullisNegative.layer.borderColor = [UIColor blackColor].CGColor;
//    _RockwallNegative.layer.borderWidth = 1.0;
//    _RockwallNegative.layer.borderColor = [UIColor blackColor].CGColor;
//    _RoughterrainNegative.layer.borderWidth = 1.0;
//    _RoughterrainNegative.layer.borderColor = [UIColor blackColor].CGColor;
//    _SallyportNegative.layer.borderWidth = 1.0;
//    _SallyportNegative.layer.borderColor = [UIColor blackColor].CGColor;
//    _RampartsNegative.layer.borderWidth = 1.0;
//    _RampartsNegative.layer.borderColor = [UIColor blackColor].CGColor;
//    
//    ////
//    ChevalDeFriseV.layer.borderWidth = 1.0;
//    ChevalDeFriseV.layer.borderColor = [UIColor blackColor].CGColor;
//    DrawBridgeV.layer.borderWidth = 1.0;
//    DrawBridgeV.layer.borderColor = [UIColor blackColor].CGColor;
//    LowBarV.layer.borderWidth = 1.0;
//    LowBarV.layer.borderColor = [UIColor blackColor].CGColor;
//    MoatV.layer.borderWidth = 1.0;
//    MoatV.layer.borderColor = [UIColor blackColor].CGColor;
//    PortcullisV.layer.borderWidth = 1.0;
//    PortcullisV.layer.borderColor = [UIColor blackColor].CGColor;
//    RockwallV.layer.borderWidth = 1.0;
//    RockwallV.layer.borderColor = [UIColor blackColor].CGColor;
//    RoughterrainV.layer.borderWidth = 1.0;
//    RoughterrainV.layer.borderColor = [UIColor blackColor].CGColor;
//    SallyportV.layer.borderWidth = 1.0;
//    SallyportV.layer.borderColor = [UIColor blackColor].CGColor;
//    RampartsV.layer.borderWidth = 1.0;
//    RampartsV.layer.borderColor = [UIColor blackColor].CGColor;
//    
//    
//    
//    
//    object = [[MPCHandler alloc] init];
//    //[object setupPeerWithDisplayName:[[UIDevice currentDevice] name]];
//    [object setupPeerWithDisplayName:@"IT WORKZ"];
//    
//    [object setupSession];
//    [object setupBrowser];
//    // Do any additional setup after loading the view, typically from a nib.
//    
//    
//    NSError *error;
//    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
//    NSString *documentsDirectory = [paths objectAtIndex:0]; // Get documents folder
//    NSString *dataPath = [documentsDirectory stringByAppendingPathComponent:@"/Scouting"];
//    if (![[NSFileManager defaultManager] fileExistsAtPath:dataPath])
//        [[NSFileManager defaultManager] createDirectoryAtPath:dataPath withIntermediateDirectories:NO attributes:nil error:&error];
//}
//- (IBAction)RampartsPlus:(id)sender {
//    Ramparts++;
//    RampartsV.text = [NSString stringWithFormat:@"%d", Ramparts];
//    [self Calculate];
//    
//}
//- (IBAction)RampartsMinus:(id)sender {
//    Ramparts--;
//    RampartsV.text = [NSString stringWithFormat:@"%d", Ramparts];
//    [self Calculate];
//    
//}
//- (IBAction)SallyPortPlus:(id)sender {
//    SallyPort++;
//    SallyportV.text = [NSString stringWithFormat:@"%d", SallyPort];
//    [self Calculate];
//    
//}
//-(IBAction)HighGoalsPositive:(id)sender{
//    pHighGoals++;
//    _TeleHighV.text = [NSString stringWithFormat:@"%d", pHighGoals];
//    [self Calculate];
//    
//}
//-(IBAction)HighGoalsMinus:(id)sender{
//    pHighGoals--;
//    _TeleHighV.text = [NSString stringWithFormat:@"%d", pHighGoals];
//    [self Calculate];
//    
//}
//
//-(IBAction)LogGoalsMinus:(id)sender{
//    pLowGoals--;
//    _TeleLowV.text = [NSString stringWithFormat:@"%d", pLowGoals];
//    [self Calculate];
//    
//}
//
//-(IBAction)LowGoalsPositive:(id)sender{
//    pLowGoals++;
//    _TeleLowV.text = [NSString stringWithFormat:@"%d", pLowGoals];
//    [self Calculate];
//    
//}
//
//
//
//
//
//
//- (IBAction)SallyPortMinus:(id)sender {
//    SallyPort--;
//    SallyportV.text = [NSString stringWithFormat:@"%d", SallyPort];
//    [self Calculate];
//}
//- (IBAction)RoughTerrainPlus:(id)sender {
//    RoughTerrain++;
//    RoughterrainV.text = [NSString stringWithFormat:@"%d", RoughTerrain];
//    [self Calculate];
//}
//- (IBAction)RoughTerrainMinus:(id)sender {
//    RoughTerrain--;
//    RoughterrainV.text = [NSString stringWithFormat:@"%d", RoughTerrain];
//    [self Calculate];
//}
//- (IBAction)RockwallPlus:(id)sender {
//    Rockwall++;
//    RockwallV.text = [NSString stringWithFormat:@"%d", Rockwall];
//    [self Calculate];
//}
//- (IBAction)RockwallMinus:(id)sender {
//    Rockwall--;
//    RockwallV.text = [NSString stringWithFormat:@"%d", Rockwall];
//    [self Calculate];
//}
//- (IBAction)PortcullisPlus:(id)sender {
//    Portcullis++;
//    PortcullisV.text = [NSString stringWithFormat:@"%d", Portcullis];
//    [self Calculate];
//}
//- (IBAction)PortcullisMinus:(id)sender {
//    Portcullis--;
//    PortcullisV.text = [NSString stringWithFormat:@"%d", Portcullis];
//    [self Calculate];
//}
//- (IBAction)MoatMinus:(id)sender {
//    Moat--;
//    MoatV.text = [NSString stringWithFormat:@"%d", Moat];
//    [self Calculate];
//}
//- (IBAction)MoatPlus:(id)sender {
//    Moat++;
//    MoatV.text = [NSString stringWithFormat:@"%d", Moat];
//    [self Calculate];
//}
//- (IBAction)LowBarPlus:(id)sender {
//    LowBar++;
//    LowBarV.text = [NSString stringWithFormat:@"%d", LowBar];
//    [self Calculate];
//}
//- (IBAction)LowBarMinus:(id)sender {
//    LowBar--;
//    LowBarV.text = [NSString stringWithFormat:@"%d", LowBar];
//    [self Calculate];
//}
//
//- (IBAction)DrawBridgePlus:(id)sender {
//    DrawBridge++;
//    DrawBridgeV.text = [NSString stringWithFormat:@"%d", DrawBridge];
//    [self Calculate];
//}
//
//- (IBAction)DrawBridgeMinus:(id)sender {
//    DrawBridge--;
//    DrawBridgeV.text = [NSString stringWithFormat:@"%d", DrawBridge]
//    ;
//    [self Calculate];
//}
//
//- (IBAction)ChevalDeFrisePlus:(id)sender {
//    ChevalDeFrise++;
//    ChevalDeFriseV.text = [NSString stringWithFormat:@"%d", ChevalDeFrise];
//    [self Calculate];
//}
//
//- (IBAction)ChevalDeFriseMinus:(id)sender {
//    ChevalDeFrise--;
//    ChevalDeFriseV.text = [NSString stringWithFormat:@"%d", ChevalDeFrise];
//    [self Calculate];
//}
//
//-(IBAction)Courtyard:(id)sender{
//    UIButton *button = sender;
//    if (Courtyard == false) {
//        [button setTitle:@"Courtyard (\u2219)" forState:UIControlStateNormal];
//        Courtyard = true;
//        NeutralZone = false;
//        SpyBox = false;
//        
//        [neutralZone setTitle:@"Neutral Zone (_)" forState:(UIControlStateNormal)];
//        [spyBox setTitle:@"Spy Box (_)" forState:(UIControlStateNormal)];
//    }
//    else{
//        [button setTitle:@"Courtyard (_)" forState:UIControlStateNormal];
//        Courtyard = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)SpyBox:(id)sender{
//    UIButton *button = sender;
//    if (SpyBox == false) {
//        [button setTitle:@"Spy Box (\u2219)" forState:UIControlStateNormal];
//        SpyBox = true;
//        NeutralZone = false;
//        Courtyard = false;
//        
//        [neutralZone setTitle:@"Neutral Zone (_)" forState:(UIControlStateNormal)];
//        [courtyard setTitle:@"Courtyard (_)" forState:(UIControlStateNormal)];
//    }
//    else{
//        [button setTitle:@"Spy Box (_)" forState:UIControlStateNormal];
//        SpyBox = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)NeutralZone:(id)sender{
//    UIButton *button = sender;
//    if (NeutralZone == false) {
//        [button setTitle:@"Neutral Zone (\u2219)" forState:UIControlStateNormal];
//        NeutralZone = true;
//        SpyBox = false;
//        Courtyard = false;
//        [spyBox setTitle:@"Spy Box (_)" forState:(UIControlStateNormal)];
//        [courtyard setTitle:@"Courtyard (_)" forState:(UIControlStateNormal)];
//    }
//    else{
//        [button setTitle:@"Neutral Zone (_)" forState:UIControlStateNormal];
//        NeutralZone = false;
//        
//    }
//    [self Calculate];
//}
//
//-(IBAction)RedCard:(id)sender{
//    UIButton *button = sender;
//    if (RedCard == false) {
//        [button setTitle:@"Red Card (\u2219)" forState:UIControlStateNormal];
//        RedCard = true;
//    }
//    else{
//        [button setTitle:@"Red Card (_)" forState:UIControlStateNormal];
//        RedCard = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)YellowCard:(id)sender{
//    UIButton *button = sender;
//    if (YellowCard == false) {
//        [button setTitle:@"Yellow Card (\u2219)" forState:UIControlStateNormal];
//        YellowCard = true;
//    }
//    else{
//        [button setTitle:@"Yellow Card (_)" forState:UIControlStateNormal];
//        YellowCard = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)TechnicalFoul:(id)sender{
//    UIButton *button = sender;
//    if (TechnicalFoul == false) {
//        [button setTitle:@"Technical Foul (\u2219)" forState:UIControlStateNormal];
//        TechnicalFoul = true;
//    }
//    else{
//        [button setTitle:@"Technical Foul (_)" forState:UIControlStateNormal];
//        TechnicalFoul = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)Foul:(id)sender{
//    UIButton *button = sender;
//    if (Foul == false) {
//        [button setTitle:@"Ground (\u2219)" forState:UIControlStateNormal];
//        Foul = true;
//    }
//    else{
//        [button setTitle:@"Ground (_)" forState:UIControlStateNormal];
//        Foul = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)NoPickup:(id)sender{
//    UIButton *button = sender;
//    if (NoPickup == false) {
//        [button setTitle:@"No Pickup (\u2219)" forState:UIControlStateNormal];
//        NoPickup = true;
//    }
//    else{
//        [button setTitle:@"No Pickup (_)" forState:UIControlStateNormal];
//        NoPickup = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)Ground:(id)sender{
//    UIButton *button = sender;
//    if (Ground == false) {
//        [button setTitle:@"Ground (\u2219)" forState:UIControlStateNormal];
//        Ground = true;
//    }
//    else{
//        [button setTitle:@"Ground (_)" forState:UIControlStateNormal];
//        Ground = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)SecretPassage:(id)sender{
//    UIButton *button = sender;
//    if (SecretPassage == false) {
//        [button setTitle:@"Secret Passage (\u2219)" forState:UIControlStateNormal];
//        SecretPassage = true;
//    }
//    else{
//        [button setTitle:@"Secret Passage (_)" forState:UIControlStateNormal];
//        SecretPassage = false;
//        
//    }
//    [self Calculate];
//}
//
//-(IBAction)HighGoal:(id)sender{
//    UIButton *button = sender;
//    if (HighGoal == false) {
//        [button setTitle:@"High Goal (\u2219)" forState:UIControlStateNormal];
//        HighGoal = true;
//    }
//    else{
//        [button setTitle:@"High Goal (_)" forState:UIControlStateNormal];
//        HighGoal = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)LowGoal:(id)sender{
//    UIButton *button = sender;
//    if (LowGoal == false) {
//        [button setTitle:@"Low Goal (\u2219)" forState:UIControlStateNormal];
//        LowGoal = true;
//    }
//    else{
//        [button setTitle:@"Low Goal (_)" forState:UIControlStateNormal];
//        LowGoal = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)CrossedADefense:(id)sender{
//    UIButton *button = sender;
//    if (CrossedADefense == false) {
//        [button setTitle:@"Crossed a defense (\u2219)" forState:UIControlStateNormal];
//        CrossedADefense = true;
//    }
//    else{
//        [button setTitle:@"Crossed a defense (_)" forState:UIControlStateNormal];
//        CrossedADefense = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)ReachedADefense:(id)sender{
//    [self Calculate];
//    
//    UIButton *button = sender;
//    if (ReachedADefense == false) {
//        [button setTitle:@"Reached a defense (\u2219)" forState:UIControlStateNormal];
//        ReachedADefense = true;
//    }
//    else{
//        [button setTitle:@"Reached a defense (_)" forState:UIControlStateNormal];
//        ReachedADefense = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)Challenge:(id)sender{
//    [self Calculate];
//    
//    UIButton *button = sender;
//    if (Challenge == false) {
//        [button setTitle:@"Challenge (\u2219)" forState:UIControlStateNormal];
//        Challenge = true;
//    }
//    else{
//        [button setTitle:@"Challenge (_)" forState:UIControlStateNormal];
//        Challenge = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)Scale:(id)sender{
//    [self Calculate];
//    UIButton *button = sender;
//    if (Scale == false) {
//        [button setTitle:@"Scale? (\u2219)" forState:UIControlStateNormal];
//        Scale = true;
//    }
//    else{
//        [button setTitle:@"Scale? (_)" forState:UIControlStateNormal];
//        Scale = false;
//        
//    }
//    [self Calculate];
//}
//-(IBAction)Reset:(id)sender{
//    
//    pMatchNumber = nil;
//    pTeamNumber = nil;
//    
//    DidTheyDoNothing = false;
//    
//    ChevalDeFrise = 0;
//    DrawBridge = 0;
//    LowBar = 0;
//    Moat = 0;
//    Portcullis = 0;
//    Rockwall = 0;
//    RoughTerrain = 0;
//    SallyPort = 0;
//    Ramparts = 0;
//    
//    pHighGoals = 0;
//    pLowGoals = 0;
//    
//    totalScore = 0;
//    Scale = false;
//    Weaken = false;
//    Breach = false;
//    Capture = false;
//    Challenge = false;
//    
//    NeutralZone = false;
//    SpyBox = false;
//    Courtyard = false;
//    
//    ReachedADefense = false;
//    CrossedADefense = false;
//    LowGoal = false;
//    HighGoal = false;
//    Nothing = false;
//    
//    PreLoaded = false;
//    SecretPassage = false;
//    Ground = false;
//    NoPickup = false;
//    
//    Foul = false;
//    TechnicalFoul = false;
//    YellowCard = false;
//    RedCard = false;
//    Disabled = false;
//    
//    pRobotComments = nil;
//    pDriverComments = nil;
//    
//    
//}
//-(void)Calculate{
//    totalScore = 0;
//    totalScore = totalScore+(ChevalDeFrise*5);
//    totalScore = totalScore+(DrawBridge*5);
//    totalScore = totalScore+(LowBar*5);
//    totalScore = totalScore+(Ramparts*5);
//    totalScore = totalScore+(Portcullis*5);
//    totalScore = totalScore+(SallyPort*5);
//    totalScore = totalScore+(Moat*5);
//    totalScore = totalScore+(RoughTerrain*5);
//    totalScore = totalScore+(Rockwall*5);
//    
//    if(ReachedADefense == true){
//        totalScore = totalScore + 2;
//    }
//    if(CrossedADefense == true){
//        totalScore = totalScore + 10;
//    }
//    if(LowGoal == true){
//        totalScore = totalScore+5;
//    }
//    if(HighGoal == true){
//        totalScore = totalScore+10;
//    }
//    totalScore = totalScore+(pHighGoals*5);
//    totalScore = totalScore+(pLowGoals*2);
//    if(Challenge == true){
//        totalScore = totalScore+5;
//    }
//    if(Scale == true){
//        totalScore = totalScore+15;
//    }
//    
//    _TotalScore.text = [NSString stringWithFormat:@"Total Score: %d", totalScore];
//    
//}
//- (IBAction)Submit:(id)sender {
//    [self Calculate];
//    [self Save:0];
//    
//    int alternatei = i;
//    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
//    NSString *documentsDirectory = [paths objectAtIndex:0]; // Get documents folder
//    documentsDirectory = [NSString stringWithFormat:@"%@/Scouting", documentsDirectory];
//    [self scanPath:documentsDirectory number:alternatei];
//    
//    
//    // NSLog(@"ALTERNATEI:%d", alternatei);
//    //NSLog(@"I:%d", i);
//    [self scanPath:documentsDirectory number:alternatei];
//    [object SEND:[self scanPath:documentsDirectory number:5]];
//    for(alternatei=0;alternatei<i;alternatei++){
//        // NSLog(@"%d", alternatei);
//        [self scanPath:documentsDirectory number:alternatei];
//        //NSLog(@"Here: %@", [self scanPath:documentsDirectory number:alternatei]);
//        [object SEND:[self scanPath:documentsDirectory number:alternatei]];
//    }
//    
//}
//
//-(IBAction)Connect:(id)sender{
//    if (object.session != nil) {
//        [object setupBrowser];
//        [[object browser] setDelegate:self];
//        [self presentViewController:object.browser
//                           animated:YES
//                         completion:nil];
//        [self setTitle:@"Connected"];
//    }
//    
//}
//- (IBAction)Save:(id)sender {
//    
//    //Save Stuff
//    [self Calculate];
//    pRobotComments = RobotComments.text;
//    pDriverComments = DriverComments.text;
//    pMatchNumber = MatchNumber.text;
//    pTeamNumber = TeamNumber.text;
//    TeamInfo = [[NSDictionary alloc]init];
//    
//    TeamInfo = @{
//                 @"Match Number" : pMatchNumber,
//                 @"Team Number" : pTeamNumber,
//                 @"Did they do nothing?" : [NSNumber numberWithBool:DidTheyDoNothing],
//                 @"Cheval De Frise" : [NSNumber numberWithInt:ChevalDeFrise],
//                 @"Draw Bridge" : [NSNumber numberWithInt:DrawBridge],
//                 @"Low Bar" : [NSNumber numberWithInt:LowBar],
//                 @"Moat" : [NSNumber numberWithInt:Moat],
//                 @"Portcullis" : [NSNumber numberWithInt:Portcullis],
//                 @"Rockwall" : [NSNumber numberWithInt:Rockwall],
//                 @"Rough Terrain" : [NSNumber numberWithInt:RoughTerrain],
//                 @"Sally Port" : [NSNumber numberWithInt:SallyPort],
//                 @"Ramparts" : [NSNumber numberWithInt:Ramparts],
//                 @"High Goals" : [NSNumber numberWithInt:pHighGoals],
//                 @"Low Goals" : [NSNumber numberWithInt:pLowGoals],
//                 @"Scale" : [NSNumber numberWithBool: Scale],
//                 @"Weaken" : [NSNumber numberWithBool:Weaken],
//                 @"Breach" : [NSNumber numberWithBool:Breach],
//                 @"Capture" :[NSNumber numberWithBool:Capture],
//                 @"Challenge" :[NSNumber numberWithBool:Challenge],
//                 @"Neutral Zone" :[NSNumber numberWithBool:NeutralZone],
//                 @"Spy Box" :[NSNumber numberWithBool:SpyBox],
//                 @"Courtyard":[NSNumber numberWithBool:Courtyard],
//                 @"Reached a defense":[NSNumber numberWithBool:ReachedADefense],
//                 @"Crossed a defense":[NSNumber numberWithBool:CrossedADefense],
//                 @"Low Goal":[NSNumber numberWithBool:LowGoal],
//                 @"High Goal":[NSNumber numberWithBool:HighGoal],
//                 @"Nothing":[NSNumber numberWithBool:Nothing],
//                 @"Pre-Loaded":[NSNumber numberWithBool:PreLoaded],
//                 @"Secret Passage":[NSNumber numberWithBool:SecretPassage],
//                 @"Ground":[NSNumber numberWithBool:Breach],
//                 @"No Pickup":[NSNumber numberWithBool:NoPickup],
//                 @"Foul":[NSNumber numberWithBool:Foul],
//                 @"Technical Foul":[NSNumber numberWithBool:TechnicalFoul],
//                 @"Yellow Card":[NSNumber numberWithBool:YellowCard],
//                 @"Red Card":[NSNumber numberWithBool:RedCard],
//                 @"Disabled":[NSNumber numberWithBool:Disabled],
//                 @"Robot Comments":pRobotComments,
//                 @"Driver Comments":pDriverComments,
//                 @"Total Score":[NSNumber numberWithInt:totalScore],
//                 };
//    
//    NSString *myString = [NSString stringWithFormat:@"%@", TeamInfo];
//    //NSLog(@"%@", myString);
//    NSError *error;
//    double unixTime = [[NSDate date] timeIntervalSince1970];
//    NSString *UnixTime = [NSString stringWithFormat:@"%f", unixTime];
//    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
//    NSString *documentsDirectory = [paths objectAtIndex:0]; // Get documents folder
//    documentsDirectory = [NSString stringWithFormat:@"%@/Scouting", documentsDirectory];
//    BOOL succeed = [myString writeToFile:[documentsDirectory stringByAppendingPathComponent:[NSString stringWithFormat:@"%@", UnixTime]] atomically:YES encoding:NSUTF8StringEncoding error:&error];                        //NSLog(@"%@", myString);
//    
//    if (!succeed){
//        
//    }else if(succeed){
//        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Saved"
//                                                        message:@"Saved"
//                                                       delegate:nil
//                                              cancelButtonTitle:@"Ok"
//                                              otherButtonTitles:nil];
//        [alert show];
//        //[alert dismissWithClickedButtonIndex:0 animated:NO];
//    }
//    
//    // NSDictionary* All[100] = [self scanPath:documentsDirectory];
//}
//
//- (NSString*)scanPath:(NSString *) sPath number:(int)d{
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
//        // int i;
//        NSString *fileContents[contentcount];
//        for(i=0;i<contentcount;i++)
//        {
//            NSString *fileName = [contentOfDirectory objectAtIndex:i];
//            //NSLog(@"%@", fileName);
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
//            //            if([[NSFileManager defaultManager] isDeletableFileAtPath:path])
//            //            {
//            //                [self scanPath:path];
//            //            }
//            
//        }
//        // NSLog(@"I again: %d", i);
//        
//        return fileContents[d];
//    }
//    else
//    {
//        NSString *msg=[NSString stringWithFormat:@"%@",sPath];
//        // NSLog(msg);
//    }
//    
//    return nil;
//}
//
//- (void)didReceiveMemoryWarning {
//    [super didReceiveMemoryWarning];
//    // Dispose of any resources that can be recreated.
//}
//#pragma mark -
//#pragma mark Browser View Controller Delegate Methods
//- (void)browserViewControllerDidFinish:(MCBrowserViewController *)browserViewController {
//    ViewController *lobby = [[ViewController alloc] init];
//    [self presentViewController:lobby animated:YES completion:nil];
//}
//
//- (void)browserViewControllerWasCancelled:(MCBrowserViewController *)browserViewController {
//    [object.browser dismissViewControllerAnimated:YES completion:nil];
//}
//
//
//@end
//
