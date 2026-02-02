//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLiveAttendLotteryCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithTaskId:(id)arg1 attendLotteryType:(unsigned int)arg2 objectId:(unsigned long long)arg3 liveCookies:(id)arg4 successCompletion:(CDUnknownBlockType)arg5 failedCompletion:(CDUnknownBlockType)arg6;

@end

