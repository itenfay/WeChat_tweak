//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class WCFinderLivePersonalCenterPaymentInfoCollectionCellConfig, WCTableViewManager;
@protocol WCFinderLivePersonalCenterPaymentInfoCollectionCellActionDelegate;

@interface WCFinderLivePersonalCenterPaymentInfoCollectionCell : UICollectionViewCell
{
    id <WCFinderLivePersonalCenterPaymentInfoCollectionCellActionDelegate> _actionDelegate;
    WCTableViewManager *_tableViewManager;
    WCFinderLivePersonalCenterPaymentInfoCollectionCellConfig *_cellConfig;
}

+ (id)cellID;
+ (double)cellHeightWithConfig:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLivePersonalCenterPaymentInfoCollectionCellConfig *cellConfig; // @synthesize cellConfig=_cellConfig;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(nonatomic) __weak id <WCFinderLivePersonalCenterPaymentInfoCollectionCellActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onLotteryRecordClick;
- (void)onPurchasedRecordClick;
- (void)onShoppingRecordClick;
- (id)getCommentSceneStr;
- (void)reportCellExposeWithCurrentConfig:(id)arg1 prevConfig:(id)arg2;
- (void)reloadTableViewWithConfig:(id)arg1;
- (void)updateWithConfig:(id)arg1;
- (void)setup;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

