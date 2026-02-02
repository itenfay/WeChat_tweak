//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface DotLoadingView : UIView
{
    long long _dotStyle;
    UIColor *_dotColor;
    NSMutableArray *_dots;
    _Bool _animating;
    _Bool _hidesWhenStopped;
    double _separatorDistance;
    struct CGSize _dotSize;
}

+ (id)getDotColor:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
@property(nonatomic) double separatorDistance; // @synthesize separatorDistance=_separatorDistance;
@property(nonatomic) struct CGSize dotSize; // @synthesize dotSize=_dotSize;
- (void)setDetachDistance:(double)arg1;
- (_Bool)isLoading;
- (void)stopLoading;
- (void)startLoading;
- (void)forceStartLoading;
- (id)fadeInAnimation:(double)arg1;
- (id)createDotPath;
- (void)resetPos;
- (void)ensureDotsPathCreated;
- (id)initWithFrame:(struct CGRect)arg1 dotStyle:(long long)arg2 dotUIColor:(id)arg3 dotSize:(struct CGSize)arg4;
- (id)initWithFrame:(struct CGRect)arg1 dotStyle:(long long)arg2 dotColor:(long long)arg3 dotSize:(struct CGSize)arg4;
- (id)initWithFrame:(struct CGRect)arg1 dotStyle:(long long)arg2 dotColor:(long long)arg3;

@end

