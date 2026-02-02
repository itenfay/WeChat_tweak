//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMStepSlider, NSString, UIImageView;
@protocol MMWebViewFontFloatViewDelegate;

@interface MMWebViewFontFloatView
{
    UIImageView *viewBg;
    unsigned int m_uiFontType;
    unsigned int m_uiMaxLevel;
    MMStepSlider *m_slider;
    id <MMWebViewFontFloatViewDelegate> m_delegate;
    _Bool m_bAnimating;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMWebViewFontFloatViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (void)slideOut;
- (void)showUp;
- (void)delayShow;
- (void)initSlider:(unsigned int)arg1 maxLevel:(unsigned int)arg2;
- (id)initWithFontType:(unsigned int)arg1 maxLevel:(unsigned int)arg2 attachToView:(id)arg3;
- (void)onClose;
- (void)mmSliderViewChange:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

