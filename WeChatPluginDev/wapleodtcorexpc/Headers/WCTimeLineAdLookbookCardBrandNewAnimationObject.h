//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, UIView;

@interface WCTimeLineAdLookbookCardBrandNewAnimationObject : NSObject
{
    UIView *_relatedView;
    double _duration;
    double _delay;
    CAMediaTimingFunction *_timingFunction;
    double _cornerRadius;
    struct CGPoint _fromPosition;
    struct CGPoint _toPosition;
    struct CGSize _fromSize;
    struct CGSize _toSize;
}

- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGSize toSize; // @synthesize toSize=_toSize;
@property(nonatomic) struct CGSize fromSize; // @synthesize fromSize=_fromSize;
@property(nonatomic) struct CGPoint toPosition; // @synthesize toPosition=_toPosition;
@property(nonatomic) struct CGPoint fromPosition; // @synthesize fromPosition=_fromPosition;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak UIView *relatedView; // @synthesize relatedView=_relatedView;

@end

