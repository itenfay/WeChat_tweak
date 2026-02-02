//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, TimeSpan, UIPickerView;
@protocol WCPayLQTPickerPanelViewDelegate;

@interface WCPayLQTPickerPanelView : UIView
{
    id <WCPayLQTPickerPanelViewDelegate> _delegate;
    NSArray *_timeList;
    NSString *_title;
    NSString *_subTitle;
    TimeSpan *_selectedTime;
    UIView *_backgroundView;
    UIView *_contentView;
    UIPickerView *_timePicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPickerView *timePicker; // @synthesize timePicker=_timePicker;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) TimeSpan *selectedTime; // @synthesize selectedTime=_selectedTime;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *timeList; // @synthesize timeList=_timeList;
@property(nonatomic) __weak id <WCPayLQTPickerPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)calcSelectedTimeIndex;
- (id)timeStringFromTimeSpan:(unsigned int)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)refreshSelectedTime:(id)arg1;
- (void)confirmBtnClick;
- (void)handleTap;
- (void)cancelBtnPress;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)setupContentView;
- (id)initPickerPanelViewWithDelegate:(id)arg1 title:(id)arg2 subTitle:(id)arg3 timeList:(id)arg4 selectedTime:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

