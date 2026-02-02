//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveCheckLotteryBillCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_billNo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *billNo; // @synthesize billNo=_billNo;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 billNo:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end

