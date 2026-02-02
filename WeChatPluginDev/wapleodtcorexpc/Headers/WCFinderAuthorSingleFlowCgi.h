//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderAuthorSingleFlowCgi
{
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithLastBuffer:(id)arg1 username:(id)arg2 lastTid:(id)arg3 nonceID:(id)arg4 tabType:(int)arg5 commentScene:(int)arg6 params:(id)arg7 successful:(CDUnknownBlockType)arg8 failed:(CDUnknownBlockType)arg9;
- (id)initWithLastBuffer:(id)arg1 feedid:(id)arg2 nonceId:(id)arg3 tabType:(int)arg4 commentScene:(int)arg5 params:(id)arg6 successful:(CDUnknownBlockType)arg7 failed:(CDUnknownBlockType)arg8;

@end

