//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaUIButton, MMDynamicColor, MMKViewOnClickCallback, NSString;
@protocol MMKImage;

@interface KindaButton
{
    float _m_textSize;
    MMKViewOnClickCallback *_m_onButtonClickCallback;
    KindaUIButton *_m_button;
    NSString *_m_text;
    MMDynamicColor *_m_normalTextColor;
    MMDynamicColor *_m_normalColor;
    MMDynamicColor *_m_disabledTextColor;
    MMDynamicColor *_m_disabledColor;
    long long _fontStyle;
    id <MMKImage> _m_normalBackgroundImage;
    id <MMKImage> _m_pressBackgroundImage;
    id <MMKImage> _m_disabledBackgroundImage;
    id <MMKImage> _m_selectedBackgroundImage;
    long long _m_expandHitWidth;
    long long _m_expandHitHeight;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_expandHitHeight; // @synthesize m_expandHitHeight=_m_expandHitHeight;
@property(nonatomic) long long m_expandHitWidth; // @synthesize m_expandHitWidth=_m_expandHitWidth;
@property(retain, nonatomic) id <MMKImage> m_selectedBackgroundImage; // @synthesize m_selectedBackgroundImage=_m_selectedBackgroundImage;
@property(retain, nonatomic) id <MMKImage> m_disabledBackgroundImage; // @synthesize m_disabledBackgroundImage=_m_disabledBackgroundImage;
@property(retain, nonatomic) id <MMKImage> m_pressBackgroundImage; // @synthesize m_pressBackgroundImage=_m_pressBackgroundImage;
@property(retain, nonatomic) id <MMKImage> m_normalBackgroundImage; // @synthesize m_normalBackgroundImage=_m_normalBackgroundImage;
@property(nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
@property(retain, nonatomic) MMDynamicColor *m_disabledColor; // @synthesize m_disabledColor=_m_disabledColor;
@property(retain, nonatomic) MMDynamicColor *m_disabledTextColor; // @synthesize m_disabledTextColor=_m_disabledTextColor;
@property(retain, nonatomic) MMDynamicColor *m_normalColor; // @synthesize m_normalColor=_m_normalColor;
@property(retain, nonatomic) MMDynamicColor *m_normalTextColor; // @synthesize m_normalTextColor=_m_normalTextColor;
@property(nonatomic) float m_textSize; // @synthesize m_textSize=_m_textSize;
@property(retain, nonatomic) NSString *m_text; // @synthesize m_text=_m_text;
@property(retain, nonatomic) KindaUIButton *m_button; // @synthesize m_button=_m_button;
@property(retain, nonatomic) MMKViewOnClickCallback *m_onButtonClickCallback; // @synthesize m_onButtonClickCallback=_m_onButtonClickCallback;
- (void)adjustSize;
- (long long)getHorizontalPadding;
- (void)setHorizontalPadding:(long long)arg1;
- (long long)getVerticalPadding;
- (void)setVerticalPadding:(long long)arg1;
- (long long)getFontStyle;
- (long long)getExpandHitHeight;
- (long long)getExpandHitWidth;
- (void)setExpandHitHeight:(long long)arg1;
- (void)setExpandHitWidth:(long long)arg1;
- (void)onButtonTouchUpInside:(id)arg1;
- (void)setDisableTextColor:(id)arg1;
- (id)getDisableTextColor;
- (void)setDisableColor:(id)arg1;
- (id)getDisableColor;
- (id)getNormalColor;
- (void)setNormalColor:(id)arg1;
- (_Bool)getEnable;
- (void)setEnable:(_Bool)arg1;
- (id)getDisabledImage;
- (void)setDisabledImage:(id)arg1;
- (id)getSelectedImage;
- (void)setSelectedImage:(id)arg1;
- (id)getPressedImage;
- (void)setPressedImage:(id)arg1;
- (id)getNormalImage;
- (void)setNormalImage:(id)arg1;
- (id)getText;
- (void)setText:(id)arg1;
- (id)getTextNormalColor;
- (void)setTextNormalColor:(id)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (_Bool)getEnableHighLight;
- (void)setEnableHighLight:(_Bool)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setOnClickCallback:(id)arg1;
- (void)setMinWidth:(float)arg1;
- (void)setMinHeight:(float)arg1;
- (void)setWidth:(float)arg1;
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

