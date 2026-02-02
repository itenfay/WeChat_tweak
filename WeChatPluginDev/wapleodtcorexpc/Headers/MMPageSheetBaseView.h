//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMPageSheetConfig, NSString;
@protocol MMPageSheetContainer;

@interface MMPageSheetBaseView : UIView
{
    MMPageSheetConfig *_pageSheetConfig;
    UIView *_detailView;
    id <MMPageSheetContainer> _pageSheetContainer;
    double _superViewWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double superViewWidth; // @synthesize superViewWidth=_superViewWidth;
@property(retain, nonatomic) id <MMPageSheetContainer> pageSheetContainer; // @synthesize pageSheetContainer=_pageSheetContainer;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) MMPageSheetConfig *pageSheetConfig; // @synthesize pageSheetConfig=_pageSheetConfig;
- (void)onPageSheetDismiss:(id)arg1;
- (void)pageSheetDidDismiss;
- (void)pageSheetDidShow;
- (void)onPageSheetContainerBgTapped;
- (void)popPageSheetTo:(id)arg1 animated:(_Bool)arg2;
- (void)popPageSheetWithAnimated:(_Bool)arg1;
- (void)popPageSheet;
- (void)pushPageSheet:(id)arg1 animated:(_Bool)arg2;
- (void)pushPageSheet:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showFromViewController:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)showFromViewController:(id)arg1 animated:(_Bool)arg2;
- (void)showInView:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)showWithAnimated:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)showWithAnimated:(_Bool)arg1;
- (void)updateDetailViewHeight:(double)arg1 animated:(_Bool)arg2;
- (id)adaptedViewController;
- (void)adjustContainerYOffset:(double)arg1 animated:(_Bool)arg2;
- (id)pageSheetProviderController;
- (void)didPushSelfInPage:(id)arg1;
- (double)pageSheetContentWidth;
- (double)pageSheetContentHeight;
- (id)pageSheetContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

