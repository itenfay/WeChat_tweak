//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MttWKStatService
{
}

+ (id)service;
- (void)preloadMachineListWithWithReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getWKMachineInfoWithReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preloadWKMachineInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)getMemoryInfoWithPhoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

