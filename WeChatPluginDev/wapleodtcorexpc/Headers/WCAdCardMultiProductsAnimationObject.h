//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAMediaTimingFunction, NSNumber, NSValue, UIView;

@interface WCAdCardMultiProductsAnimationObject
{
    UIView *_relatedView;
    double _duration;
    double _delay;
    double _fromOpacity;
    double _toOpacity;
    NSNumber *_persistOpacity;
    CAMediaTimingFunction *_timingFunction;
    NSValue *_previousCenter;
    struct CGPoint _fromPosition;
    struct CGPoint _toPosition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *previousCenter; // @synthesize previousCenter=_previousCenter;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(retain, nonatomic) NSNumber *persistOpacity; // @synthesize persistOpacity=_persistOpacity;
@property(nonatomic) double toOpacity; // @synthesize toOpacity=_toOpacity;
@property(nonatomic) double fromOpacity; // @synthesize fromOpacity=_fromOpacity;
@property(nonatomic) struct CGPoint toPosition; // @synthesize toPosition=_toPosition;
@property(nonatomic) struct CGPoint fromPosition; // @synthesize fromPosition=_fromPosition;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak UIView *relatedView; // @synthesize relatedView=_relatedView;

@end

