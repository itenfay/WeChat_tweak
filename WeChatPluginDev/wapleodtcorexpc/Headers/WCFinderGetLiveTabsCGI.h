//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderGetLiveTabsCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithLongitude:(float)arg1 latitude:(float)arg2 tabScene:(long long)arg3 byPassInfo:(id)arg4 title:(id)arg5 feedExportId:(id)arg6 feedNonceId:(id)arg7 SuccessBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;

@end

