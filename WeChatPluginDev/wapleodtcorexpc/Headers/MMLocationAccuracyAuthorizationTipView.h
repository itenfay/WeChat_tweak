//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView, UIImageView, UIScrollView;

@interface MMLocationAccuracyAuthorizationTipView
{
    MMUIView *_contentView;
    MMUIView *_sepLineView;
    UIImageView *_iconView;
    MMUILabel *_tipLabel;
    UIImageView *_arrowView;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMUILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUIView *sepLineView; // @synthesize sepLineView=_sepLineView;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
- (void)updateSepLineHidden;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeScrollview:(id)arg1;
- (void)goToSettingLocationAuthorization;
- (void)onTappedContent:(id)arg1;
- (void)layoutArrowView;
- (void)layoutTipLabel;
- (void)layoutIconView;
- (void)layoutSepLineView;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)contentHeight;
- (double)defaultTipHeightWithBottomInset:(double)arg1;
- (double)defaultTipHeight;

@end

