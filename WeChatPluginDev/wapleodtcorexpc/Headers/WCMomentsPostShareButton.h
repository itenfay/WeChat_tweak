//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView, WCMomentsPostShareBaseViewModel;

@interface WCMomentsPostShareButton
{
    WCMomentsPostShareBaseViewModel *_viewModel;
    UIImageView *_iconImageView;
    MMUILabel *_tipsLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) WCMomentsPostShareBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (double)_calculateHeight;
- (void)_layoutSubviews;
- (void)layoutSubviews;
- (void)sizeToFit;
- (long long)_layoutScene;
- (id)initWithFrame:(struct CGRect)arg1;

@end

