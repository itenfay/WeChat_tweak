//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMPageSheetProviderView, NSString;
@protocol MMPageSheetProvider><MMPageSheetContainerDelegate;

@interface MMPageSheetContainerView : UIView
{
    _Bool _pageSheetInited;
    MMPageSheetProviderView *_providerView;
    id <MMPageSheetProvider><MMPageSheetContainerDelegate> _provider;
    struct CGSize _superviewSize;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMPageSheetProvider><MMPageSheetContainerDelegate> provider; // @synthesize provider=_provider;
@property(nonatomic) struct CGSize superviewSize; // @synthesize superviewSize=_superviewSize;
@property(retain, nonatomic) MMPageSheetProviderView *providerView; // @synthesize providerView=_providerView;
@property(nonatomic) _Bool pageSheetInited; // @synthesize pageSheetInited=_pageSheetInited;
- (id)pageSheetContainerView;
- (id)getContainerViewController;
- (void)onPageSheetDismiss:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)popPageSheetTo:(id)arg1 animated:(_Bool)arg2;
- (void)adjustContainerYOffset:(double)arg1 animated:(_Bool)arg2;
- (void)popPageSheetWithAnimated:(_Bool)arg1;
- (void)pushPageSheet:(id)arg1 animated:(_Bool)arg2;
- (void)updateContentHeightWithAnimated:(_Bool)arg1;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showPageSheetAnimated:(_Bool)arg1 parentView:(id)arg2 parentViewController:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)setupWithProvider:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

