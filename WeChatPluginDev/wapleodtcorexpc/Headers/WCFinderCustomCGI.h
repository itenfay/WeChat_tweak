//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderCustomCGI
{
    CDUnknownBlockType _errorInterceptor;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(copy, nonatomic) CDUnknownBlockType errorInterceptor; // @synthesize errorInterceptor=_errorInterceptor;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initCustomCGINumber:(unsigned long long)arg1 moduleName:(id)arg2 request:(id)arg3 setFinderBaseRequestBlock:(CDUnknownBlockType)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)initCustomCGINumber:(unsigned long long)arg1 moduleName:(id)arg2 request:(id)arg3 successful:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

