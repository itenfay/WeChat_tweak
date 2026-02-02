//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveShopShelfAnchorLocalLifeMiniAppButton, MMFinderLiveShopShelfHeaderViewModel, MMLiveShopShelfDragBar, MMUIButton, NSString;

@interface MMFinderLiveShopShelfAnchorLocalLifeHeaderView : UIView
{
    MMFinderLiveShopShelfHeaderViewModel *_viewModel;
    MMLiveShopShelfDragBar *_dragBar;
    MMFinderLiveShopShelfAnchorLocalLifeMiniAppButton *_miniAppButton;
    MMUIButton *_anchorSettingButton;
    UIView *_line;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) MMUIButton *anchorSettingButton; // @synthesize anchorSettingButton=_anchorSettingButton;
@property(retain, nonatomic) MMFinderLiveShopShelfAnchorLocalLifeMiniAppButton *miniAppButton; // @synthesize miniAppButton=_miniAppButton;
@property(retain, nonatomic) MMLiveShopShelfDragBar *dragBar; // @synthesize dragBar=_dragBar;
@property(retain, nonatomic) MMFinderLiveShopShelfHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onAnchorSettingButtonClicked:(id)arg1;
- (void)onMiniAppButtonClicked:(id)arg1;
- (void)updateWithHeaderViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

