//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, MessageTipsViewModel, UIImageView, UILabel;

@interface MessageTipsCellView
{
    MMUIActivityIndicatorView *_loadingView;
    UILabel *_tipsLabel;
    UIImageView *_bgImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
- (void)onChatBackgroundChanged:(id)arg1;
- (double)maxLabelWidth;
- (id)lineViewOfWidth:(double)arg1;
- (void)layoutLoading;
- (void)layoutLineText;
- (void)onAppear;
- (void)layoutInternal;
- (_Bool)canBeReused;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) MessageTipsViewModel *viewModel;

@end

