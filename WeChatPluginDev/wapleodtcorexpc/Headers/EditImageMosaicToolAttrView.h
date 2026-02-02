//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIView, TextStateBlurButton, WCEditImageMosaicToolViewInitParams;
@protocol EditImageMosaicToolAttrDelegate;

@interface EditImageMosaicToolAttrView
{
    _Bool _enable;
    id <EditImageMosaicToolAttrDelegate> _m_delegate;
    unsigned long long _selectedNumber;
    WCEditImageMosaicToolViewInitParams *_params;
    TextStateBlurButton *_eraserButton;
    MMUIView *_separatorView;
    MMUIButton *_traditionalBtn;
    MMUIButton *_brushBtn;
    MMUIButton *_undoBtn;
    unsigned long long _selectState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectState; // @synthesize selectState=_selectState;
@property(retain, nonatomic) MMUIButton *undoBtn; // @synthesize undoBtn=_undoBtn;
@property(retain, nonatomic) MMUIButton *brushBtn; // @synthesize brushBtn=_brushBtn;
@property(retain, nonatomic) MMUIButton *traditionalBtn; // @synthesize traditionalBtn=_traditionalBtn;
@property(retain, nonatomic) MMUIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) TextStateBlurButton *eraserButton; // @synthesize eraserButton=_eraserButton;
@property(retain, nonatomic) WCEditImageMosaicToolViewInitParams *params; // @synthesize params=_params;
@property(nonatomic) unsigned long long selectedNumber; // @synthesize selectedNumber=_selectedNumber;
@property(nonatomic) __weak id <EditImageMosaicToolAttrDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)_handleClickEraserBtn:(id)arg1;
- (void)onClickEraserBtn:(id)arg1;
- (double)getLineWidth;
- (void)setUndoEnable:(_Bool)arg1;
- (void)resetEraserBtnSelectedStateIfNeed;
- (void)resetToInitalState;
- (void)onBrushBtnClicked;
- (void)onTraditionalBtnClicked;
- (void)onUndoEditImage;
- (double)genBtnBoaderWidth:(id)arg1;
- (struct CGSize)getBtnSize:(id)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 params:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

