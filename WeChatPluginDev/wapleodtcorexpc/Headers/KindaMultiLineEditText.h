//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDynamicColor, MMTextView, MMVoidBoolCallback, MMVoidCallback, MMVoidStringCallback, NSString;

@interface KindaMultiLineEditText
{
    double _textSize;
    MMDynamicColor *_textColor;
    MMDynamicColor *_hintColor;
    long long _textAlign;
    NSString *_fontName;
    int _maxLength;
    MMTextView *_textView;
    MMVoidCallback *_textEndEditingCallBack;
    MMVoidStringCallback *_textChangedCallback;
    MMVoidBoolCallback *_onFocusChangeCallback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoidBoolCallback *onFocusChangeCallback; // @synthesize onFocusChangeCallback=_onFocusChangeCallback;
@property(retain, nonatomic) MMVoidStringCallback *textChangedCallback; // @synthesize textChangedCallback=_textChangedCallback;
@property(retain, nonatomic) MMVoidCallback *textEndEditingCallBack; // @synthesize textEndEditingCallBack=_textEndEditingCallBack;
@property(retain, nonatomic) MMTextView *textView; // @synthesize textView=_textView;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (double)currentMinHeight;
- (void)setOnTextChangedImpl:(id)arg1;
- (void)setOnFocusChangedImpl:(id)arg1;
- (void)setOnTextEndEditingImpl:(id)arg1;
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (int)getMaxLength;
- (void)setMaxLength:(int)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (id)getHintColor;
- (void)setHintColor:(id)arg1;
- (id)getHint;
- (void)setHint:(id)arg1;
- (long long)getTextAlign;
- (void)setTextAlign:(long long)arg1;
- (id)getTextFont;
- (void)setTextFont:(id)arg1;
- (id)getTextColor;
- (void)setTextColor:(id)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (id)getText;
- (void)setText:(id)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

