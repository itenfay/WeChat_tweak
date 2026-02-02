//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGoodsItem, MMFinderLiveShopContext, MMFinderLiveShopShelfCoordinator, MMFinderLiveTaskId, NSDate, NSString;
@protocol MMFinderLiveGoodsViewModelDelegate;

@interface MMFinderLiveGoodsViewModel : NSObject
{
    _Bool _showPromoteActionButton;
    _Bool _isInGoodsWithCouponsList;
    _Bool _alwaysHideSerialNumber;
    _Bool _showHotSaleInBuyButton;
    _Bool _showHotSaleCounts;
    MMFinderLiveShopShelfCoordinator *_shopShelfCoordinator;
    id <MMFinderLiveGoodsViewModelDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveGoodsItem *_goodsItem;
    NSDate *_willShineBefore;
    NSString *_tabName;
    long long _listType;
    NSString *_searchKeyword;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(nonatomic) long long listType; // @synthesize listType=_listType;
@property(retain, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(nonatomic) _Bool showHotSaleCounts; // @synthesize showHotSaleCounts=_showHotSaleCounts;
@property(nonatomic) _Bool showHotSaleInBuyButton; // @synthesize showHotSaleInBuyButton=_showHotSaleInBuyButton;
@property(nonatomic) _Bool alwaysHideSerialNumber; // @synthesize alwaysHideSerialNumber=_alwaysHideSerialNumber;
@property(nonatomic) _Bool isInGoodsWithCouponsList; // @synthesize isInGoodsWithCouponsList=_isInGoodsWithCouponsList;
@property(retain, nonatomic) NSDate *willShineBefore; // @synthesize willShineBefore=_willShineBefore;
@property(nonatomic) _Bool showPromoteActionButton; // @synthesize showPromoteActionButton=_showPromoteActionButton;
@property(retain, nonatomic) MMFinderLiveGoodsItem *goodsItem; // @synthesize goodsItem=_goodsItem;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveGoodsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMFinderLiveShopShelfCoordinator *shopShelfCoordinator; // @synthesize shopShelfCoordinator=_shopShelfCoordinator;
- (void)onShowPriceButtonClicked;
- (void)onPreHotButtonClicked;
- (void)onSubInfosViewClicked;
- (void)onGetFinderLiveAppMsgShopInfoWithTaskId:(id)arg1 shopInfo:(id)arg2;
@property(readonly, nonatomic) MMFinderLiveShopContext *shopContext;
- (id)liveTask;
@property(readonly, nonatomic) _Bool needReplayButton;
@property(readonly, nonatomic) _Bool needActionButton;
- (id)init;
- (void)onAnchorShowBoxItemClicked:(id)arg1;
- (void)onFreeGiftsViewClicked;
- (id)finderLiveLogReportValueForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

