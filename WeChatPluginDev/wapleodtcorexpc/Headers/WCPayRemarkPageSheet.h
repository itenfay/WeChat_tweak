//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMGrowTextView, MMPageSheetAdapter, MMUILabel, NSString, UIButton, UIView, WCPayRemarkPageSheetConfig;
@protocol WCPayRemarkPageSheetDelegate;

@interface WCPayRemarkPageSheet : NSObject
{
    _Bool _bIsShowing;
    id <WCPayRemarkPageSheetDelegate> _delegate;
    WCPayRemarkPageSheetConfig *_config;
    MMPageSheetAdapter *_pageAdapter;
    UIView *_pageSheetDetailView;
    UIView *_textbackgroundView;
    MMGrowTextView *_textView;
    MMUILabel *_inputCountLabel;
    UIButton *_rightButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MMUILabel *inputCountLabel; // @synthesize inputCountLabel=_inputCountLabel;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *textbackgroundView; // @synthesize textbackgroundView=_textbackgroundView;
@property(retain, nonatomic) UIView *pageSheetDetailView; // @synthesize pageSheetDetailView=_pageSheetDetailView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(nonatomic) _Bool bIsShowing; // @synthesize bIsShowing=_bIsShowing;
@property(retain, nonatomic) WCPayRemarkPageSheetConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WCPayRemarkPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillAppear:(id)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)dismissPage;
- (_Bool)isRemarkPageSheetShowing;
- (id)getCurrntContent;
- (void)rightButtonClick;
- (void)dismissPageSheet;
- (void)showPageSheet;
- (void)updateConfig:(id)arg1;
- (double)updateViewStatus;
- (void)updatetextViewHeight;
- (void)setupDetailViewContent;
- (_Bool)shouldSetupDetailViewContent;
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

