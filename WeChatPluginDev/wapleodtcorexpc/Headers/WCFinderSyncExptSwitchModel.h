//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface WCFinderSyncExptSwitchModel : NSObject
{
    _Bool _finderMentionEntranceIndependent;
    _Bool _isNewLifeEntryOpened;
    _Bool _isNewLifeFeedDetailSwitchOpened;
    _Bool _isK1KUniformReddotEnabled;
    _Bool _isNewLifeReserveLookRedDotSwitchOpened;
    _Bool _reddotPersonalExposeClearSwitch;
    NSString *_testExptString;
    long long _timelineTabCacheFeedValue;
    unsigned long long _seeBrowseLongVideoSwitch;
    unsigned long long _enterStreamTipsSwitch;
    unsigned long long _friendBubbleShowSec;
    NSArray *_finderGetrelatedlistSupportBackupScenes;
    NSMutableDictionary *_finderInitExptBufferDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *finderInitExptBufferDic; // @synthesize finderInitExptBufferDic=_finderInitExptBufferDic;
@property(nonatomic) _Bool reddotPersonalExposeClearSwitch; // @synthesize reddotPersonalExposeClearSwitch=_reddotPersonalExposeClearSwitch;
@property(retain, nonatomic) NSArray *finderGetrelatedlistSupportBackupScenes; // @synthesize finderGetrelatedlistSupportBackupScenes=_finderGetrelatedlistSupportBackupScenes;
@property(nonatomic) _Bool isNewLifeReserveLookRedDotSwitchOpened; // @synthesize isNewLifeReserveLookRedDotSwitchOpened=_isNewLifeReserveLookRedDotSwitchOpened;
@property(nonatomic) unsigned long long friendBubbleShowSec; // @synthesize friendBubbleShowSec=_friendBubbleShowSec;
@property(nonatomic) unsigned long long enterStreamTipsSwitch; // @synthesize enterStreamTipsSwitch=_enterStreamTipsSwitch;
@property(nonatomic) unsigned long long seeBrowseLongVideoSwitch; // @synthesize seeBrowseLongVideoSwitch=_seeBrowseLongVideoSwitch;
@property(nonatomic) _Bool isK1KUniformReddotEnabled; // @synthesize isK1KUniformReddotEnabled=_isK1KUniformReddotEnabled;
@property(nonatomic) _Bool isNewLifeFeedDetailSwitchOpened; // @synthesize isNewLifeFeedDetailSwitchOpened=_isNewLifeFeedDetailSwitchOpened;
@property(nonatomic) _Bool isNewLifeEntryOpened; // @synthesize isNewLifeEntryOpened=_isNewLifeEntryOpened;
@property(nonatomic) _Bool finderMentionEntranceIndependent; // @synthesize finderMentionEntranceIndependent=_finderMentionEntranceIndependent;
@property(nonatomic) long long timelineTabCacheFeedValue; // @synthesize timelineTabCacheFeedValue=_timelineTabCacheFeedValue;
@property(copy, nonatomic) NSString *testExptString; // @synthesize testExptString=_testExptString;
@property(readonly, nonatomic) _Bool isNewLifePhotoAtSecondTab;
- (id)getExptValueByCmdId:(long long)arg1 keyName:(id)arg2;
- (_Bool)getBoolExptCmdId:(long long)arg1 keyName:(id)arg2;
- (long long)getIntExptCmdId:(long long)arg1 keyName:(id)arg2 defaultValue:(long long)arg3;
- (void)loadSyncExptSwitch;
- (void)updateFinderInitExptBufferDic:(id)arg1;
- (id)initWithExptBufferDic:(id)arg1;

@end

