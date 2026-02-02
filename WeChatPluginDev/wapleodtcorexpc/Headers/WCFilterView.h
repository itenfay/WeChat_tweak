//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIView, WCFilterBasePanel;
@protocol WCFilterViewDelegate;

@interface WCFilterView
{
    NSMutableArray *m_sections;
    MMUIView *m_titlePanel;
    NSMutableDictionary *m_selectedIndexes;
    int m_extendedIndex;
    _Bool m_duringAnimation;
    WCFilterBasePanel *m_extendedPanel;
    MMUIView *m_containView;
    MMUIView *m_animateView;
    MMUIView *m_maskView;
    struct CGRect m_preFrame;
    UIView *m_preSuperView;
    unsigned long long m_sectionMode;
    _Bool _autoDismissAfterSelect;
    _Bool _useEmphasizeColor;
    _Bool _useBoldFont;
    id <WCFilterViewDelegate> _delegate;
    unsigned long long _popType;
    UIColor *_curTintColor;
}

- (void).cxx_destruct;
@property(nonatomic) UIColor *curTintColor; // @synthesize curTintColor=_curTintColor;
@property(nonatomic) _Bool useBoldFont; // @synthesize useBoldFont=_useBoldFont;
@property(nonatomic) _Bool useEmphasizeColor; // @synthesize useEmphasizeColor=_useEmphasizeColor;
@property(nonatomic) _Bool autoDismissAfterSelect; // @synthesize autoDismissAfterSelect=_autoDismissAfterSelect;
@property(nonatomic) unsigned long long popType; // @synthesize popType=_popType;
@property(nonatomic) __weak id <WCFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCleanBtnClick;
- (void)onItemClick:(unsigned int)arg1;
- (void)syncSelection;
- (void)onDismissSelectionPanel;
- (void)onDismissSelectionPanelUpdateTitle;
- (void)dismissCurrentPanelComplete:(_Bool)arg1;
- (void)dismissCurrentPanel:(_Bool)arg1 updateTitle:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)onClickBtn:(id)arg1;
- (void)clearAllSelection;
- (void)updateFilterSection:(id)arg1 atIndex:(unsigned int)arg2;
- (void)updateTitleInButton:(id)arg1;
- (id)getSelectedItems;
- (id)getSelectedIndexes;
- (void)dismissSelectionPanelAnimation:(_Bool)arg1;
- (void)dismissSelectionPanel;
- (void)setFrame:(struct CGRect)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andFilterSections:(id)arg2 sectionMode:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 andFilterSections:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

