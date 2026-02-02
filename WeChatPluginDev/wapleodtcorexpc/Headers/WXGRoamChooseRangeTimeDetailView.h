//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIDatePicker, UILabel;

@interface WXGRoamChooseRangeTimeDetailView
{
    _Bool _isStartTime;
    UIDatePicker *_datePicker;
    UILabel *_dateLabel;
    UILabel *_dateTipsLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStartTime; // @synthesize isStartTime=_isStartTime;
@property(retain, nonatomic) UILabel *dateTipsLabel; // @synthesize dateTipsLabel=_dateTipsLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)updateDate;
- (void)datePickerValueChanged:(id)arg1;
- (void)setupView;
- (id)initWithIsStartTime:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

