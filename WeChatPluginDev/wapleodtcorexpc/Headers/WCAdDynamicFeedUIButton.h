//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor, WCAdDynamicFeedElementInfo;

@interface WCAdDynamicFeedUIButton
{
    _Bool _isDisabledStyle;
    WCAdDynamicFeedElementInfo *_elementInfo;
    UIColor *_titleColorNormal;
    UIColor *_bgColorNormal;
    UIColor *_titleColorHighlighted;
    UIColor *_bgColorHighlighted;
    UIColor *_titleColorDisabled;
    UIColor *_bgColorDisabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDisabledStyle; // @synthesize isDisabledStyle=_isDisabledStyle;
@property(retain, nonatomic) UIColor *bgColorDisabled; // @synthesize bgColorDisabled=_bgColorDisabled;
@property(retain, nonatomic) UIColor *titleColorDisabled; // @synthesize titleColorDisabled=_titleColorDisabled;
@property(retain, nonatomic) UIColor *bgColorHighlighted; // @synthesize bgColorHighlighted=_bgColorHighlighted;
@property(retain, nonatomic) UIColor *titleColorHighlighted; // @synthesize titleColorHighlighted=_titleColorHighlighted;
@property(retain, nonatomic) UIColor *bgColorNormal; // @synthesize bgColorNormal=_bgColorNormal;
@property(retain, nonatomic) UIColor *titleColorNormal; // @synthesize titleColorNormal=_titleColorNormal;
@property(retain, nonatomic) WCAdDynamicFeedElementInfo *elementInfo; // @synthesize elementInfo=_elementInfo;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateBgColorNormal:(id)arg1;
- (void)updateTitleColorNormal:(id)arg1;
- (void)updateButtonStateWithTitle:(id)arg1 isEnabled:(_Bool)arg2 isDisabledStyle:(_Bool)arg3;

@end

