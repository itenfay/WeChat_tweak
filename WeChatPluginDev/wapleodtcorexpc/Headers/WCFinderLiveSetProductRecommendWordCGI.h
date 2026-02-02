//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveSetProductRecommendWordCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    long long _scene;
    unsigned long long _product_id;
    NSString *_recommendWord;
    NSString *_anchorFinderUsrName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *anchorFinderUsrName; // @synthesize anchorFinderUsrName=_anchorFinderUsrName;
@property(retain, nonatomic) NSString *recommendWord; // @synthesize recommendWord=_recommendWord;
@property(nonatomic) unsigned long long product_id; // @synthesize product_id=_product_id;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 scene:(long long)arg2 product_id:(unsigned long long)arg3 recommendWord:(id)arg4 finderUsrName:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

