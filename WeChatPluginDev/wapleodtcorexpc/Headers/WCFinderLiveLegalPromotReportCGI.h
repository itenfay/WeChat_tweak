//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLiveLegalPromotReportCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequestWithLegalType:(int)arg1 legalVersion:(unsigned int)arg2;
- (id)initWithFinderTaskId:(id)arg1 legalType:(int)arg2 legalVersion:(unsigned int)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

