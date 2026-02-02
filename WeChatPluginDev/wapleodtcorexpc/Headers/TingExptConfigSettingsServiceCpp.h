//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingExptConfigSettingsServiceCpp : NSObject
{
}

+ (_Bool)getEnableLiveItemSupport;
+ (_Bool)getPlayQualitySettingEntryEnable;
+ (_Bool)getEnableSqQuality;
+ (_Bool)getEnableFeedIdListAllInOne;
+ (void)setTSSentenceReadEnable:(_Bool)arg1;
+ (void)setErrRetryEnable:(unsigned int)arg1;
+ (void)setAutoPauseConfig:(id)arg1;
+ (void)setEnableFeedIdListAllInOne:(_Bool)arg1;
+ (void)setExptIdentification:(unsigned int)arg1;
+ (void)setDisableRedDotSyncItemReqFrequencyControl:(_Bool)arg1;
+ (void)setEnableMusicVideoStartPlayOptimize:(_Bool)arg1;
+ (void)setEnablePrefetchCheckSpamAndGetLink:(_Bool)arg1;
+ (void)setEnableSingleAudioAutoPlay:(_Bool)arg1;

@end

