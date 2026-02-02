//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface WSDotLoadingView : UIView
{
    NSMutableArray *_dots;
    _Bool _animating;
    struct CGSize _dotSize;
}

- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)isDotAnimationRemoved;
- (id)fadeInAnimation:(double)arg1;
- (void)setDetachDistance:(double)arg1;
- (void)resetPos;
- (void)ensureDotsPathCreated;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

