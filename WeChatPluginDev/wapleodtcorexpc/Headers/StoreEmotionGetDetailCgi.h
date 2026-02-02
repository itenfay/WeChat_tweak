//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem, GetEmotionDetailRequest, NSString;

@interface StoreEmotionGetDetailCgi
{
    _Bool _forceUpdate;
    _Bool _isActive;
    unsigned int _scene;
    NSString *_productID;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _getValidCacheItemBlock;
    unsigned long long _lastRequestTime;
    EmoticonStoreItem *_originItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonStoreItem *originItem; // @synthesize originItem=_originItem;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) unsigned long long lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(copy, nonatomic) CDUnknownBlockType getValidCacheItemBlock; // @synthesize getValidCacheItemBlock=_getValidCacheItemBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) _Bool forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)loadEmoticonItem;
- (void)startRequest;
- (void)tryStartRequest;
- (void)createRequest;
- (id)initWithPackageId:(id)arg1;

// Remaining properties
@property(retain, nonatomic) GetEmotionDetailRequest *request; // @dynamic request;

@end

