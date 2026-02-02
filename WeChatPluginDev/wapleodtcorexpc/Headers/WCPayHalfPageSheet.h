//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPageSheetAdapter, NSString, UIView, WCPayHalfPageSheetConfig;

@interface WCPayHalfPageSheet : NSObject
{
    _Bool _bIsShowing;
    WCPayHalfPageSheetConfig *_config;
    MMPageSheetAdapter *_pageAdapter;
    UIView *_pageSheetDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *pageSheetDetailView; // @synthesize pageSheetDetailView=_pageSheetDetailView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(nonatomic) _Bool bIsShowing; // @synthesize bIsShowing=_bIsShowing;
@property(retain, nonatomic) WCPayHalfPageSheetConfig *config; // @synthesize config=_config;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillAppear:(id)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (_Bool)isTipsPageSheetShowing;
- (void)dismissPageSheet:(_Bool)arg1;
- (void)showPageSheet;
- (void)setupDetailViewContent;
- (_Bool)shouldSetupDetailViewContent;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

