//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MonoServiceLogic : NSObject
{
}

+ (void)stopWxaVoipIfNeed;
+ (id)getConflictWording;
+ (void)showMonoServiceWorkingConflict;
+ (_Bool)isVideoMonoServiceWorking;
+ (_Bool)isVideoMonoServiceWorkingIgnoreAppScene:(_Bool)arg1 inMainScene:(_Bool)arg2;
+ (_Bool)isAudioMonoServiceWorkingIgnoreType:(unsigned long long)arg1;
+ (_Bool)isAudioMonoServiceWorking;
+ (_Bool)isAudioMonoServiceWorkingIgnoreType:(unsigned long long)arg1 ignoreAppScene:(_Bool)arg2 inMainScene:(_Bool)arg3;

@end

