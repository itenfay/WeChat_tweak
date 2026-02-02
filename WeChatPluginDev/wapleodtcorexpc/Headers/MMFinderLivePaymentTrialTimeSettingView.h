//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCommonActionSheetPicker, MMFinderLivePaymentTrialTimeSettingCell, MMFinderLiveTaskId, MMUILabel, NSString, UITapGestureRecognizer, UIView;

@interface MMFinderLivePaymentTrialTimeSettingView
{
    unsigned int _curTrialTimeHour;
    unsigned int _curTrialTimeMinute;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    MMUILabel *_titleLabel;
    UITapGestureRecognizer *_tapGesture;
    MMFinderLivePaymentTrialTimeSettingCell *_durationSettingCell;
    long long _purchaseLivePreviewType;
    MMCommonActionSheetPicker *_startTimePicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCommonActionSheetPicker *startTimePicker; // @synthesize startTimePicker=_startTimePicker;
@property(nonatomic) unsigned int curTrialTimeMinute; // @synthesize curTrialTimeMinute=_curTrialTimeMinute;
@property(nonatomic) unsigned int curTrialTimeHour; // @synthesize curTrialTimeHour=_curTrialTimeHour;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
@property(retain, nonatomic) MMFinderLivePaymentTrialTimeSettingCell *durationSettingCell; // @synthesize durationSettingCell=_durationSettingCell;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)liveTask;
- (double)bottomViewBottomMargin;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)dismissStartTimePicker;
- (id)getHourArrWithDayComponent:(long long)arg1;
- (id)getMinuteArrWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getMinuteDataWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getHourDataWithDayComponent:(long long)arg1;
- (id)getDatePickerData;
- (void)onSelectTrialTime;
- (double)contentViewHeight;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithLiveTaskId:(id)arg1 purchaseLivePreviewType:(long long)arg2 trialDurationTime:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

