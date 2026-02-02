//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiteAppDownloadMgr, NSString;

@interface LiteAppJsApiPreloadPag
{
    MMLiteAppDownloadMgr *_downloadMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiteAppDownloadMgr *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

