//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppGiftCardMessageViewModel, MMWebImageView, NSString, UIImageView, UILabel;

@interface AppGiftCardMessageCellView
{
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
    UIImageView *m_thumbImageView;
    MMWebImageView *m_blurBgImageView;
    _Bool _isBlurBgImageLoad;
}

- (void).cxx_destruct;
- (void)onTouchUpInside;
- (void)onLoadImageOK:(id)arg1;
- (void)updateThumbImage;
- (double)calBlurImageHeight;
- (void)initBlurBgImageView;
- (void)initThumbImageView;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppGiftCardMessageViewModel *viewModel; // @dynamic viewModel;

@end

