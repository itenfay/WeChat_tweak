//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderCateLogStreamCgi
{
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithTabType:(int)arg1 scene:(int)arg2 pullType:(int)arg3 username:(id)arg4 clientStatus:(id)arg5 extBuf:(id)arg6 lastBuf:(id)arg7 successful:(CDUnknownBlockType)arg8 failed:(CDUnknownBlockType)arg9;

@end

