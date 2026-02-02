//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveBeautyResourceFetcherRootAction
{
    unsigned long long _pendingTaskCount;
}

+ (id)createInstance;
@property(nonatomic) unsigned long long pendingTaskCount; // @synthesize pendingTaskCount=_pendingTaskCount;
- (id)resourcePackageWithBackendModel:(id)arg1;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)fetchBeautyResourcesInDescriptor:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchBeautyResourcesInPackages:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

