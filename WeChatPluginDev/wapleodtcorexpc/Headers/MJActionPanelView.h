//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJActionPanelMainMenuView, MJActionPanelViewModel, NSString;
@protocol MJActionPanelViewDelegate;

@interface MJActionPanelView
{
    MJActionPanelViewModel *_viewModel;
    id <MJActionPanelViewDelegate> _delegate;
    MJActionPanelMainMenuView *_mainMenuView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJActionPanelMainMenuView *mainMenuView; // @synthesize mainMenuView=_mainMenuView;
@property(nonatomic) __weak id <MJActionPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MJActionPanelViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)mainMenuView:(id)arg1 didSelectItem:(id)arg2;
- (void)commonInit;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

