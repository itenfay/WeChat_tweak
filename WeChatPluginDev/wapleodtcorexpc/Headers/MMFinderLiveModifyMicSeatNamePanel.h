//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicSeatBaseInfo, MMUITextField, NSString, UIButton;
@protocol MMFinderLiveModifyMicSeatNamePanelDelegate;

@interface MMFinderLiveModifyMicSeatNamePanel
{
    id <MMFinderLiveModifyMicSeatNamePanelDelegate> _actionDelegate;
    NSString *_originalSeatName;
    unsigned long long _seatId;
    MMFinderLiveConnectMicSeatBaseInfo *_micSeatBaseInfo;
    UIButton *_doneButton;
    MMUITextField *_textField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMFinderLiveConnectMicSeatBaseInfo *micSeatBaseInfo; // @synthesize micSeatBaseInfo=_micSeatBaseInfo;
@property(nonatomic) unsigned long long seatId; // @synthesize seatId=_seatId;
@property(copy, nonatomic) NSString *originalSeatName; // @synthesize originalSeatName=_originalSeatName;
@property(nonatomic) __weak id <MMFinderLiveModifyMicSeatNamePanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onClickPageSheetConfirmButton;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetWillAppear;
- (_Bool)checkIsSeatNameChanged;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextFieldHideKeyBoard;
- (void)layoutTextField;
- (void)configPageSheetAndDetailView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 seatBaseInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

