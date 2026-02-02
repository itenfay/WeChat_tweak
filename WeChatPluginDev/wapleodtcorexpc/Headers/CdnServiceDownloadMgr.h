//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface CdnServiceDownloadMgr
{
    NSMutableDictionary *_dicDownloadArgsWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicDownloadArgsWrap; // @synthesize dicDownloadArgsWrap=_dicDownloadArgsWrap;
- (void)onDownloadSuccess:(id)arg1 argsWrap:(id)arg2;
- (void)onDownloadError:(id)arg1 argsWrap:(id)arg2;
- (void)startTask:(id)arg1;
- (_Bool)checkCache:(id)arg1;
- (void)stopDownloadWithAggregateName:(id)arg1;
- (id)stopDownloadWithFileKey:(id)arg1;
- (_Bool)isTaskRunning:(id)arg1;
- (_Bool)startDownloadWithArgsWrap:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

