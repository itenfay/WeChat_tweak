//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMGrowTextView, MMUIButton, MMUILabel, NSString, UIView;

@interface MMFinderLiveCancelNoticeView
{
    _Bool _isPaidNotice;
    _Bool _isKeyboardShow;
    CDUnknownBlockType _liveCancelNoticeViewBlock;
    CAShapeLayer *_shapeLayer;
    UIView *_contentView;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    UIView *_pubbleInputView;
    MMGrowTextView *_growTextView;
    MMUILabel *_wordCountTips;
    MMUIButton *_cancelButton;
    MMUIButton *_actionButton;
    double _keyboardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isKeyboardShow; // @synthesize isKeyboardShow=_isKeyboardShow;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUILabel *wordCountTips; // @synthesize wordCountTips=_wordCountTips;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIView *pubbleInputView; // @synthesize pubbleInputView=_pubbleInputView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) _Bool isPaidNotice; // @synthesize isPaidNotice=_isPaidNotice;
@property(copy, nonatomic) CDUnknownBlockType liveCancelNoticeViewBlock; // @synthesize liveCancelNoticeViewBlock=_liveCancelNoticeViewBlock;
- (void)setupPageSheetConfig;
- (double)getContentHeight;
- (double)contentViewHeight;
- (void)layoutUI;
- (void)createUI;
- (void)updateDetailViewFrameAnimated:(_Bool)arg1;
- (id)stringByRemovingOverflowedLinesInString:(id)arg1 limitedLineCount:(unsigned long long)arg2;
- (id)stringByRemovingLastEmptyLineInString:(id)arg1;
- (id)stringByRemovingReturnLineInString:(id)arg1;
- (void)fixTopicText:(_Bool)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)liveCancelNoticeViewClick:(_Bool)arg1;
- (void)liveCancelNoticeViewActionClick;
- (void)liveCancelNoticeViewCancelClick;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

