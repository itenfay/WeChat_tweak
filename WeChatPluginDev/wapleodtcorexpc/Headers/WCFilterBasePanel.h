//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSArray, NSMutableSet, NSString, UIView;
@protocol WCFilterBasePanelDelegate;

@interface WCFilterBasePanel
{
    NSString *m_cleanBtnTitle;
    _Bool m_isLoading;
    NSString *m_loadingTitle;
    NSString *m_emptyTitle;
    NSArray *m_filterItems;
    _Bool m_canMultiSelect;
    NSMutableSet *m_selectedIndexes;
    unsigned int m_itemCount;
    UIView *m_emptyView;
    MMUIView *m_loadingView;
    _Bool _useEmphasizeColor;
    _Bool _useBoldFont;
    id <WCFilterBasePanelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useBoldFont; // @synthesize useBoldFont=_useBoldFont;
@property(nonatomic) _Bool useEmphasizeColor; // @synthesize useEmphasizeColor=_useEmphasizeColor;
@property(nonatomic) __weak id <WCFilterBasePanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showEmptyView;
- (void)showLoadingView;
- (void)showLoadingOrEmptyView;
- (void)clearLoadingAndEmptyView;
- (void)configSelectedIndex:(id)arg1;
- (void)updateHeightWithRowNum:(unsigned int)arg1 andRowHeight:(double)arg2;
- (id)getSelectedIndexes;
- (void)configWithSection:(id)arg1;
- (void)clearSelection;
- (void)updateFilterSection:(id)arg1;
@property(readonly, nonatomic) _Bool hasCleanBtn;
- (id)initWithWidth:(double)arg1 andSection:(id)arg2;

@end

