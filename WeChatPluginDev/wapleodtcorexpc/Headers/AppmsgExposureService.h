//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface AppmsgExposureService
{
    NSMutableDictionary *_uid2HasExposuredMap;
}

- (void).cxx_destruct;
- (void)reportWithId:(unsigned int)arg1 key:(long long)arg2 value:(unsigned int)arg3;
- (void)logErrorIfHasExposuredButNotReport:(unsigned int)arg1;
- (void)doReportExposureItem:(id)arg1 urlInfo:(id)arg2 chatType:(unsigned int)arg3;
- (void)reportIfExposuredWithScene:(unsigned int)arg1 innerID:(id)arg2;
- (void)exposuredWithScene:(unsigned int)arg1 innerID:(id)arg2 chatName:(id)arg3 urlInfoList:(id)arg4 sendUserName:(id)arg5 createTime:(unsigned int)arg6 currSessionID:(unsigned int)arg7;
- (id)uidForScene:(unsigned int)arg1 innerID:(id)arg2;
- (void)profileExposuredWithMsgID:(id)arg1 brandName:(id)arg2 urlInfo:(id)arg3;
- (void)snsLogErrorIfHasExposuredButNotReport;
- (void)snsReportIfExposuredWithTid:(id)arg1;
- (void)snsExposuredWithTid:(id)arg1 contentUrl:(id)arg2 itemShowType:(unsigned int)arg3 sendUserName:(id)arg4 createTime:(unsigned int)arg5 itemShowTypeFrom:(unsigned int)arg6;
- (void)chatLogErrorIfHasExposuredButNotReport;
- (void)chatReportIfExposuredWithSvrID:(unsigned long long)arg1;
- (void)chatExposuredWithSvrID:(unsigned long long)arg1 chatName:(id)arg2 urlInfoList:(id)arg3 sendUserName:(id)arg4 createTime:(unsigned int)arg5 currSessionID:(unsigned int)arg6;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

