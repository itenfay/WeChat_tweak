//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveShopShelfCoordinator, UIView;
@protocol MMFinderLiveShopShelfHeaderViewModelView;

@interface MMFinderLiveShopShelfHeaderViewModel : NSObject
{
    MMFinderLiveShopShelfCoordinator *_coordinator;
    UIView<MMFinderLiveShopShelfHeaderViewModelView> *_view;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView<MMFinderLiveShopShelfHeaderViewModelView> *view; // @synthesize view=_view;
@property(nonatomic) __weak MMFinderLiveShopShelfCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (_Bool)shouldAnchorSettingButtonHidden;
- (_Bool)shouldDisplayWindowButtonHidden;
- (unsigned long long)headerViewShopAssistantButtonMode;
- (_Bool)shouldShoppingCartButtonHidden;
- (_Bool)shouldGoodsOrderCenterButtonHidden;
- (void)onHeaderViewMiniAppButtonClicked;
- (void)onHeaderViewDisplayWindowButtonClicked;
- (void)onHeaderViewShoppingCartButtonClicked;
- (void)onHeaderViewShopAssistantButtonClicked;
- (void)onHeaderViewGoodsOrderCenterButtonClicked;
- (void)onHeaderViewSearchButtonClicked;
- (void)onHeaderViewAnchorSettingButtonClicked;
- (void)updateWithCoordinator;

@end

