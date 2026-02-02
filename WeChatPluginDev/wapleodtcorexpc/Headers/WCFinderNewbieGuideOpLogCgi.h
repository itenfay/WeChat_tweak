//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderNewbieGuideOpLogCgi
{
    _Bool _neverShow;
    int _eduType;
    NSString *_userName;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) int eduType; // @synthesize eduType=_eduType;
@property(nonatomic) _Bool neverShow; // @synthesize neverShow=_neverShow;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithEduType:(int)arg1 userName:(id)arg2 neverShow:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

