//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGetShopShelfResponse_ShopVipInfo, FinderLiveShopCustomerServiceInfo, FinderReplayRecordSetting, FinderShopShelfOrderSetting, FinderWxAppInfo, MMFinderLiveECHotSaleLikeAnimationCenter, MMFinderLiveGoodsItem, MMFinderLiveShopContext_AddProductsModel, MMFinderLiveShopContext_AnchorFlashSaleConfig, MMFinderLiveShopContext_HintModel, MMFinderLiveTask, MMFinderLiveTaskId, NSArray, NSString;

@interface MMFinderLiveShopContext : NSObject
{
    _Bool _hasBeenInitByShopShelfInfo;
    _Bool _canUsePreHotOrLiveExclusivePrice;
    _Bool _isAskForPromotingOpen;
    int _replaySwitch;
    int _replayType;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveTask *_liveTask;
    FinderWxAppInfo *_shopAssistApp;
    NSString *_shopRequestId;
    NSArray *_preloadShopWxAppList;
    NSString *_ecSource;
    MMFinderLiveGoodsItem *_currentLiveGoodsItem;
    NSString *_currentPromotionReplayUrl;
    FinderReplayRecordSetting *_replayRecordSetting;
    MMFinderLiveShopContext_AnchorFlashSaleConfig *_anchorFlashSaleConfig;
    unsigned long long _extFlag;
    FinderWxAppInfo *_shoppingCartAppInfo;
    FinderLiveShopCustomerServiceInfo *_customerServiceInfo;
    FinderShopShelfOrderSetting *_shopShelfOrderSetting;
    FinderWxAppInfo *_orderCenterApp;
    FinderLiveGetShopShelfResponse_ShopVipInfo *_shopVIPInfo;
    MMFinderLiveShopContext_HintModel *_hintModel;
    MMFinderLiveShopContext_AddProductsModel *_addProductsModel;
    MMFinderLiveGoodsItem *_currPromotingGoodsItem;
    MMFinderLiveECHotSaleLikeAnimationCenter *_hotSaleLikeAnimationCenter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAskForPromotingOpen; // @synthesize isAskForPromotingOpen=_isAskForPromotingOpen;
@property(retain, nonatomic) MMFinderLiveECHotSaleLikeAnimationCenter *hotSaleLikeAnimationCenter; // @synthesize hotSaleLikeAnimationCenter=_hotSaleLikeAnimationCenter;
@property(retain, nonatomic) MMFinderLiveGoodsItem *currPromotingGoodsItem; // @synthesize currPromotingGoodsItem=_currPromotingGoodsItem;
@property(retain, nonatomic) MMFinderLiveShopContext_AddProductsModel *addProductsModel; // @synthesize addProductsModel=_addProductsModel;
@property(retain, nonatomic) MMFinderLiveShopContext_HintModel *hintModel; // @synthesize hintModel=_hintModel;
@property(retain, nonatomic) FinderLiveGetShopShelfResponse_ShopVipInfo *shopVIPInfo; // @synthesize shopVIPInfo=_shopVIPInfo;
@property(retain, nonatomic) FinderWxAppInfo *orderCenterApp; // @synthesize orderCenterApp=_orderCenterApp;
@property(nonatomic) _Bool canUsePreHotOrLiveExclusivePrice; // @synthesize canUsePreHotOrLiveExclusivePrice=_canUsePreHotOrLiveExclusivePrice;
@property(retain, nonatomic) FinderShopShelfOrderSetting *shopShelfOrderSetting; // @synthesize shopShelfOrderSetting=_shopShelfOrderSetting;
@property(retain, nonatomic) FinderLiveShopCustomerServiceInfo *customerServiceInfo; // @synthesize customerServiceInfo=_customerServiceInfo;
@property(retain, nonatomic) FinderWxAppInfo *shoppingCartAppInfo; // @synthesize shoppingCartAppInfo=_shoppingCartAppInfo;
@property(nonatomic) unsigned long long extFlag; // @synthesize extFlag=_extFlag;
@property(retain, nonatomic) MMFinderLiveShopContext_AnchorFlashSaleConfig *anchorFlashSaleConfig; // @synthesize anchorFlashSaleConfig=_anchorFlashSaleConfig;
@property(nonatomic) int replayType; // @synthesize replayType=_replayType;
@property(nonatomic) int replaySwitch; // @synthesize replaySwitch=_replaySwitch;
@property(retain, nonatomic) FinderReplayRecordSetting *replayRecordSetting; // @synthesize replayRecordSetting=_replayRecordSetting;
@property(retain, nonatomic) NSString *currentPromotionReplayUrl; // @synthesize currentPromotionReplayUrl=_currentPromotionReplayUrl;
@property(retain, nonatomic) MMFinderLiveGoodsItem *currentLiveGoodsItem; // @synthesize currentLiveGoodsItem=_currentLiveGoodsItem;
@property(retain, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(retain, nonatomic) NSArray *preloadShopWxAppList; // @synthesize preloadShopWxAppList=_preloadShopWxAppList;
@property(retain, nonatomic) NSString *shopRequestId; // @synthesize shopRequestId=_shopRequestId;
@property(retain, nonatomic) FinderWxAppInfo *shopAssistApp; // @synthesize shopAssistApp=_shopAssistApp;
@property(nonatomic) _Bool hasBeenInitByShopShelfInfo; // @synthesize hasBeenInitByShopShelfInfo=_hasBeenInitByShopShelfInfo;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)description;
@property(readonly, nonatomic) _Bool canShowPreHotOrShowPrice;
- (_Bool)isAutoReplayRecording;
- (_Bool)isReplaySwitchOpen;
- (_Bool)isReplayRecordEnabled;
- (void)updateCurrPromotingGoodsItem:(id)arg1;
- (void)updateWithJoinLiveContext:(id)arg1;
- (void)updateWithAppMessageAnchorFlashSaleConfigInfo:(id)arg1;
- (void)updateWithShopShelfInfo:(id)arg1;

@end

