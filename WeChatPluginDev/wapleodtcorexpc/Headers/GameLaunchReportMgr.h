//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CRReportAPIClient, NSMutableDictionary, NSString;

@interface GameLaunchReportMgr
{
    CRReportAPIClient *_reportClient;
    NSMutableDictionary *_reportModelDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *reportModelDict; // @synthesize reportModelDict=_reportModelDict;
@property(retain, nonatomic) CRReportAPIClient *reportClient; // @synthesize reportClient=_reportClient;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getReportInfoWithAppId:(id)arg1;
- (id)reportInfoToDic:(id)arg1;
- (void)tryFetchAndReportGameLaunchAppStore:(id)arg1 extraInfo:(id)arg2 isCancel:(_Bool)arg3 isLaunch:(_Bool)arg4 info:(id)arg5;
- (void)tryFetchAndReportGameLaunchAppStore:(id)arg1 extraInfo:(id)arg2 isCancel:(_Bool)arg3 isLaunch:(_Bool)arg4;
- (void)tryFetchAndReportGameLaunchAppStore:(id)arg1 extraInfo:(id)arg2 info:(id)arg3;
- (void)tryFetchAndReportGameLaunchAppStore:(id)arg1 extraInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

