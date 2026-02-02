//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate, NSString, UIBarButtonItem, UIView;
@protocol MMActionSheetCustomPickerPotocol, MMActionSheetDatePickerDelegate;

@interface MMActionSheetDatePicker
{
    id <MMActionSheetDatePickerDelegate> _delegate;
    UIView<MMActionSheetCustomPickerPotocol> *_customDatePickerView;
    unsigned long long _datePickerViewType;
    long long _datePickerMode;
    NSString *_title;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    UIView *_transparentView;
    NSDate *_selectedDate;
    NSString *_comfirmText;
    NSString *_cancelText;
    UIView *_contentView;
    UIView *_titleView;
    UIView *_datePicker;
    UIView *_pickerToolBar;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_titleBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *titleBarButtonItem; // @synthesize titleBarButtonItem=_titleBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
@property(retain, nonatomic) UIView *pickerToolBar; // @synthesize pickerToolBar=_pickerToolBar;
@property(retain, nonatomic) UIView *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *cancelText; // @synthesize cancelText=_cancelText;
@property(retain, nonatomic) NSString *comfirmText; // @synthesize comfirmText=_comfirmText;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(nonatomic) unsigned long long datePickerViewType; // @synthesize datePickerViewType=_datePickerViewType;
@property(retain, nonatomic) UIView<MMActionSheetCustomPickerPotocol> *customDatePickerView; // @synthesize customDatePickerView=_customDatePickerView;
@property(nonatomic) __weak id <MMActionSheetDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleTap:(id)arg1;
- (void)eventForDatePicker:(id)arg1;
- (void)onConfirm;
- (void)onCancel;
- (_Bool)accessibilityPerformEscape;
- (void)dismiss;
- (void)dismissActionSheetDatePicker;
- (void)showInView:(id)arg1;
- (id)init;

@end

