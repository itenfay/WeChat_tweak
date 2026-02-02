//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDynamicColor, NSString, UILabel, UIView;

@interface KindaOpenIMInfoView
{
    int _m_textSize;
    long long _fontStyle;
    long long _m_textAlign;
    long long _m_textViewAlign;
    MMDynamicColor *_m_textColor;
    NSString *_m_formatText;
    NSString *_m_nickName;
    NSString *_m_trueName;
    NSString *_m_businessName;
    UIView *_m_view;
    UIView *_m_firstLayout;
    UILabel *_m_firstLabel;
    UILabel *_m_firstSuffixLabel;
    UIView *_m_secondLayout;
    UILabel *_m_secondLabel;
    UILabel *_m_secondSuffixLabel;
    UILabel *_m_measureLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *m_measureLabel; // @synthesize m_measureLabel=_m_measureLabel;
@property(retain, nonatomic) UILabel *m_secondSuffixLabel; // @synthesize m_secondSuffixLabel=_m_secondSuffixLabel;
@property(retain, nonatomic) UILabel *m_secondLabel; // @synthesize m_secondLabel=_m_secondLabel;
@property(retain, nonatomic) UIView *m_secondLayout; // @synthesize m_secondLayout=_m_secondLayout;
@property(retain, nonatomic) UILabel *m_firstSuffixLabel; // @synthesize m_firstSuffixLabel=_m_firstSuffixLabel;
@property(retain, nonatomic) UILabel *m_firstLabel; // @synthesize m_firstLabel=_m_firstLabel;
@property(retain, nonatomic) UIView *m_firstLayout; // @synthesize m_firstLayout=_m_firstLayout;
@property(retain, nonatomic) UIView *m_view; // @synthesize m_view=_m_view;
@property(retain, nonatomic) NSString *m_businessName; // @synthesize m_businessName=_m_businessName;
@property(retain, nonatomic) NSString *m_trueName; // @synthesize m_trueName=_m_trueName;
@property(retain, nonatomic) NSString *m_nickName; // @synthesize m_nickName=_m_nickName;
@property(retain, nonatomic) NSString *m_formatText; // @synthesize m_formatText=_m_formatText;
@property(retain, nonatomic) MMDynamicColor *m_textColor; // @synthesize m_textColor=_m_textColor;
@property(nonatomic) long long m_textViewAlign; // @synthesize m_textViewAlign=_m_textViewAlign;
@property(nonatomic) long long m_textAlign; // @synthesize m_textAlign=_m_textAlign;
@property(nonatomic) int m_textSize; // @synthesize m_textSize=_m_textSize;
@property(nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
- (id)fontWithStyle;
- (id)insertWordJoinerInContent:(id)arg1;
- (double)measureWidth:(id)arg1;
- (id)getBusinessNameText;
- (void)setBusinessNameText:(id)arg1;
- (id)getTrueNameText;
- (void)setTrueNameText:(id)arg1;
- (id)getNickNameText;
- (void)setNickNameText:(id)arg1;
- (id)getFormatText;
- (void)setFormatText:(id)arg1;
- (id)getTextColor;
- (void)setTextColor:(id)arg1;
- (double)getContentHeight;
- (int)getLayoutAlign;
- (long long)getTextAlign;
- (void)setTextAlign:(long long)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (void)innerUpdateContent;
- (void)updateContent:(_Bool)arg1;
- (void)updateContent;
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

