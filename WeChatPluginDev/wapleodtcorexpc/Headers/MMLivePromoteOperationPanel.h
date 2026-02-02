//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, NSString, UITapGestureRecognizer, UIView;
@protocol MMLivePromoteOperationPanelDelegate;

@interface MMLivePromoteOperationPanel
{
    id <MMLivePromoteOperationPanelDelegate> _delegate;
    double _contentHeight;
    UIView *_contentView;
    UIView *_panelView;
    MMUIButton *_arrowButton;
    NSMutableArray *_panelCells;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSMutableArray *panelCells; // @synthesize panelCells=_panelCells;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) __weak id <MMLivePromoteOperationPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTapArrowButton;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)handleCellDidClick:(id)arg1;
- (void)forceLayout;
- (void)hidePanel;
- (void)showPanel;
- (void)addPanelCell:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)createUI;
- (void)setupPageSheetConfig;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

