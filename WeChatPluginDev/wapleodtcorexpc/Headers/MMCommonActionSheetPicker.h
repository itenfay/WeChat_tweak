//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCommonPickerView, NSArray, NSString, PickerTitleBar, PickerToolBar, UIButton, UIView;
@protocol MMCommonActionSheetPickerDelegate;

@interface MMCommonActionSheetPicker
{
    _Bool _shouldManualDismiss;
    _Bool _showInView;
    NSString *_title;
    NSString *_confirmText;
    id <MMCommonActionSheetPickerDelegate> _delegate;
    MMCommonPickerView *_pickerView;
    PickerTitleBar *_titleBar;
    PickerToolBar *_pickerToolBar;
    UIView *_containerView;
    UIView *_transparentView;
    MMCommonPickerView *_customPickerView;
}

+ (struct UIEdgeInsets)realSafeAreaInsets;
- (void).cxx_destruct;
@property(nonatomic) _Bool showInView; // @synthesize showInView=_showInView;
@property(retain, nonatomic) MMCommonPickerView *customPickerView; // @synthesize customPickerView=_customPickerView;
@property(nonatomic) __weak UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) PickerToolBar *pickerToolBar; // @synthesize pickerToolBar=_pickerToolBar;
@property(retain, nonatomic) PickerTitleBar *titleBar; // @synthesize titleBar=_titleBar;
@property(nonatomic) _Bool shouldManualDismiss; // @synthesize shouldManualDismiss=_shouldManualDismiss;
@property(retain, nonatomic) MMCommonPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak id <MMCommonActionSheetPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *confirmText; // @synthesize confirmText=_confirmText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (double)pickerViewHeight;
- (id)getContainView;
- (id)getTransparentView;
- (void)handleTap:(id)arg1;
- (void)onConfirm;
- (void)onCancel;
@property(readonly, nonatomic) UIButton *cancelButton;
@property(readonly, nonatomic) UIButton *confirmButton;
- (void)setBottomTips:(id)arg1 autoExpandHeight:(_Bool)arg2;
- (void)setBottomTips:(id)arg1;
- (void)centerTitle;
@property(readonly, nonatomic) NSArray *selectedRows;
@property(readonly, nonatomic) id selectedData;
- (void)dismiss;
- (void)dismissActionSheetPicker;
- (void)showInView:(id)arg1 maskAlpha:(double)arg2;
- (void)showInView:(id)arg1;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3;
- (void)setSelected:(id)arg1 inComponent:(long long)arg2;
- (void)setSelected:(id)arg1;
- (void)setData:(id)arg1 inComponent:(long long)arg2;
- (void)setData:(id)arg1;
- (void)setTopRoundCorner;
- (void)layoutSubviews;
- (void)UISplitViewWillChangeSplitMode;
- (void)addNotifications;
- (void)createViews;
- (void)dealloc;
- (id)init;
- (id)initWithCustomPickerView:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

