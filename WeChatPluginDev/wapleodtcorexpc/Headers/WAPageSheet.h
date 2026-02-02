//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetAdapter, NSString, UIView, WAPageSheetContentView;
@protocol WAPageSheetDelegate;

@interface WAPageSheet
{
    _Bool _forbidTapToDismiss;
    _Bool _bSupportRotate;
    MMPageSheetAdapter *_adapter;
    id <WAPageSheetDelegate> _delegate;
    UIView *_parentView;
    WAPageSheetContentView *_contentView;
    WAPageSheet *_retainSheet;
    CDUnknownBlockType _showCompleteAction;
    CDUnknownBlockType _dismissCompleteAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dismissCompleteAction; // @synthesize dismissCompleteAction=_dismissCompleteAction;
@property(copy, nonatomic) CDUnknownBlockType showCompleteAction; // @synthesize showCompleteAction=_showCompleteAction;
@property(retain, nonatomic) WAPageSheet *retainSheet; // @synthesize retainSheet=_retainSheet;
@property(nonatomic) _Bool bSupportRotate; // @synthesize bSupportRotate=_bSupportRotate;
@property(nonatomic) _Bool forbidTapToDismiss; // @synthesize forbidTapToDismiss=_forbidTapToDismiss;
@property(retain, nonatomic) WAPageSheetContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <WAPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MMPageSheetAdapter *adapter; // @synthesize adapter=_adapter;
- (double)operateButtonBottomInset;
- (void)didRotate:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillAppear:(id)arg1;
@property(readonly, nonatomic) _Bool isShown;
- (double)contentHeight;
- (double)contentWidth;
- (void)resetContentViewCornerRadius;
- (void)layoutSubViews;
- (void)pushPageSheet:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

