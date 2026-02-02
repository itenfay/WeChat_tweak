//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MagicPkgDownload
{
    NSMutableDictionary *_dicDownloadingItem;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (_Bool)unzipDownloadUpdates:(id)arg1 unzipPath:(id)arg2;
- (void)UpdateFinish:(id)arg1 pkgPath:(id)arg2 unzipPath:(id)arg3;
- (void)downloadMagicPkg:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

