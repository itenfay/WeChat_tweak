//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class MMUIActivityIndicatorView, UIImageView;

@interface MFBannerBtn : UIButton
{
    UIImageView *_arrowImageView;
    MMUIActivityIndicatorView *_indicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void)removeActivityView;
- (void)makeActivityView;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)setTitleTextColor:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleIconImage:(id)arg1;
- (void)setTitleIcon:(id)arg1 color:(id)arg2 horizonFlip:(_Bool)arg3;
- (void)setTitleIcon:(id)arg1 color:(id)arg2;
- (void)setTitleIcon:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setRightArrowImage:(id)arg1;
- (void)setRightArrowHidden:(_Bool)arg1;

@end

