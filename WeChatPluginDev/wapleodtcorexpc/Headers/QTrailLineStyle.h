//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface QTrailLineStyle : NSObject
{
    int _lineType;
    int _highlightDuration;
    int _animationStartTime;
    int _animationEndTime;
    NSArray *_colors;
    double _animateRatio;
    double _width;
}

- (void).cxx_destruct;
@property(nonatomic) int animationEndTime; // @synthesize animationEndTime=_animationEndTime;
@property(nonatomic) int animationStartTime; // @synthesize animationStartTime=_animationStartTime;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double animateRatio; // @synthesize animateRatio=_animateRatio;
@property(nonatomic) int highlightDuration; // @synthesize highlightDuration=_highlightDuration;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) int lineType; // @synthesize lineType=_lineType;
- (void)setAnimationStartTime:(int)arg1 animationEndTime:(int)arg2;
- (id)init;

@end

