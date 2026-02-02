//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AACSystemEngineManager : NSObject
{
    NSMutableArray *_playIDAry;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *playIDAry; // @synthesize playIDAry=_playIDAry;
- (id)copyObjecFromLockArry:(id)arg1;
- (void)addObjecToLockArry:(id)arg1;
- (void)removeObjecFromLockArry:(id)arg1;
- (_Bool)start;
- (_Bool)pause;
- (_Bool)seekTo:(int)arg1;
- (_Bool)isPlaying;
- (void)sendLoopParameter:(int)arg1:(int)arg2;
- (_Bool)sendDelayIntervalTime:(double)arg1 ID:(long long)arg2;
- (long long)startPlayHapticWithAhapPath:(id)arg1 patternAry:(id)arg2 delayTime:(double)arg3 allTime:(double)arg4 Loop:(unsigned long long)arg5 playProgress:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
- (_Bool)stopSystyemAudio:(long long)arg1;
- (_Bool)invalidPlayerID:(long long)arg1;
- (double)getCurrentTime;
- (void)applicationEnterBackground:(id)arg1;
- (void)applicationBecomeActive:(id)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

