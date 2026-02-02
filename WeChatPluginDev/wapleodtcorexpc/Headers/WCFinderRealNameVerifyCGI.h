//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderRealNameVerifyCGI
{
    int _optype;
    NSString *_authToken;
    NSString *_finderUsername;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(nonatomic) int optype; // @synthesize optype=_optype;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithOpType:(int)arg1 finderUsername:(id)arg2 authToken:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

