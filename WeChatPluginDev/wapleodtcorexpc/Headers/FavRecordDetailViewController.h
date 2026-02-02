//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavActionSheet, FavImagePreView, FavoritesItemDataField, ForwardMessageLogicController, MMMsgMenuReporter, MMRichTextCoverView, NSArray, NSMutableDictionary, NSString;

@interface FavRecordDetailViewController
{
    unsigned int m_uiLongPressedIndex;
    _Bool m_hasIllegalData;
    NSString *m_chatDate;
    int m_chatDatePrefix;
    ForwardMessageLogicController *m_forwardLogic;
    NSArray *m_dataList;
    _Bool m_isFavHomePage;
    FavImagePreView *m_longPressView;
    FavActionSheet *m_favActionSheet;
    MMRichTextCoverView *m_richTextCoverView;
    MMMsgMenuReporter *m_menuReporter;
    FavoritesItemDataField *_scrollToData;
    NSMutableDictionary *_dataWrapList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dataWrapList; // @synthesize dataWrapList=_dataWrapList;
@property(retain, nonatomic) FavoritesItemDataField *scrollToData; // @synthesize scrollToData=_scrollToData;
- (id)findNodeViewWithMsgSvrId:(long long)arg1;
- (id)firstMsgAfterEnterSession;
- (_Bool)isLastTranslateAvailableMsg:(id)arg1 includeSelf:(_Bool)arg2;
- (id)getMenuReporter;
- (id)getInputToolView;
- (id)getViewController;
- (id)getTableView;
- (void)updateTableContentOffsetAnimated:(_Bool)arg1 OffsetDelta:(double)arg2;
- (struct CGRect)getNodeRectInScreen:(unsigned int)arg1;
- (void)reloadVisibleNodeWithCellView:(id)arg1;
- (void)reloadNodeWithMessageWrap:(id)arg1;
- (_Bool)isMsgCanRevoke:(id)arg1;
- (_Bool)canShowOperationMenu;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onJumpToUrl:(id)arg1;
- (id)getFavForawrdViewController;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (id)getMMMsgMenuReporter;
- (void)setRichTextCoverView:(id)arg1;
- (id)getRichTextCoverView;
- (void)onClickReferViewInNodeView:(id)arg1;
- (void)onClickWeAppMPShortLinkWithUrl:(id)arg1 withFavData:(id)arg2;
- (_Bool)shouldShowTopicText;
- (void)favRecordNodeView:(id)arg1 onClickOnNode:(id)arg2;
- (void)onFavViewSizeDidChange:(id)arg1 withFavData:(id)arg2;
- (void)onLongPressImgNode:(id)arg1;
- (void)onWillLongPressImgNode:(id)arg1 imageView:(id)arg2;
- (void)onClickOnImgNode:(id)arg1 needEdit:(_Bool)arg2;
- (void)onClickOnImgNode:(id)arg1 DataIndex:(unsigned int)arg2;
- (_Bool)tryHandleMenu:(long long)arg1 withDataSource:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSaveFavDataImg;
- (void)onForwardFavDataWrap2WC;
- (void)onForwardFavDataWrap2MsgToUser:(id)arg1;
- (void)onForwardFavDataWrap2Msg;
- (void)onFavActionSheetWillDismiss;
- (void)onFavActionSheetSelectedItemWithType:(long long)arg1;
- (void)onFavActionSheetSelectedForwardToUser:(id)arg1;
- (id)getCurrentViewController;
- (void)onAction:(id)arg1;
- (_Bool)canShowConvertToNoteActionSheet;
- (id)getThumbImageViewWithFavDataItemWrap:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (id)dataWrapAtIndexPath:(id)arg1;
- (void)makeCellSelectionSyleNoneAtIndexPath:(id)arg1;
- (void)unhighlightRowAtIndexPath:(id)arg1;
- (void)highlightRowAtIndexPath:(id)arg1;
- (void)scrollToIndex:(long long)arg1 atScrollPosition:(long long)arg2 needHighlight:(_Bool)arg3 animation:(_Bool)arg4;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadFooterView;
- (double)getTableFooterHeight;
- (double)offsetHeight;
- (void)viewDidLoad;
- (void)updateChatDate;
- (void)viewDidTransitionToNewSize;
- (void)dealloc;
- (void)initCommonData;
- (id)initWithDataWrap:(id)arg1;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

