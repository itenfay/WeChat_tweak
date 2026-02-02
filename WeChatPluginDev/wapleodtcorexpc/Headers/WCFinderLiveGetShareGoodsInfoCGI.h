//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveGetShareGoodsInfoCGI
{
    unsigned int _reqType;
    int _scene;
    unsigned long long _objectId;
    unsigned long long _productId;
    NSString *_finderUsername;
    NSString *_ecSource;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    NSString *_productCardKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *productCardKey; // @synthesize productCardKey=_productCardKey;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int reqType; // @synthesize reqType=_reqType;
@property(retain, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned long long productId; // @synthesize productId=_productId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
- (_Bool)shouldAutoProcessingToastWithError:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithObjctId:(unsigned long long)arg1 productId:(unsigned long long)arg2 finderUsername:(id)arg3 ecSource:(id)arg4 reqType:(unsigned int)arg5 productCardKey:(id)arg6 scene:(int)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;

@end

