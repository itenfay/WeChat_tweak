//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WCPreparedUpdateMgr
{
    NSMutableDictionary *_downloadTaskDict;
    NSObject<OS_dispatch_queue> *_ppDownloadQueue;
}

+ (_Bool)verifyUpdateData:(id)arg1 withBootsInfo:(id)arg2;
+ (void)p_startDownloadUpdate:(id)arg1 withVersion:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)p_startDownloadWithExpInVersion:(id)arg1;
+ (_Bool)p_checkPreparedPatchVersion:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ppDownloadQueue; // @synthesize ppDownloadQueue=_ppDownloadQueue;
@property(retain, nonatomic) NSMutableDictionary *downloadTaskDict; // @synthesize downloadTaskDict=_downloadTaskDict;
- (void)p_asyncCheckPreparedUpdate;
- (void)repeatCheckPreparedUpdate;
- (void)checkPreparedUpdate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

