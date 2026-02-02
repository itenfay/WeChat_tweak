//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UIView, WCFinderFilterTextView, WCFinderModTextSelectModel;
@protocol WCFinderModifyEditInputViewDelegate;

@interface WCFinderModifyEditInputView
{
    id <WCFinderModifyEditInputViewDelegate> _delegate;
    WCFinderFilterTextView *_textView;
    UIButton *_cancelBtn;
    UIButton *_modifyBtn;
    UILabel *_originLabel;
    UIView *_textViewBGView;
    UILabel *_countLimitLabel;
    WCFinderModTextSelectModel *_modifyModel;
    long long _maxCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(retain, nonatomic) WCFinderModTextSelectModel *modifyModel; // @synthesize modifyModel=_modifyModel;
@property(retain, nonatomic) UILabel *countLimitLabel; // @synthesize countLimitLabel=_countLimitLabel;
@property(retain, nonatomic) UIView *textViewBGView; // @synthesize textViewBGView=_textViewBGView;
@property(retain, nonatomic) UILabel *originLabel; // @synthesize originLabel=_originLabel;
@property(retain, nonatomic) UIButton *modifyBtn; // @synthesize modifyBtn=_modifyBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) WCFinderFilterTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <WCFinderModifyEditInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateCountLimitLabel;
- (void)textDidChangeFinish:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)onClickFinishAction;
- (void)onClickCancelBtn;
- (void)layoutAllSubivews;
- (void)updateWithModifyModel:(id)arg1 maxCount:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

