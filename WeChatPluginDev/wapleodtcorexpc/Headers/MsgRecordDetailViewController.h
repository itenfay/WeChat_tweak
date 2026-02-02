//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseContact, CMessageWrap, FavForwardLogicController, MMMsgMenuReporter, MMRichTextCoverView, MMTableView, MMUIWindow, NSArray, NSMutableDictionary, NSString, ScanQRCodeLogicController, WCActionSheetWithScanWXCode, WCPlayerConfigViewController;

@interface MsgRecordDetailViewController
{
    MMTableView *m_tableView;
    unsigned int m_uiLongPressedIndex;
    CMessageWrap *m_recordMsg;
    MMUIWindow *m_fullScreenWindow;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheetWithScanWXCode *favImgLongPressAction;
    FavForwardLogicController *m_favForwardController;
    NSString *m_chatDate;
    int m_chatDatePrefix;
    NSArray *m_dataList;
    NSString *m_title;
    NSMutableDictionary *m_recordItemViewCache;
    MMMsgMenuReporter *m_menuReporter;
    MMRichTextCoverView *m_richTextCoverView;
    WCPlayerConfigViewController *m_videoPlayerVC;
    _Bool _supportToLocateToMsg;
    NSString *_chatName;
    CMessageWrap *_historyMsgWrap;
    CBaseContact *_contact;
    NSMutableDictionary *_dataWrapList;
}

+ (id)getDefaultFooterViewWithSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dataWrapList; // @synthesize dataWrapList=_dataWrapList;
@property(nonatomic) _Bool supportToLocateToMsg; // @synthesize supportToLocateToMsg=_supportToLocateToMsg;
@property(retain, nonatomic) CBaseContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CMessageWrap *historyMsgWrap; // @synthesize historyMsgWrap=_historyMsgWrap;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
- (id)findNodeViewWithMsgSvrId:(long long)arg1;
- (id)firstMsgAfterEnterSession;
- (_Bool)isLastTranslateAvailableMsg:(id)arg1 includeSelf:(_Bool)arg2;
- (id)getMenuReporter;
- (id)getInputToolView;
- (void)updateTableContentOffsetAnimated:(_Bool)arg1 OffsetDelta:(double)arg2;
- (struct CGRect)getNodeRectInScreen:(unsigned int)arg1;
- (void)reloadVisibleNodeWithCellView:(id)arg1;
- (void)reloadNodeWithMessageWrap:(id)arg1;
- (_Bool)isMsgCanRevoke:(id)arg1;
- (_Bool)canShowOperationMenu;
- (void)registerYReportSdk;
- (void)onSaveVideoSuccess:(id)arg1 placeholder:(id)arg2;
- (id)generateFileMsgWithDataField:(id)arg1;
- (id)generateFavWithMediaWrap:(id)arg1;
- (id)generateMsgWithMediaWrap:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)onScanEnds;
- (void)onClickReferViewInNodeView:(id)arg1;
- (void)onClickWeAppMPShortLinkWithUrl:(id)arg1 withFavData:(id)arg2;
- (void)onClickSearchTopicWithUrl:(id)arg1 withFavData:(id)arg2;
- (_Bool)shouldShowTopicText;
- (void)onFavViewSizeDidChange:(id)arg1 withFavData:(id)arg2;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (_Bool)openBrandMpVideoByFavData:(id)arg1;
- (void)jumpToViewStreamVideo:(id)arg1;
- (id)getFavForawrdViewController;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (void)OnRoomHistoryRevoked:(id)arg1 n64MsgId:(long long)arg2 historyId:(unsigned long long)arg3;
- (void)onRevokeMsgAlert;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)onSaveFavDataImg;
- (void)onAddFavData2Fav;
- (void)onForwardFavDataWrap2WC;
- (void)onForwardFavDataWrap2Msg;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (void)OnRecordMessageDownloadOK:(id)arg1;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OpenVideoFileByMsgRecordDataWrap:(id)arg1;
- (id)getMMMsgMenuReporter;
- (id)getViewController;
- (void)setRichTextCoverView:(id)arg1;
- (id)getRichTextCoverView;
- (id)getTableView;
- (unsigned long long)getChatTypeWithContact:(id)arg1;
- (void)selectLiteAppData:(id)arg1;
- (void)selectWeAppData:(id)arg1;
- (void)selectTVData:(id)arg1;
- (void)selectRecordData:(id)arg1;
- (void)selectGoodsData:(id)arg1;
- (void)selectFileData:(id)arg1;
- (void)selectTingListWithNodeView:(id)arg1 data:(id)arg2;
- (void)selectTingDataWithNodeView:(id)arg1 data:(id)arg2;
- (void)selectLocationData:(id)arg1;
- (void)selectUrlData:(id)arg1 thumbImageView:(id)arg2;
- (void)selectVideoData:(id)arg1;
- (void)favRecordNodeView:(id)arg1 onClickOnNode:(id)arg2;
- (void)onLongPressImgNode:(id)arg1;
- (void)onWillLongPressImgNode:(id)arg1 imageView:(id)arg2;
- (void)onClickOnImgNode:(id)arg1 needEdit:(_Bool)arg2;
- (void)onClickOnImgNode:(id)arg1 DataIndex:(unsigned int)arg2;
- (_Bool)tryHandleMenu:(long long)arg1 withDataSource:(id)arg2;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)getThumbImageWithFavItemData:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onPan:(id)arg1;
- (id)baseBackgroundColor;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (id)dataWrapAtIndexPath:(id)arg1;
- (id)makeRecordItemViewCacheWithIndexPath:(id)arg1;
- (id)getRecordItemViewCacheWithIndexPath:(id)arg1;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (_Bool)checkIsHadTranslate;
- (void)onAction:(id)arg1;
- (void)initTableView;
- (void)initNavigationBar;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadFooterView;
- (double)getTableFooterHeight;
- (double)offsetHeight;
- (void)viewDidLoad;
- (void)tryReloadMsg;
- (void)updateChatDate;
- (void)viewDidTransitionToNewSize;
- (id)initWithMsgWrap:(id)arg1 title:(id)arg2 dataList:(id)arg3;
- (id)initWithMsgWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

