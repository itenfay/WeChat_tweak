//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTFinderRecommendRedPacketView, BTReaderItemCellViewModel, BTReaderMsgSectionData, BTRichTextTagView, CAGradientLayer, MMUILabel, MMWebImageView, NSString, RichTextView, UIView;

@interface BTReaderItemCellView
{
    BTRichTextTagView *m_titleView;
    RichTextView *m_digestLabel;
    MMWebImageView *m_coverImageView;
    UIView *m_highlightMaskView;
    UIView *m_separateLine;
    MMUILabel *m_friendRelatedInfoLabel;
    _Bool m_bIsForceHighlight;
    CAGradientLayer *m_maskLayer;
    unsigned int _itemIndex;
    BTRichTextTagView *_titleView;
    BTFinderRecommendRedPacketView *_redPacketView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BTFinderRecommendRedPacketView *redPacketView; // @synthesize redPacketView=_redPacketView;
@property(readonly, nonatomic) BTRichTextTagView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) unsigned int itemIndex; // @synthesize itemIndex=_itemIndex;
- (id)debugMenuItem;
- (id)deleteMenuItem;
- (id)favoriteMenuItem;
- (id)forwardMenuItem;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showComfirmDeleteActionSheet;
- (void)onDebug:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (void)handleMenuControllerWillShowNotification:(id)arg1;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onBrandItemLongPress;
- (void)handleLongPressEx:(id)arg1;
- (void)layoutSubviewsNormalItem;
- (void)layoutSubviewsTopItem;
- (void)addCornerToContentView:(unsigned long long)arg1;
- (void)layoutContentView;
- (void)layoutSubviews;
@property(readonly, nonatomic) MMUILabel *friendRelatedInfoLabel;
@property(readonly, nonatomic) RichTextView *digestLabel;
- (id)titleLabel;
@property(readonly, nonatomic) MMWebImageView *coverImageView;
- (id)getFriendRelatedInfoTextColor;
- (void)resetRedPacketViewHidden;
- (void)updateFriendRelatedInfo;
- (void)updateDigestLabel;
- (void)updateCover:(_Bool)arg1;
- (void)updatePaySubcribeTag;
- (id)getTitleViewColor:(_Bool)arg1;
- (void)updateTitleView:(_Bool)arg1;
- (void)updateImage:(id)arg1 widthUrl:(id)arg2;
- (void)onUpdateViewModel;
- (void)initCoverMask;
- (void)initRedPacketView;
- (void)initFriendsReadLabel;
- (void)initDigestLabel;
- (void)initTitleView;
- (id)getCoverImageView;
- (void)initCoverView;
- (void)initSeparateLayer;
- (void)initNormalReaderItem;
- (void)initTopReaderItem;
- (void)initLongPressGesture;
- (void)forceSetHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initHighlightMaskView;
@property(readonly, nonatomic) BTReaderMsgSectionData *sectionData;
- (_Bool)isTopItem;
- (void)setViewModel:(id)arg1;
- (id)accessibilityLabel;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BTReaderItemCellViewModel *viewModel; // @dynamic viewModel;

@end

