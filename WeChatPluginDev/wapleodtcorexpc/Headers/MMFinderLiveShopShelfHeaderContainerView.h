//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveShopShelfHeaderViewModel, NSString;
@protocol MMFinderLiveShopShelfHeaderContentView;

@interface MMFinderLiveShopShelfHeaderContainerView : UIView
{
    MMFinderLiveShopShelfHeaderViewModel *_viewModel;
    UIView<MMFinderLiveShopShelfHeaderContentView> *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView<MMFinderLiveShopShelfHeaderContentView> *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveShopShelfHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)reportElementsExposed;
- (id)anchorSettingButton;
- (id)shoppingCartButton;
- (id)goodsOrderCenterButton;
- (void)handleContentGestureEnd;
- (void)handleContentGestureChangeTo:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateWithHeaderViewModel:(id)arg1;
- (Class)preferContentClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

