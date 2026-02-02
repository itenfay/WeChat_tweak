//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLivePromoteProductCGI
{
    unsigned int _actionType;
    unsigned int _promoteType;
    unsigned long long _productId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned int promoteType; // @synthesize promoteType=_promoteType;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned long long productId; // @synthesize productId=_productId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 productId:(unsigned long long)arg2 actionType:(unsigned int)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

