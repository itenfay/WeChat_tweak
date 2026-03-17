//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface ShareConfirmViewRootController : NSObject
{
    unsigned long long _orientationMask;
    CDUnknownBlockType _didTransitionToNewSize;
}

@property(copy, nonatomic) CDUnknownBlockType didTransitionToNewSize; // @synthesize didTransitionToNewSize=_didTransitionToNewSize;
@property(nonatomic) unsigned long long orientationMask; // @synthesize orientationMask=_orientationMask;
- (void)viewDidTransitionToNewSize;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
