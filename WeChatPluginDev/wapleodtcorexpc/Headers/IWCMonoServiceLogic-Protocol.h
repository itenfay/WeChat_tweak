//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCMonoServiceLogic <NSObject>
+ (NSString *)getConflictWording;
+ (void)showMonoServiceWorkingConflict;
+ (_Bool)isVideoMonoServiceInMainScene:(_Bool)arg1;
+ (_Bool)isVideoMonoServiceWorking;
+ (_Bool)isAudioMonoServiceWorkingInMainScene:(_Bool)arg1 ignoreType:(unsigned long long)arg2;
+ (_Bool)isAudioMonoServiceWorkingIgnoreType:(unsigned long long)arg1;
+ (_Bool)isAudioMonoServiceWorking;
@end

