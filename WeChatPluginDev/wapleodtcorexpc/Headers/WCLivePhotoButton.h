//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView, WCLivePhotoButtonModel;

@interface WCLivePhotoButton
{
    _Bool _isShowBtn;
    WCLivePhotoButtonModel *_viewModel;
    MMUILabel *_liveTextLabel;
    UIImageView *_liveImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowBtn; // @synthesize isShowBtn=_isShowBtn;
@property(retain, nonatomic) UIImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) MMUILabel *liveTextLabel; // @synthesize liveTextLabel=_liveTextLabel;
@property(retain, nonatomic) WCLivePhotoButtonModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_layoutSubviews;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)touchUP;
- (void)touchDown;
- (void)configShadowColor:(id)arg1;
- (void)initView:(_Bool)arg1;
- (double)_calculateWidth;
- (double)_calculateHeight;
- (id)initWithModel:(id)arg1;

@end

