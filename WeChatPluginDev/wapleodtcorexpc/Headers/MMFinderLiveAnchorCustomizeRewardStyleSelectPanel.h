//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveAnchorCustomizeRewardStyleSelectLogic, MMFinderLiveAnchorCustomizeRewardStyleSelectPanelOptionsView, MMFinderLiveAnchorCustomizeRewardStyleSelectPanelTab, WCActionSheet;

@interface MMFinderLiveAnchorCustomizeRewardStyleSelectPanel : UIView
{
    MMFinderLiveAnchorCustomizeRewardStyleSelectLogic *_logic;
    WCActionSheet *_chooseImageActionSheet;
    MMFinderLiveAnchorCustomizeRewardStyleSelectPanelTab *_styleSelectTab;
    MMFinderLiveAnchorCustomizeRewardStyleSelectPanelOptionsView *_optionsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleSelectPanelOptionsView *optionsView; // @synthesize optionsView=_optionsView;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleSelectPanelTab *styleSelectTab; // @synthesize styleSelectTab=_styleSelectTab;
@property(retain, nonatomic) WCActionSheet *chooseImageActionSheet; // @synthesize chooseImageActionSheet=_chooseImageActionSheet;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleSelectLogic *logic; // @synthesize logic=_logic;
- (void)onKeyboardHiding:(id)arg1;
- (void)onKeyboardShowing:(id)arg1;
- (void)checkIsNeedSelectImage;
- (void)refreshViewData;
- (void)layoutSubviews;
- (void)setupNotifications;
- (void)initStyleSelectTab;
- (void)initOptionsView;
- (id)initWithStyleSelectLogic:(id)arg1;

@end

