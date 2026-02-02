//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, EditImageColorSquareBar, MMUIButton, NSString, TextStateBlurButton, UIButton, UIColor, UIView;
@protocol EditImagePenToolAttrDelegate;

@interface EditImagePenToolAttrView
{
    UIButton *_undoBtn;
    _Bool _enable;
    _Bool _needEraserButton;
    _Bool _needSeparator;
    _Bool _needsCloseButton;
    _Bool _layoutsVertically;
    UIColor *_selectedColor;
    id <EditImagePenToolAttrDelegate> _m_delegate;
    EditImageColorSquareBar *_colorSquareBar;
    MMUIButton *_closeButton;
    TextStateBlurButton *_eraserButton;
    CAGradientLayer *_colorBarMaskLayer;
    UIView *_separator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) CAGradientLayer *colorBarMaskLayer; // @synthesize colorBarMaskLayer=_colorBarMaskLayer;
@property(retain, nonatomic) TextStateBlurButton *eraserButton; // @synthesize eraserButton=_eraserButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) EditImageColorSquareBar *colorSquareBar; // @synthesize colorSquareBar=_colorSquareBar;
@property(nonatomic) _Bool layoutsVertically; // @synthesize layoutsVertically=_layoutsVertically;
@property(nonatomic) __weak id <EditImagePenToolAttrDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool needsCloseButton; // @synthesize needsCloseButton=_needsCloseButton;
@property(nonatomic) _Bool needSeparator; // @synthesize needSeparator=_needSeparator;
@property(nonatomic) _Bool needEraserButton; // @synthesize needEraserButton=_needEraserButton;
@property(retain, nonatomic) UIColor *_selectedColor; // @synthesize _selectedColor;
- (void)setSelectedColorFromSquareBar:(id)arg1;
- (double)getLineWidth;
- (id)getLineColor;
- (void)setUndoEnable:(_Bool)arg1;
- (void)_handleClickEraserBtn:(id)arg1;
- (void)onClickEraserBtn:(id)arg1;
- (void)onUndoEditImage;
- (void)onClickCloseButton:(id)arg1;
- (void)resetEraserBtnSelectedStateIfNeed;
- (id)colorBarPanGesture;
- (void)setColorBarScrollEnable:(_Bool)arg1;
- (void)resetToInitalState;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

