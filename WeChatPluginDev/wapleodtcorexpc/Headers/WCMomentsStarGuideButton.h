//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, UIImageView, WCMomentsStarGuideViewModel;

@interface WCMomentsStarGuideButton : UIView
{
    WCMomentsStarGuideViewModel *_viewModel;
    UIImageView *_iconImageView;
    MMUILabel *_tipsLabel;
    MMUIButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) WCMomentsStarGuideViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (double)_calculateHeight;
- (void)_layoutSubviews;
- (void)layoutSubviews;
- (void)sizeToFit;
- (long long)_layoutScene;
- (id)initWithFrame:(struct CGRect)arg1;

@end

