//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLivePrepareIncomeEncashCGI
{
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithEncashScene:(unsigned int)arg1 requestId:(id)arg2 amount:(unsigned long long)arg3 reportSessionId:(id)arg4 incomeBizInfo:(id)arg5 completionBlock:(CDUnknownBlockType)arg6 failedBlock:(CDUnknownBlockType)arg7;

@end

