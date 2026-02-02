//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveSettingStorage : NSObject
{
}

+ (void)clearLiveChooseClaritySetting;
+ (void)clearExpiredLiveGiftEffectSetting;
+ (void)asyncSaveLiveSettingData;
+ (_Bool)syncSaveLiveSettingData;
+ (void)clearSharedLiveSettingData;
+ (id)sharedLiveSettingData;

@end

