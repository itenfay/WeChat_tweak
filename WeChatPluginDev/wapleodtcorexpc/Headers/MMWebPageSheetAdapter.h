//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPageSheetAdapter, MMScrollActionSheet, MMWebPageSheetConfig, MMWebViewController, NSString;
@protocol MMWebPageSheetDelegate;

@interface MMWebPageSheetAdapter : NSObject
{
    id <MMWebPageSheetDelegate> _delegate;
    MMPageSheetAdapter *_weakPageAdapter;
    MMScrollActionSheet *_actionSheet;
    MMWebPageSheetConfig *_config;
    MMWebViewController *_webVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewController *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) MMWebPageSheetConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) MMScrollActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak MMPageSheetAdapter *weakPageAdapter; // @synthesize weakPageAdapter=_weakPageAdapter;
@property(nonatomic) __weak id <MMWebPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetContainerVCDidDismiss:(id)arg1;
- (void)pageSheetContainerVCWillDismiss:(id)arg1;
- (void)onWebViewControllerHistoryChanged:(id)arg1;
- (void)onWebViewControllerRecieveCloseEvent:(id)arg1;
- (void)clickRefreshButton:(id)arg1;
- (id)refreshButton;
- (void)clickMoreButton:(id)arg1;
- (id)rightMoreButton;
- (id)navRightArea;
- (void)clickCloseButton:(id)arg1;
- (id)buttonBkgColorFromTintColor:(id)arg1;
- (id)goBackButton;
- (id)foldButton;
- (void)updatePageSheetNavLeftState;
- (void)updatePageSheetNavState;
- (void)onPageSheetConfigChanged;
- (id)regenPageSheetContainerVCWithPageAdapter:(id)arg1;
- (id)genAndReturnPageSheetContainerVC;
- (id)genAndReturnPageSheetAdapter;
- (double)curPageSheetHeight;
- (id)webviewController;
- (void)setupWebViewControllerWithURL:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 config:(id)arg2;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)actionSheetItemWithText:(id)arg1 image:(id)arg2 disable:(_Bool)arg3 userInfo:(id)arg4;
- (id)row2MenuItemWithCustomMenuItem:(id)arg1;
- (id)row1MenuItem;
- (void)showWebShareMenuInView:(id)arg1 customMenuItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

