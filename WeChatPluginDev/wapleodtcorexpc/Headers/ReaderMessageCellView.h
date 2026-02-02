//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTRichTextTagView, CALayer, MMWebImageView, NSArray, NSMutableArray, NSString, ReaderMessageViewModel, RichTextView, UIView;
@protocol ReaderMessageFolderCellViewDelegate;

@interface ReaderMessageCellView
{
    NSArray *m_arrBtnList;
    BTRichTextTagView *m_titleView;
    MMWebImageView *m_coverImgView;
    UIView *m_highlightMaskView;
    RichTextView *m_digestView;
    CALayer *m_coverMaskLayer;
    _Bool _isItemForFolder;
    id <ReaderMessageFolderCellViewDelegate> _folderCellViewDelegate;
    NSMutableArray *_cardCopyLines;
    unsigned long long _containerType;
    UIView *_footerView;
}

+ (id)itemValueLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) unsigned long long containerType; // @synthesize containerType=_containerType;
@property(retain, nonatomic) NSMutableArray *cardCopyLines; // @synthesize cardCopyLines=_cardCopyLines;
@property(nonatomic) __weak id <ReaderMessageFolderCellViewDelegate> folderCellViewDelegate; // @synthesize folderCellViewDelegate=_folderCellViewDelegate;
@property(nonatomic) _Bool isItemForFolder; // @synthesize isItemForFolder=_isItemForFolder;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)report29695:(int)arg1 bizContent:(id)arg2;
- (void)report11608:(unsigned long long)arg1;
- (_Bool)canCellShowOperationMenu;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (id)headImageUrlOfChatContact;
- (void)addFavorite;
- (void)forwardMessage;
- (_Bool)shouldGoToEmoticonDetail:(id)arg1;
- (void)jumpTingCategory:(id)arg1;
- (void)jumpWebSearch:(id)arg1;
- (void)jumpFinderMemberCenter:(id)arg1;
- (void)jumpWCCoinHomePage;
- (void)jumpLiteAppOpWrap:(id)arg1;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)onClicked;
- (void)updateContentViewBgColor:(id)arg1;
- (id)getReaderUrlWithUrl:(id)arg1;
- (id)getWebViewController:(id)arg1 url:(id)arg2 forPeek:(_Bool)arg3;
- (unsigned int)getSubscene;
- (long long)getEnterScene;
- (unsigned int)getSessionId;
- (void)reportClickReaderItem:(id)arg1 clickTime:(unsigned int)arg2;
- (id)webViewExtraInfoWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (void)showWebViewController:(id)arg1;
- (void)ShowReader:(id)arg1 viewModel:(id)arg2 uiReaderIndex:(unsigned int)arg3;
- (void)initCustomMenuButtonStyle:(id)arg1 position:(int)arg2;
- (void)onCopy:(id)arg1;
- (id)itemLabelWithText:(id)arg1 width:(double)arg2 font:(id)arg3 numberOfLines:(unsigned long long)arg4;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)imageViewWithFrame:(struct CGRect)arg1;
- (id)itemLabelWithFont:(id)arg1 width:(double)arg2;
- (id)richTextWithFont:(id)arg1 width:(double)arg2;
- (void)clickNodeViewBtn:(id)arg1;
- (_Bool)autoHighlight;
- (void)onTouchUpInside;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (void)onLoadImageOK:(id)arg1;
- (_Bool)isWeGameContact;
- (_Bool)bShouldReportShowInfo;
- (void)onTableViewDidScrollDown;
- (void)rebindDrViewParamsToContentView;
- (void)onAppear;
- (void)setHighlighted:(_Bool)arg1;
- (void)addCornerToContentView;
- (void)initHighlightMaskView;
- (void)onLinkClicked:(id)arg1 linkRect:(struct CGRect)arg2;
- (id)generateFooterLabel:(double)arg1;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (void)setViewModel:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) ReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

