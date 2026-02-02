//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface MMStarRatingViewConfiguration : NSObject
{
    _Bool _allowHalfStar;
    long long _numberOfStars;
    double _starSideLength;
    double _starHorizontalMargin;
    UIImage *_normalStarImage;
    UIImage *_highlightStarImage;
    double _animationDuration;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowHalfStar; // @synthesize allowHalfStar=_allowHalfStar;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIImage *highlightStarImage; // @synthesize highlightStarImage=_highlightStarImage;
@property(retain, nonatomic) UIImage *normalStarImage; // @synthesize normalStarImage=_normalStarImage;
@property(nonatomic) double starHorizontalMargin; // @synthesize starHorizontalMargin=_starHorizontalMargin;
@property(nonatomic) double starSideLength; // @synthesize starSideLength=_starSideLength;
@property(nonatomic) long long numberOfStars; // @synthesize numberOfStars=_numberOfStars;

@end

