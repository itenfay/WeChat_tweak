//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactUpdateHelper, NSString, WCRedEnvelopesGetShowResourcesCgi, WCRedEnvelopesNetworkHelper;

@interface WCRedEnvelopesLogicMgr
{
    WCRedEnvelopesNetworkHelper *m_networkHelper;
    _Bool _m_isDownloadingNewYearRes;
    ContactUpdateHelper *_m_senderNickNameHelper;
    WCRedEnvelopesGetShowResourcesCgi *_getShowResourcesCgi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isDownloadingNewYearRes; // @synthesize m_isDownloadingNewYearRes=_m_isDownloadingNewYearRes;
@property(retain, nonatomic) WCRedEnvelopesGetShowResourcesCgi *getShowResourcesCgi; // @synthesize getShowResourcesCgi=_getShowResourcesCgi;
@property(retain, nonatomic) ContactUpdateHelper *m_senderNickNameHelper; // @synthesize m_senderNickNameHelper=_m_senderNickNameHelper;
- (void)onWCRedEnvelopesGetShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesGetShowResourcesCgiResponseOK:(id)arg1 type:(unsigned int)arg2;
- (void)predownloadHongBaoShowResource;
- (void)AsyncBizSubcribeRequest:(id)arg1;
- (void)CheckAuthBizEnterpriseRedEnvelopesRequest:(id)arg1;
- (void)OpenBizEnterpriseRedEnvelopesRequest:(id)arg1;
- (void)ReceiveBizEnterpriseRedEnvelopesRequest:(id)arg1;
- (void)OpenEnterpriseRedEnvelopesRequest:(id)arg1 SendKey:(id)arg2 ShouldSubscribe:(_Bool)arg3;
- (void)ThanksForRedEnvelopesRequest:(id)arg1;
- (void)ClearserSendOrReceiveRedEnveloperListRequest:(id)arg1;
- (void)DeleteRedEnvelopesRecord:(id)arg1;
- (void)QueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1;
- (void)QueryRedEnvelopesDetailRequest:(id)arg1;
- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)QueryOpenIMRedEnvelopesDetailRequest:(id)arg1;
- (void)OpenOpenIMRedEnvelopesRequest:(id)arg1;
- (void)ReceiverQueryOpenIMRedEnvelopesRequest:(id)arg1;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
- (void)SendShareRedEnvelopesoRequest:(id)arg1;
- (void)GenYearRedEnvelopesPayRequest:(id)arg1;
- (void)GenH5RedEnvelopesPayRequest:(id)arg1;
- (void)QueryLiveStreamRedEnvelopesDetailRequest:(id)arg1;
- (void)OpenLiveStreamRedEnvelopesRequest:(id)arg1;
- (void)ReceiverQueryLiveStreamRedEnvelopesRequest:(id)arg1;
- (void)GenLiveStreamRedEnvelopesPayRequest:(id)arg1;
- (void)GenRedEnvelopesPayRequest:(id)arg1;
- (void)GenOpenIMRedEnvelopesPayRequest:(id)arg1;
- (void)QueryOpenIMRedEnvelopesUserInfoNoCache:(id)arg1;
- (void)QueryOpenIMRedEnvelopesUserInfo:(id)arg1;
- (void)QueryH5RedEnvelopesUserInfoNoCache:(id)arg1;
- (void)QueryLiveStreamRedEnvelopesUserInfoNoCache:(id)arg1;
- (void)QueryRedEnvelopesUserInfoNoCache:(id)arg1;
- (void)QueryH5RedEnvelopesUserInfo:(id)arg1;
- (void)QueryLiveStreamRedEnvelopesUserInfo:(id)arg1;
- (void)QueryRedEnvelopesUserInfo:(id)arg1;
- (void)GetEnterpriseHongbaoBizRequest:(id)arg1 CMDID:(unsigned int)arg2 SendKey:(id)arg3 OutputType:(unsigned int)arg4;
- (void)GetEnterpriseHongbaoBusinessRequest:(id)arg1 CMDID:(unsigned int)arg2 SendKey:(id)arg3 OutputType:(unsigned int)arg4 ShouldSubscribe:(_Bool)arg5;
- (void)GetYearHongbaoRequest:(id)arg1 CMDID:(unsigned int)arg2 OutputType:(unsigned int)arg3;
- (void)GetHongbaoBusinessRequest:(id)arg1 CMDID:(unsigned int)arg2 OutputType:(unsigned int)arg3;
- (void)GetOpenIMHongbaoBusinessRequest:(id)arg1 CMDID:(unsigned int)arg2 OutputType:(unsigned int)arg3;
- (void)OnWCToAsyncBizSubscribeResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToBizHBCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToBizHBCommonSystemErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToBizHBCommonErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToEnterpriseHBCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToEnterpriseHBCommonSystemErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToEnterpriseHBCommonErrorResponse:(id)arg1 Request:(id)arg2;
- (void)addReceiveSystemMsgWithDic:(id)arg1;
- (void)addOpenIMReceiveSystemMsgWithDic:(id)arg1;
- (void)preDownloadNewYearResource:(id)arg1 fileId:(id)arg2 aesKey:(id)arg3;
- (void)uploadNewYearResource;
- (void)predownloadHbShowResource:(id)arg1;
- (void)OnWCToHongbaoCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToLiveStreamHongbaoCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToOpenIMHongbaoCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToHongbaoCommonErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToHongbaoCommonSystemErrorResponse:(id)arg1 Request:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

