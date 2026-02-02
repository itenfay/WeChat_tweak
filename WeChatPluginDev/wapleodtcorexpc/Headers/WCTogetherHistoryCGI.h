//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SnsWithTaPageRequest, SnsWithTaPageResponse, WCBaseNetworkingError;

@interface WCTogetherHistoryCGI
{
    SnsWithTaPageResponse *_response;
    WCBaseNetworkingError *_error;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCBaseNetworkingError *error; // @synthesize error=_error;
@property(retain, nonatomic) SnsWithTaPageResponse *response; // @synthesize response=_response;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)startWithRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(retain, nonatomic) SnsWithTaPageRequest *request; // @dynamic request;

@end

