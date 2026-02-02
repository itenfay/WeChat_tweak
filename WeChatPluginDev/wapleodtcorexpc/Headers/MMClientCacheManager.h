//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMClientCacheManager
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_curDownloadUrl;
}

+ (long long)getApplicationState;
- (void).cxx_destruct;
- (void)checkConfig;
- (void)updateKey:(id)arg1;
- (void)doSSReportForPayCheckoutCounter;
- (void)doSSReport:(unsigned int)arg1;
- (void)doSSReport:(unsigned int)arg1 isBasic:(_Bool)arg2;
- (void)doDReport;
- (void)reportExtInfo:(id)arg1;
- (void)onKindaNotify:(id)arg1 value:(id)arg2;
- (void)OnCdnDownload:(id)arg1;
- (void)onNewRegOK;
- (void)onManulLoginOK;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onAuthOK;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (id)getBasicData;
- (id)getInfoPath;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

