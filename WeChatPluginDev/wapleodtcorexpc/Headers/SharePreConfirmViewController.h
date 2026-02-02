//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface SharePreConfirmViewController : NSObject
{
    _Bool _willRotateToPreviousOrientation;
    CDUnknownBlockType _didTransitionToNewSizeBlock;
    unsigned long long _overrideOrientationMask;
}

@property(nonatomic) unsigned long long overrideOrientationMask; // @synthesize overrideOrientationMask=_overrideOrientationMask;
@property(copy, nonatomic) CDUnknownBlockType didTransitionToNewSizeBlock; // @synthesize didTransitionToNewSizeBlock=_didTransitionToNewSizeBlock;
@property(nonatomic) _Bool willRotateToPreviousOrientation; // @synthesize willRotateToPreviousOrientation=_willRotateToPreviousOrientation;
- (void)viewDidTransitionToNewSize;
- (unsigned long long)supportedInterfaceOrientations;

@end
