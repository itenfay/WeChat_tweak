//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributedReaderMessageViewModel, CTRichTextView, MMBrandHeadImageView, MMUIButton, MMUIImageView, MMWebImageView, UIImageView, UIView;

@interface AttributedReaderMessageCellView
{
    UIView *m_lineViewTop;
    UIView *m_lineViewBot;
    CTRichTextView *m_digestView;
    UIImageView *m_bgImageView;
    MMUIImageView *m_headerMenuImage;
    MMUIButton *m_headerMenuButton;
    MMBrandHeadImageView *m_headerView;
    MMWebImageView *m_rightCoverImageView;
}

- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (_Bool)canShowMoreMenuItem;
- (id)operationMenuItems;
- (void)onExpose;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMoreButton:(id)arg1;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)onClicked;
- (void)onHeadImageClick;
- (void)layoutHeaderMenuButtonIfNeedOnCenterY:(double)arg1;
- (_Bool)isNeedHeaderMenuButton;
- (void)initDigestView;
- (void)initBgImageView;
- (void)addCornerToContentView;
- (void)tryPreloadWeAppTaskIfNeeded;
- (void)layoutContentView;
- (void)onAppear;
- (_Bool)canBeReused;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) AttributedReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

