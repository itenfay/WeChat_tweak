//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderBgmListParams;

@interface WCFinderBgmListCgi
{
    WCFinderBgmListParams *_params;
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
@property(retain, nonatomic) WCFinderBgmListParams *params; // @synthesize params=_params;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)buildRequest;
- (void)start;
- (id)initWithParams:(id)arg1 successfulBlock:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;

@end

