//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SnsWithTaOpResponse, WCBaseNetworkingError;

@interface WCTogetherModifyCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    SnsWithTaOpResponse *_response;
    WCBaseNetworkingError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCBaseNetworkingError *error; // @synthesize error=_error;
@property(retain, nonatomic) SnsWithTaOpResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

