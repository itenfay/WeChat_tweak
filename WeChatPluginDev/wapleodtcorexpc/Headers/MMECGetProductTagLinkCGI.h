//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMECGetProductTagLinkCGI
{
    NSString *_appId;
    unsigned long long _productId;
    NSString *_promoterKey;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *promoterKey; // @synthesize promoterKey=_promoterKey;
@property(nonatomic) unsigned long long productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithAppId:(id)arg1 productId:(unsigned long long)arg2 promoterKey:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

