//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveBeautyResourceFetcherRootAction, NSString;

@interface MMLiveBeautyResourceFetcher
{
    MMLiveBeautyResourceFetcherRootAction *_flowInstance;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveBeautyResourceFetcherRootAction *flowInstance; // @synthesize flowInstance=_flowInstance;
- (void)fetchBeautyResourcesInDescriptor:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchBeautyResourcesInPackages:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

