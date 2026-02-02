//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayF2FAnnouncementCgi, WCPayF2FDeleteRecordCgi, WCPayF2FGetReceiveHistoryCgi, WCPayF2FReceiveHistoryResponse, WCPayGetF2FReceiveDetailDataCgi;

@interface WCPayF2FReceiveDetailControlLogic
{
    _Bool _bIsBackFromRootDetailViewController;
    _Bool _bNeedUpdateHistoryList;
    _Bool _m_isSoundOn;
    unsigned long long _detailFromScene;
    unsigned long long _jsApiFromTimeStamp;
    WCPayGetF2FReceiveDetailDataCgi *_getReceiveDetailCgi;
    WCPayF2FDeleteRecordCgi *_deleteRecordCgi;
    WCPayF2FGetReceiveHistoryCgi *_getReceiveHistoryCgi;
    WCPayF2FReceiveHistoryResponse *_curHistoryResp;
    unsigned long long _lastHistoryReqTimeFormat;
    unsigned long long _lastHistoryPreviousTimestamp;
    unsigned long long _lastHistoryNewerTimestamp;
    WCPayF2FAnnouncementCgi *_getAnnouncementCgi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isSoundOn; // @synthesize m_isSoundOn=_m_isSoundOn;
@property(retain, nonatomic) WCPayF2FAnnouncementCgi *getAnnouncementCgi; // @synthesize getAnnouncementCgi=_getAnnouncementCgi;
@property(nonatomic) _Bool bNeedUpdateHistoryList; // @synthesize bNeedUpdateHistoryList=_bNeedUpdateHistoryList;
@property(nonatomic) unsigned long long lastHistoryNewerTimestamp; // @synthesize lastHistoryNewerTimestamp=_lastHistoryNewerTimestamp;
@property(nonatomic) unsigned long long lastHistoryPreviousTimestamp; // @synthesize lastHistoryPreviousTimestamp=_lastHistoryPreviousTimestamp;
@property(nonatomic) unsigned long long lastHistoryReqTimeFormat; // @synthesize lastHistoryReqTimeFormat=_lastHistoryReqTimeFormat;
@property(retain, nonatomic) WCPayF2FReceiveHistoryResponse *curHistoryResp; // @synthesize curHistoryResp=_curHistoryResp;
@property(retain, nonatomic) WCPayF2FGetReceiveHistoryCgi *getReceiveHistoryCgi; // @synthesize getReceiveHistoryCgi=_getReceiveHistoryCgi;
@property(retain, nonatomic) WCPayF2FDeleteRecordCgi *deleteRecordCgi; // @synthesize deleteRecordCgi=_deleteRecordCgi;
@property(retain, nonatomic) WCPayGetF2FReceiveDetailDataCgi *getReceiveDetailCgi; // @synthesize getReceiveDetailCgi=_getReceiveDetailCgi;
@property(nonatomic) unsigned long long jsApiFromTimeStamp; // @synthesize jsApiFromTimeStamp=_jsApiFromTimeStamp;
@property(nonatomic) unsigned long long detailFromScene; // @synthesize detailFromScene=_detailFromScene;
@property(nonatomic) _Bool bIsBackFromRootDetailViewController; // @synthesize bIsBackFromRootDetailViewController=_bIsBackFromRootDetailViewController;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSyncOplogSuccess;
- (void)handleSyncOplogFail;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)WCPayFacingReceiveSettingSoundSwicthState:(_Bool)arg1;
- (void)onGetF2FReceiveHistoryCgiResponse:(id)arg1;
- (void)onGetWCPayF2FDeleteRecordCgiResp:(id)arg1;
- (void)onGetWCF2FReceiveDetailDataCgiResp:(id)arg1;
- (void)sendReceiveHistoryRequestWithTimeStamp:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 chooseFlag:(unsigned long long)arg3 loadmoreDirection:(unsigned long long)arg4;
- (void)getReceiveHistoryData;
- (void)getTodayReceiveDetailData;
- (void)f2fReceiveHistoryViewControllerLoadMoreNewItem:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveHistoryViewControllerLoadMorePreviousItem:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveHistoryViewControllerDidSelectTimeStamp:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveHistoryViewControllerClickItemWithTimeStamp:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveHistoryViewControllerBack;
- (void)f2fReceiveDetailViewControllerDeleteRecord:(id)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveDetailViewControllerLoadMoreRecordWithLastRecord:(id)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveDetailViewControllerDidSelectRecord:(id)arg1;
- (void)f2fReceiveDetailViewControllerClickHistoryBtn;
- (void)f2fReceiveDetailViewControllerBack;
- (unsigned long long)getCurrentDetailFromScene;
- (void)onWCPayF2FGetAnnouncement:(id)arg1;
- (void)getF2FAnnouncement;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithTimeStamp:(unsigned long long)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

