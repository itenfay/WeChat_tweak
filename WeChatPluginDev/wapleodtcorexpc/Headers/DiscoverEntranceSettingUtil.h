//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface DiscoverEntranceSettingUtil : NSObject
{
}

+ (void)doKVReportForAction:(unsigned long long)arg1;
+ (_Bool)shouldShowWeChatAuthorization;
+ (_Bool)enableShowWeappEntry;
+ (_Bool)enableShowGameEntry;
+ (_Bool)enableShowFinderSwitch;
+ (void)localSetDiscoverEtranceSettingFlagMask:(unsigned long long)arg1 setOpen:(_Bool)arg2;
+ (void)setDiscoverEtranceSettingFlagMask:(unsigned long long)arg1 setOpen:(_Bool)arg2 sync:(_Bool)arg3;
+ (void)updateLocalReddotEableValueToServerIfNeed;
+ (unsigned long long)CtrlFlagMaskForEntranceType:(unsigned long long)arg1;
+ (_Bool)ReddotEnabledForEntranceType:(unsigned long long)arg1;

@end

