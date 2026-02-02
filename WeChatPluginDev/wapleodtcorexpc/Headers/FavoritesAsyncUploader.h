//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesCDNInfo, MsgDataDownloadLogic, NSMutableArray, NSMutableSet, NSString;

@interface FavoritesAsyncUploader
{
    NSMutableArray *m_needDownloadMsgList;
    NSMutableSet *m_downloadedMsg;
    unsigned long long m_currentState;
    FavoritesCDNInfo *m_uploadingInfo;
    MsgDataDownloadLogic *m_msgDataDownloadLogic;
    _Bool m_msgFileDownloadedFail;
    _Bool m_hasMsgToDownload;
}

- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)updateXml;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)reportSameUrlAndKeyWithDataList:(id)arg1;
- (void)uploadFavMedia:(id)arg1;
- (void)uploadFile;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)downloadMsg;
- (void)chectNeedDownloadMsgInFavitem:(id)arg1;
- (void)onAsyncUploadEndWithErrCode:(int)arg1;
- (void)run;
- (void)tryProccess;
- (void)resetUpload;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1 isPrior:(_Bool)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

