//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLiveSendPromoteCGI
{
    int _opScene;
    unsigned long long _promoteId;
    unsigned long long _requestScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

+ (id)createCancelPromoteCGIWithLiveTaskId:(id)arg1 promoteId:(unsigned long long)arg2 requestScene:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
+ (id)createSendPromoteCGIWithLiveTaskId:(id)arg1 promoteId:(unsigned long long)arg2 requestScene:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) int opScene; // @synthesize opScene=_opScene;
@property(nonatomic) unsigned long long requestScene; // @synthesize requestScene=_requestScene;
@property(nonatomic) unsigned long long promoteId; // @synthesize promoteId=_promoteId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 opScene:(int)arg2 promoteId:(unsigned long long)arg3 requestScene:(unsigned long long)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

