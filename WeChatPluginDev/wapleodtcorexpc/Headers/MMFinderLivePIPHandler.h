//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTask, MMFinderLiveTaskId;

@interface MMFinderLivePIPHandler : NSObject
{
    CDUnknownBlockType _getLiveJoinedCallback;
    CDUnknownBlockType _getLiveVCAppearCallback;
    CDUnknownBlockType _getAppActiveCallback;
    CDUnknownBlockType _showSwitchGuideCallback;
    MMFinderLiveTaskId *_liveTaskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(copy, nonatomic) CDUnknownBlockType showSwitchGuideCallback; // @synthesize showSwitchGuideCallback=_showSwitchGuideCallback;
@property(copy, nonatomic) CDUnknownBlockType getAppActiveCallback; // @synthesize getAppActiveCallback=_getAppActiveCallback;
@property(copy, nonatomic) CDUnknownBlockType getLiveVCAppearCallback; // @synthesize getLiveVCAppearCallback=_getLiveVCAppearCallback;
@property(copy, nonatomic) CDUnknownBlockType getLiveJoinedCallback; // @synthesize getLiveJoinedCallback=_getLiveJoinedCallback;
@property(readonly, nonatomic) _Bool isResignActive;
@property(readonly, nonatomic) _Bool isLiveJoined;
@property(readonly, nonatomic) _Bool isLiveVCAppear;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (_Bool)showPIPSwitchGuide;
- (void)stopPictureInPicture;
- (void)startPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(_Bool)arg1;
- (void)checkNeedAutoStartPictureInPicture;
- (void)startCheckPictureInPictureNeedAutoStart;
- (void)checkCurrentCdnPlayerItemVideoDecodeTypeForPIP;
- (void)checkNeedForbidPIPInSpecialPlatformSystem;
- (void)checkPictureInPictureAbilityIfNotFit;
- (void)checkPictureInPictureAbility;
- (id)initWithTaskId:(id)arg1;

@end

