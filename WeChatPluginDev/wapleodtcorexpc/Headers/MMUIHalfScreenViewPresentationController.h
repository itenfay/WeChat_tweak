//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPresentationController.h>

@class UIView;

@interface MMUIHalfScreenViewPresentationController : UIPresentationController
{
    _Bool _isHideBackgroupMask;
    _Bool _isResetPresentedViewFrame;
    double _presentedHeight;
    double _presentedWidth;
    double _presentedLeft;
    UIView *_coverView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isResetPresentedViewFrame; // @synthesize isResetPresentedViewFrame=_isResetPresentedViewFrame;
@property(nonatomic) _Bool isHideBackgroupMask; // @synthesize isHideBackgroupMask=_isHideBackgroupMask;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) double presentedLeft; // @synthesize presentedLeft=_presentedLeft;
@property(nonatomic) double presentedWidth; // @synthesize presentedWidth=_presentedWidth;
@property(nonatomic) double presentedHeight; // @synthesize presentedHeight=_presentedHeight;
- (void)coverViewClick;
- (void)containerViewWillLayoutSubviews;

@end

