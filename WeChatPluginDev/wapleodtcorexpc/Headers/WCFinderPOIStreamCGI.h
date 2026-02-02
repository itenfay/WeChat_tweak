//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderPOIStreamRequestParams;

@interface WCFinderPOIStreamCGI
{
    WCFinderPOIStreamRequestParams *_params;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) WCFinderPOIStreamRequestParams *params; // @synthesize params=_params;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (id)cachedHashKey;
- (int)requestType;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithParams:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

