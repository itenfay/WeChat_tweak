//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderPoiGroupBuyRequestParams;

@interface WCFinderPoiGroupBuyCGI
{
    WCFinderPoiGroupBuyRequestParams *_params;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCFinderPoiGroupBuyRequestParams *params; // @synthesize params=_params;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithParams:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end

