//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MusicHelper : NSObject
{
}

+ (_Bool)isWaiting;
+ (_Bool)isIdle;
+ (void)stop;
+ (void)resumeOnlyFromManualPause:(_Bool)arg1;
+ (void)resumeByWechatBiz;
+ (void)resume;
+ (_Bool)pause;
+ (_Bool)pauseWithManually:(_Bool)arg1 reportScene:(unsigned int)arg2;
+ (_Bool)isPaused;
+ (_Bool)isPlaying;

@end

