//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface WePkgOperateUpdateMgr
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)mainQueueCallCompleteBlock:(CDUnknownBlockType)arg1 withResult:(_Bool)arg2;
- (void)performBlockOnSerialQueue:(CDUnknownBlockType)arg1;
- (void)operateUpdateForPkgId:(id)arg1 AtomicPart:(_Bool)arg2 NonAtomicPart:(_Bool)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (_Bool)operateUpdateNonAtomicPart:(id)arg1 RegularConfig:(id)arg2 VersionChanged:(_Bool *)arg3;
- (_Bool)operateUpdateAtomicPart:(id)arg1 RegularConfig:(id)arg2 VersionChanged:(_Bool *)arg3;
- (id)init;

@end

