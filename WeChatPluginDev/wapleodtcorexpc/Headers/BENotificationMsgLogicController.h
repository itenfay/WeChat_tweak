//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSMutableArray, NSMutableSet, TemplateMsgExposeLogic, WAContactGetter;

@interface BENotificationMsgLogicController
{
    WAContactGetter *m_contactGetter;
    TemplateMsgExposeLogic *m_exposeLogic;
    CMessageWrap *_firstUnReadMsgWhenInitData;
    NSMutableSet *_expandedMsgLocalIDSet;
    NSMutableArray *_needResetAlphaCellViewList;
    NSMutableSet *_expandSystemMsgSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *expandSystemMsgSet; // @synthesize expandSystemMsgSet=_expandSystemMsgSet;
@property(retain, nonatomic) NSMutableArray *needResetAlphaCellViewList; // @synthesize needResetAlphaCellViewList=_needResetAlphaCellViewList;
@property(retain, nonatomic) NSMutableSet *expandedMsgLocalIDSet; // @synthesize expandedMsgLocalIDSet=_expandedMsgLocalIDSet;
@property(retain, nonatomic) CMessageWrap *firstUnReadMsgWhenInitData; // @synthesize firstUnReadMsgWhenInitData=_firstUnReadMsgWhenInitData;
- (void)onDeleteTempNotiMsg:(long long)arg1 username:(id)arg2 svrId:(long long)arg3;
- (void)onEditTempNotiMsg:(id)arg1;
- (void)onInsertTempNotiMsg:(id)arg1;
- (void)reportTemplateMsg:(id)arg1 opType:(long long)arg2;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)onOpenWeappProfileWithAppid:(id)arg1 appBrandType:(unsigned int)arg2 msgWrap:(id)arg3;
- (void)headerImageClickedWithMsg:(id)arg1;
- (void)onClickMoreForTemplateMsg:(id)arg1;
- (void)onExposeTemplateMsg:(id)arg1 extraData:(id)arg2;
- (void)OpenChatView:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (id)getMessageWrapLocalIDListStr:(id)arg1;
- (id)getLaterMessageWrapList:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limit:(int)arg4 leftCount:(unsigned int *)arg5;
- (id)getEarlierMessageWrapList:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limit:(int)arg4 leftCount:(unsigned int *)arg5;
- (void)onClickUnreadTip:(unsigned long long)arg1;
- (void)setHasShowUnreadTip:(unsigned long long)arg1;
- (_Bool)shouldLocateToFirstMsgWhenViewDidAppear;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)performDeleteMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)dataWillInit;
- (void)tryExpandReaderMessageFolder:(id)arg1;
- (void)clickTimeNodeRightButton:(id)arg1;
- (void)onReaderFolderCellDidCollapse:(id)arg1;
- (void)onReaderFolderCellWillCollapse:(id)arg1;
- (void)onReaderFolderCellDidExpand:(id)arg1;
- (void)onReaderFolderCellWillExpand:(id)arg1;
- (_Bool)ShouldShowSearchCompleteRightBarButton;
- (id)GetUsrTitle;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (_Bool)isShowHeadImage:(id)arg1;
- (id)chatSplitWording;
- (id)GetFirstUnReadMessage;
- (unsigned int)getMsgCountToLoad;
- (void)ViewWillDisappear;
- (void)ViewDidAppear;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)dealloc;
- (void)initViewController;

@end

