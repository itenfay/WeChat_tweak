//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandFlowListBaseCellModel, MMUIButton, NSMutableArray, NSMutableSet, NSString, UIButton, UILabel, UITableView;
@protocol BrandFlowListDislikeSelectionHalfViewControllerDelegate;

@interface BrandFlowListDislikeSelectionHalfViewController
{
    id <BrandFlowListDislikeSelectionHalfViewControllerDelegate> _bizDelegate;
    MMUIButton *_closeBtn;
    UILabel *_titleLabel;
    UIButton *_submitBtn;
    UITableView *_tableView;
    BrandFlowListBaseCellModel *_viewModel;
    double _heightRatio;
    NSMutableArray *_selectedEntries;
    NSMutableSet *_exposedEntries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *exposedEntries; // @synthesize exposedEntries=_exposedEntries;
@property(retain, nonatomic) NSMutableArray *selectedEntries; // @synthesize selectedEntries=_selectedEntries;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(retain, nonatomic) BrandFlowListBaseCellModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak id <BrandFlowListDislikeSelectionHalfViewControllerDelegate> bizDelegate; // @synthesize bizDelegate=_bizDelegate;
- (void)_handleWordingEntrySelect:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)submitDislikeReason:(id)arg1;
- (void)onSubmitButtonClicked:(id)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (id)wordingAtIndex:(unsigned long long)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (double)getMaxHalfScreenHeight;
- (void)updateUI;
- (void)setupUI;
- (void)viewDidLoad;
- (void)baseInit;
- (id)initWithViewModel:(id)arg1;
- (_Bool)isForbidPanGesture;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

