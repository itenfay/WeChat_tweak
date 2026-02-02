//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAJSContextPlugin_SyncWaiter;

@interface WAJSEventHandler_createLoadSubPackageTaskForWaiter
{
    WAJSContextPlugin_SyncWaiter *_syncWaiter;
}

+ (id)getAwaitTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak WAJSContextPlugin_SyncWaiter *syncWaiter; // @synthesize syncWaiter=_syncWaiter;
- (void)onLoadReuslt:(id)arg1 result:(id)arg2;
- (void)doBeforeTask:(id)arg1;

@end

