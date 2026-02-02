//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMActionSheetDatePicker, MMUIViewController, NSString, UIView, WCScheduleItem;
@protocol WCScheduleLogicControllerDelegate;

@interface WCScheduleLogicController
{
    _Bool _isCancelSchedule;
    id <WCScheduleLogicControllerDelegate> _delegate;
    MMActionSheetDatePicker *_datePicker;
    WCScheduleItem *_cachedItem;
    MMUIViewController *_fromVC;
    UIView *_animateCellView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *animateCellView; // @synthesize animateCellView=_animateCellView;
@property(nonatomic) __weak MMUIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(nonatomic) _Bool isCancelSchedule; // @synthesize isCancelSchedule=_isCancelSchedule;
@property(retain, nonatomic) WCScheduleItem *cachedItem; // @synthesize cachedItem=_cachedItem;
@property(retain, nonatomic) MMActionSheetDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) __weak id <WCScheduleLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onScheduleModifyFail:(id)arg1 errTips:(id)arg2;
- (void)onScheduleRemoveItem:(id)arg1;
- (void)onScheduleItemRemindChange:(id)arg1;
- (void)onScheduleAppendItem:(id)arg1;
- (_Bool)datePicker:(id)arg1 shouldSelectDate:(id)arg2;
- (void)datePickerConfirm:(id)arg1;
- (void)datePickerCancel:(id)arg1;
- (void)removeDatePicker;
- (void)dismissDatePickerView;
- (void)startCancelScheduleLogic:(id)arg1 fromViewController:(id)arg2;
- (void)startModifyRemindLogic:(id)arg1 showDatePickerInView:(id)arg2;
- (_Bool)startAddScheduleLogicWithItem:(id)arg1 selectedDate:(id)arg2;
- (_Bool)startAddScheduleLogicWithItem:(id)arg1 cellView:(id)arg2 fromViewController:(id)arg3;
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

