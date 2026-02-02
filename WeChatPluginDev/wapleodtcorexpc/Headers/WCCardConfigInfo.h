//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardConfigInfo
{
    _Bool _isShowShoppingMall;
    NSString *_emptyTips;
    NSString *_shoppingMallTitle;
    NSString *_shoppingMallUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_isShowShoppingMall;
+ (void)PBArrayAdd_shoppingMallUrl;
+ (void)PBArrayAdd_shoppingMallTitle;
+ (void)PBArrayAdd_emptyTips;
- (void).cxx_destruct;
@property(nonatomic) _Bool isShowShoppingMall; // @synthesize isShowShoppingMall=_isShowShoppingMall;
@property(retain, nonatomic) NSString *shoppingMallUrl; // @synthesize shoppingMallUrl=_shoppingMallUrl;
@property(retain, nonatomic) NSString *shoppingMallTitle; // @synthesize shoppingMallTitle=_shoppingMallTitle;
@property(retain, nonatomic) NSString *emptyTips; // @synthesize emptyTips=_emptyTips;
- (void)parseFromJSONStr:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

