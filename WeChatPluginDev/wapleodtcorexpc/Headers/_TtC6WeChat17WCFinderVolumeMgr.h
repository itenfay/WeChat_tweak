//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6WeChat17WCFinderVolumeMgr : NSObject
{
    MISSING_TYPE *contentVM;
    MISSING_TYPE *playerView;
    MISSING_TYPE *muteEntryVC;
    MISSING_TYPE *shouldMute;
    MISSING_TYPE *debugFloatView;
    MISSING_TYPE *hiddenVolumeView;
    MISSING_TYPE *addTimesPerSec;
    MISSING_TYPE *addPerSecTotal;
    MISSING_TYPE *enableAutoSwitch;
    MISSING_TYPE *enableAutoSwitch_v;
    MISSING_TYPE *enableReport;
    MISSING_TYPE *$__lazy_storage_$_finderShareFeedSupportMutePlay;
    MISSING_TYPE *targetVolume;
    MISSING_TYPE *playerCurrentVolume;
    MISSING_TYPE *playerAdditionVolume;
    MISSING_TYPE *playerDecreaseVolume;
    MISSING_TYPE *isAutoIncreaseAvalible;
    MISSING_TYPE *autoIncreaseVolumetimer;
}

+ (id)shared;
- (void).cxx_destruct;
- (_Bool)needMute;
- (void)enableReport:(_Bool)arg1;
- (void)attachAutoVolumeCheck:(id)arg1 contentVM:(id)arg2;
- (void)immediatelyFinishAutoVolumeCheck;
- (void)enableAutoVolumeCheck;
- (id)init;
- (void)autoIncreaseVolumetimerFired;
- (void)volumeChangedBeforeIOS15WithNotification:(id)arg1;
- (void)volumeChangedAfterIOS15WithNotification:(id)arg1;
- (void)didEnterBackGround;
- (void)configMuteVC:(id)arg1;
- (void)configMute:(_Bool)arg1;
- (_Bool)mutePlayEnable;

@end

