//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLongPressRatePlayStateModel : NSObject
{
    _Bool _previousFrameIsTouching;
    long long _playRateAtPenStart;
    long long _playRateBeforePenStart;
    unsigned long long _previousPanChangeSpeedTimeStampMs;
    double _vernierX;
    double _vernierStartX;
    unsigned long long _gesCheckMoveY;
    double _gestureMoveSpeedMargin;
    double _gestureMoveSpeedNotMargin;
    struct CGPoint _startLongPressPoint;
    struct CGPoint _lastGesturePos;
}

+ (long long)rateTypeOfPositionX:(double)arg1 viewW:(double)arg2;
+ (double)centerXOfRateType:(long long)arg1 viewW:(double)arg2;
+ (long long)getPanStartPlayRateTypeWithCurrentRate:(long long)arg1;
+ (id)newPlayTypeArray;
@property(nonatomic) double gestureMoveSpeedNotMargin; // @synthesize gestureMoveSpeedNotMargin=_gestureMoveSpeedNotMargin;
@property(nonatomic) double gestureMoveSpeedMargin; // @synthesize gestureMoveSpeedMargin=_gestureMoveSpeedMargin;
@property(nonatomic) unsigned long long gesCheckMoveY; // @synthesize gesCheckMoveY=_gesCheckMoveY;
@property(nonatomic) struct CGPoint lastGesturePos; // @synthesize lastGesturePos=_lastGesturePos;
@property(nonatomic) double vernierStartX; // @synthesize vernierStartX=_vernierStartX;
@property(nonatomic) double vernierX; // @synthesize vernierX=_vernierX;
@property(nonatomic) unsigned long long previousPanChangeSpeedTimeStampMs; // @synthesize previousPanChangeSpeedTimeStampMs=_previousPanChangeSpeedTimeStampMs;
@property(nonatomic) _Bool previousFrameIsTouching; // @synthesize previousFrameIsTouching=_previousFrameIsTouching;
@property(nonatomic) long long playRateBeforePenStart; // @synthesize playRateBeforePenStart=_playRateBeforePenStart;
@property(nonatomic) long long playRateAtPenStart; // @synthesize playRateAtPenStart=_playRateAtPenStart;
@property(nonatomic) struct CGPoint startLongPressPoint; // @synthesize startLongPressPoint=_startLongPressPoint;
- (long long)getSuitablePlayRateTypeWithViewW:(double)arg1;
- (void)handleGestureChange:(id)arg1 viewW:(double)arg2;
- (void)handleGestureStartWithStartRate:(long long)arg1 gesture:(id)arg2 viewW:(double)arg3;
- (long long)playRateTypeOfCurrentX:(double)arg1 initialType:(long long)arg2 initialX:(double)arg3 viewW:(double)arg4;
- (void)reset;
- (id)init;

@end

