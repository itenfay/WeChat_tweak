//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FunctionSwitchUtil : NSObject
{
}

+ (void)setStatusExt2Switch:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4 insertDB:(_Bool)arg5;
+ (void)setStatusExt2Switch:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (void)setModPushExtStatusSwitch:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (_Bool)addModPushSwitchOplog:(unsigned int)arg1 SwitchValue:(unsigned int)arg2 sync:(_Bool)arg3;
+ (void)setExtStatusSwitchInvertedAtServer:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setClose:(_Bool)arg3 sync:(_Bool)arg4;
+ (void)setFinderSettingSwitch:(unsigned long long)arg1 open:(_Bool)arg2 sync:(_Bool)arg3;
+ (void)setFinderLiveExtSwitch:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (void)setExtStatusSwitch:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (void)setStatusSwitch:(unsigned int)arg1 statusBit:(unsigned int)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (void)setPluginSwitch:(unsigned int)arg1 statusBit:(unsigned int)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (_Bool)addSwitchOplog:(unsigned int)arg1 SwitchValue:(unsigned int)arg2 sync:(_Bool)arg3;
+ (unsigned int)convertType:(unsigned int)arg1;

@end

