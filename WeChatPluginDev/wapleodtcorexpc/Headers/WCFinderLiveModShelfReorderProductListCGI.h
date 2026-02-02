//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCFinderLiveModShelfReorderProductListCGI
{
    unsigned int _modCmdId;
    unsigned long long _productId;
    NSArray *_reorderedShelfProductList;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSArray *reorderedShelfProductList; // @synthesize reorderedShelfProductList=_reorderedShelfProductList;
@property(nonatomic) unsigned long long productId; // @synthesize productId=_productId;
@property(nonatomic) unsigned int modCmdId; // @synthesize modCmdId=_modCmdId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 reorderedShelfProductList:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end

