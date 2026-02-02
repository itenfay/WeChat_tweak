//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaView, MMDynamicColor, MMKEditTextOnEditorActionCallback, MMKEditTextOnFocusChangeCallback, MMKEditTextOnTextBeginChangeCallback, MMKEditTextOnTextChangedCallback, MMKEditTextOnTextEndEditingCallback, NSString, UILabel, UITextField, WCPayDecimalKeyboardView;

@interface KindaEditText
{
    _Bool _m_bRealLen;
    _Bool _showFloatButton;
    _Bool _m_stayFocusWhenClickEnter;
    int _m_maxLength;
    int _moneyRestrictionIntegerLimit;
    UITextField *_m_textField;
    UILabel *_fixedHeaderLabel;
    double _m_textSize;
    MMDynamicColor *_m_textColor;
    long long _m_textAlign;
    MMDynamicColor *_m_hintColor;
    long long _m_keyboardType;
    MMDynamicColor *_m_tintColor;
    NSString *_m_fontName;
    MMKEditTextOnTextBeginChangeCallback *_m_textBeginChangeCallback;
    MMKEditTextOnTextChangedCallback *_m_textChangedCallback;
    MMKEditTextOnTextEndEditingCallback *_m_textEndEditingCallBack;
    MMKEditTextOnEditorActionCallback *_m_textEditorActionCallback;
    NSString *_m_confirmButtonText;
    NSString *_fixedHeaderText;
    WCPayDecimalKeyboardView *_keyboardView;
    long long __restrictType;
    double _m_hintTextSize;
    MMKEditTextOnFocusChangeCallback *_m_onFocusChangeCallback;
    NSString *_m_confirmBtnTitle;
    KindaView *_m_toolBarView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KindaView *m_toolBarView; // @synthesize m_toolBarView=_m_toolBarView;
@property(retain, nonatomic) NSString *m_confirmBtnTitle; // @synthesize m_confirmBtnTitle=_m_confirmBtnTitle;
@property(nonatomic) _Bool m_stayFocusWhenClickEnter; // @synthesize m_stayFocusWhenClickEnter=_m_stayFocusWhenClickEnter;
@property(retain, nonatomic) MMKEditTextOnFocusChangeCallback *m_onFocusChangeCallback; // @synthesize m_onFocusChangeCallback=_m_onFocusChangeCallback;
@property(nonatomic) _Bool showFloatButton; // @synthesize showFloatButton=_showFloatButton;
@property(nonatomic) double m_hintTextSize; // @synthesize m_hintTextSize=_m_hintTextSize;
@property(nonatomic) long long _restrictType; // @synthesize _restrictType=__restrictType;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(nonatomic) _Bool m_bRealLen; // @synthesize m_bRealLen=_m_bRealLen;
@property(retain, nonatomic) NSString *fixedHeaderText; // @synthesize fixedHeaderText=_fixedHeaderText;
@property(nonatomic) int moneyRestrictionIntegerLimit; // @synthesize moneyRestrictionIntegerLimit=_moneyRestrictionIntegerLimit;
@property(nonatomic) int m_maxLength; // @synthesize m_maxLength=_m_maxLength;
@property(retain, nonatomic) NSString *m_confirmButtonText; // @synthesize m_confirmButtonText=_m_confirmButtonText;
@property(retain, nonatomic) MMKEditTextOnEditorActionCallback *m_textEditorActionCallback; // @synthesize m_textEditorActionCallback=_m_textEditorActionCallback;
@property(retain, nonatomic) MMKEditTextOnTextEndEditingCallback *m_textEndEditingCallBack; // @synthesize m_textEndEditingCallBack=_m_textEndEditingCallBack;
@property(retain, nonatomic) MMKEditTextOnTextChangedCallback *m_textChangedCallback; // @synthesize m_textChangedCallback=_m_textChangedCallback;
@property(retain, nonatomic) MMKEditTextOnTextBeginChangeCallback *m_textBeginChangeCallback; // @synthesize m_textBeginChangeCallback=_m_textBeginChangeCallback;
@property(copy, nonatomic) NSString *m_fontName; // @synthesize m_fontName=_m_fontName;
@property(retain, nonatomic) MMDynamicColor *m_tintColor; // @synthesize m_tintColor=_m_tintColor;
@property(nonatomic) long long m_keyboardType; // @synthesize m_keyboardType=_m_keyboardType;
@property(retain, nonatomic) MMDynamicColor *m_hintColor; // @synthesize m_hintColor=_m_hintColor;
@property(nonatomic) long long m_textAlign; // @synthesize m_textAlign=_m_textAlign;
@property(retain, nonatomic) MMDynamicColor *m_textColor; // @synthesize m_textColor=_m_textColor;
@property(nonatomic) double m_textSize; // @synthesize m_textSize=_m_textSize;
@property(retain, nonatomic) UILabel *fixedHeaderLabel; // @synthesize fixedHeaderLabel=_fixedHeaderLabel;
@property(retain, nonatomic) UITextField *m_textField; // @synthesize m_textField=_m_textField;
- (void)setupToolBarView:(id)arg1;
- (id)getCursorColor;
- (void)setCursorColor:(id)arg1;
- (void)updateWCPayDecimalNoActionKeyBoard;
- (void)updateWCPayDecimalKeyBoard;
- (void)transfromNumber;
- (void)updateFixedHeaderLabel;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)setOnFocusChangeCallback:(id)arg1;
- (_Bool)getStayFocusWhenEnter;
- (void)setStayFocusWhenEnter:(_Bool)arg1;
- (void)setNeedForceDismissFloatButton;
- (_Bool)getShowFloatButton;
- (void)setOnEditorActionCallback:(id)arg1;
- (void)enableConfirmBtn:(_Bool)arg1;
- (_Bool)getIsSingleLine;
- (void)setIsSingleLine:(_Bool)arg1;
- (id)getFixedHeaderText;
- (int)getMoneyRestrictionIntegerLimit;
- (long long)getRestrictType;
- (void)setRestrictType:(long long)arg1;
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (long long)getClearButtonMode;
- (void)setClearButtonMode:(long long)arg1;
- (id)encryptWith3Des;
- (void)setOnTextEndEditingCallback:(id)arg1;
- (void)setOnTextChangedCallback:(id)arg1;
- (void)setOnTextBeginChangeCallback:(id)arg1;
- (void)setConfirmButtonText:(id)arg1;
- (id)getConfirmButtonText;
- (id)getTintColor;
- (void)setTintColor:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (int)getSelection;
- (void)setSelection:(int)arg1;
- (long long)getKeyboardType;
- (void)setKeyboardType:(long long)arg1;
- (int)getMaxLength;
- (void)setMaxLength:(int)arg1;
- (float)getHintTextSize;
- (void)updateHint;
- (void)setHintTextSize:(float)arg1;
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
- (void)textFieldEndEditing;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange;
- (id)getView;
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

