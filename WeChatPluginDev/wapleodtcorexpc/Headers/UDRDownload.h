//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface UDRDownload
{
    NSMutableDictionary *_dicDownloadingItem;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)downloadUDR:(id)arg1 resource:(id)arg2 scene:(long long)arg3 extInfo:(id)arg4 fullPkg:(_Bool)arg5;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

