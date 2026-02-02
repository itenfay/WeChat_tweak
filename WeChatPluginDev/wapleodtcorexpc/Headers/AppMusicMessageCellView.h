//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppMusicMessageViewModel, MMMusicPlayerContoller, NSString, UIImageView, UILabel;

@interface AppMusicMessageCellView
{
    UILabel *m_titleLabel;
    UILabel *m_detailLabel;
    UIImageView *m_thumbImageView;
    UIImageView *m_blurBgImageView;
    MMMusicPlayerContoller *_playButton;
}

- (void).cxx_destruct;
- (_Bool)handleMagicTapAction:(id)arg1;
- (void)addMagicTapActions:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (id)viewControllerForPreview:(id)arg1;
- (id)urlForPreView:(id)arg1;
- (_Bool)canPeek;
- (void)onTouchUpInside;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (void)onLoadImageOK:(id)arg1;
- (void)updateThumbImage;
- (void)addMusicPlayView;
- (id)blurEffectAlbumImage;
- (double)calBlurImageHeight;
- (void)addBlurEffectAlbumView;
- (void)initDetailLabel;
- (void)initTitleLabel;
- (void)initThumbImageView;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppMusicMessageViewModel *viewModel; // @dynamic viewModel;

@end

