//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat22MagicSclServiceManager
{
    MISSING_TYPE *sclService;
    MISSING_TYPE *sclDelegate;
}

- (void).cxx_destruct;
- (id)init;
- (id)getPkgInfo;
- (id)getPkgVersion;
- (id)getSclDelegateWithBizName:(id)arg1;
- (void)unregisterSclDelegateWithBizName:(id)arg1;
- (void)registerSclDelegateWithBizName:(id)arg1 delegate:(id)arg2;
- (id)createSCLPublicService;
- (id)getSClPublicService;

@end

