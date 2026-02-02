//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPageSheetConfig, NSString, UIView, UIViewController;
@protocol MMPageSheetAdapterDelegate, MMPageSheetContainer;

@interface MMPageSheetAdapter : NSObject
{
    MMPageSheetConfig *_pageSheetConfig;
    id <MMPageSheetContainer> _pageSheetContainer;
    id <MMPageSheetAdapterDelegate> _delegate;
    double _contentHeight;
    UIViewController *_hostViewController;
    UIView *_hostView;
}

+ (id)adatperWithView:(id)arg1 height:(double)arg2;
+ (id)adapterWithViewController:(id)arg1 height:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *hostView; // @synthesize hostView=_hostView;
@property(retain, nonatomic) UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) __weak id <MMPageSheetAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <MMPageSheetContainer> pageSheetContainer; // @synthesize pageSheetContainer=_pageSheetContainer;
- (void)setDetailViewHeight:(double)arg1;
- (double)currentDetailViewHeight;
- (void)onPageSheetDismiss:(id)arg1;
@property(retain, nonatomic) MMPageSheetConfig *pageSheetConfig; // @synthesize pageSheetConfig=_pageSheetConfig;
- (void)pageSheetPresentAnimateDidEnd;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)pageSheetPresentAnimateWillBegin;
- (void)pageSheetDidRotation;
- (void)adjustContainerYOffset:(double)arg1 animated:(_Bool)arg2;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (void)pageSheetWillCloseWithType:(long long)arg1;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillAppear;
- (id)adaptedViewController;
- (id)pageSheetProviderController;
- (void)didPushSelfInPage:(id)arg1;
- (double)pageSheetContentWidth;
- (double)pageSheetContentHeight;
- (id)pageSheetContentView;
- (void)popPageSheetTo:(id)arg1 animated:(_Bool)arg2;
- (void)popPageSheetWithAnimated:(_Bool)arg1;
- (void)popPageSheet;
- (void)pushPageSheet:(id)arg1 animated:(_Bool)arg2;
- (void)pushPageSheet:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)updateDetailViewHeight:(double)arg1 animated:(_Bool)arg2;
- (void)showFromViewController:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)showFromViewController:(id)arg1 animated:(_Bool)arg2;
- (void)showInView:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)showWithAnimated:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)showWithAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (void)_observeViewFrameChanged:(id)arg1 changeBlock:(CDUnknownBlockType)arg2;
- (void)bindListenProgressObjectModel:(id)arg1;
- (id)__getAttachedWebPageSheet;
- (void)__attachWebPageSheet:(id)arg1;
- (void)onPageSheetConfigChangedOnWebExt;
- (id)hostWebViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

