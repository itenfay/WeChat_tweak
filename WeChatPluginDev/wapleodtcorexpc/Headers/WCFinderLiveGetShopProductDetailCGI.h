//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveGetShopProductDetailCGI
{
    unsigned long long _productId;
    long long _reqScene;
    NSString *_shopRequestId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *shopRequestId; // @synthesize shopRequestId=_shopRequestId;
@property(nonatomic) long long reqScene; // @synthesize reqScene=_reqScene;
@property(nonatomic) unsigned long long productId; // @synthesize productId=_productId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 productId:(unsigned long long)arg2 shopRequestId:(id)arg3 reqScene:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

