//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CHHapticEngine, NSDate, NSMutableArray, NSRecursiveLock;

@interface AACHapticEngineManager : NSObject
{
    _Bool _engineStatus;
    _Bool _isAudioInteruptBegan;
    _Bool _headphonesConnected;
    _Bool _isBackgroundAudioMode;
    _Bool _isNeedResetCategory;
    CHHapticEngine *_engine;
    NSMutableArray *_ahapAry;
    NSRecursiveLock *_lock;
    NSDate *_firstDate;
    NSDate *_pauseDate;
    NSDate *_startDate;
    double _offsetTime;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) double offsetTime; // @synthesize offsetTime=_offsetTime;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSDate *pauseDate; // @synthesize pauseDate=_pauseDate;
@property(retain, nonatomic) NSDate *firstDate; // @synthesize firstDate=_firstDate;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *ahapAry; // @synthesize ahapAry=_ahapAry;
@property(nonatomic) _Bool isNeedResetCategory; // @synthesize isNeedResetCategory=_isNeedResetCategory;
@property(nonatomic) _Bool isBackgroundAudioMode; // @synthesize isBackgroundAudioMode=_isBackgroundAudioMode;
@property(nonatomic) _Bool headphonesConnected; // @synthesize headphonesConnected=_headphonesConnected;
@property(nonatomic) _Bool isAudioInteruptBegan; // @synthesize isAudioInteruptBegan=_isAudioInteruptBegan;
@property(nonatomic) _Bool engineStatus; // @synthesize engineStatus=_engineStatus;
@property(retain, nonatomic) CHHapticEngine *engine; // @synthesize engine=_engine;
- (void)dealloc;
- (id)copyObjecFromLockArry:(id)arg1;
- (void)addObjecToLockArry:(id)arg1;
- (void)removeObjecFromLockArry:(id)arg1;
- (_Bool)start;
- (_Bool)pause;
- (_Bool)seekTo:(int)arg1;
- (_Bool)isPlaying;
- (void)sendLoopParameter:(int)arg1:(int)arg2;
- (_Bool)sendDelayIntervalTime:(double)arg1 ID:(long long)arg2;
- (_Bool)scheduleParameterCurve:(id)arg1 ID:(long long)arg2 delayTime:(double)arg3 error:(CDUnknownBlockType)arg4;
- (_Bool)sendParameters:(id)arg1 ID:(long long)arg2 delayTime:(double)arg3 error:(CDUnknownBlockType)arg4;
- (void)statrtPlayerWithPattern:(id)arg1 currentCount:(int)arg2;
- (id)StripAudioPath:(id)arg1:(id)arg2;
- (long long)startPlayHapticWithAhapPath:(id)arg1 patternAry:(id)arg2 mode:(unsigned long long)arg3 delayTime:(double)arg4 Loop:(unsigned long long)arg5 amplitude:(id)arg6 playProgress:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;
- (_Bool)stopCoreHaptic:(long long)arg1;
- (_Bool)invalidPlayerID:(long long)arg1;
- (double)getCurrentTime;
- (void)stopPlayer:(id)arg1;
- (void)stopEngine;
- (void)startEngine;
- (void)InitializeTheEngine;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

