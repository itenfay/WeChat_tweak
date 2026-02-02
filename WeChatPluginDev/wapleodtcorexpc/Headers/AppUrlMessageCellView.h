//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppUrlMessageViewModel, RichTextView, UIImageView;

@interface AppUrlMessageCellView
{
    RichTextView *m_titleLabel;
    RichTextView *m_detailLabel;
    UIImageView *m_thumbImageView;
}

- (void).cxx_destruct;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (id)viewControllerForPreview:(id)arg1;
- (id)urlForPreView:(id)arg1;
- (_Bool)canPeek;
- (void)onForward:(id)arg1;
- (void)doFavorite;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (id)thumbImageView;
- (id)thumbImage;
- (void)updateThumbImage;
- (_Bool)isAsk;
- (void)addVideoIcon;
- (void)addThumbImageView;
- (double)digestMaxWidth;
- (id)digestFont;
- (void)addDetailLabel;
- (void)addTitleLabel;
- (id)defaultThumbImage;
- (void)onAppear;
- (id)displayViewForImageBrowser;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) AppUrlMessageViewModel *viewModel; // @dynamic viewModel;

@end

