//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, NSString, TemplateReaderMessageFolderViewModel;

@interface TemplateReaderMessageFolderCellView
{
    MMUIButton *_hotSpotButton;
    NSMutableArray *_cellViewList;
    NSMutableArray *_expandedPositionYList;
    NSMutableArray *_collapsedPositionYList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *collapsedPositionYList; // @synthesize collapsedPositionYList=_collapsedPositionYList;
@property(retain, nonatomic) NSMutableArray *expandedPositionYList; // @synthesize expandedPositionYList=_expandedPositionYList;
@property(retain, nonatomic) NSMutableArray *cellViewList; // @synthesize cellViewList=_cellViewList;
@property(retain, nonatomic) MMUIButton *hotSpotButton; // @synthesize hotSpotButton=_hotSpotButton;
- (_Bool)isItemInCellViewList:(id)arg1;
- (void)kvReportWithReportType:(unsigned long long)arg1 jumpType:(unsigned long long)arg2;
- (void)kvReportWithReportType:(unsigned long long)arg1;
- (void)onFolderCellView:(id)arg1 actionType:(unsigned long long)arg2 jumpType:(unsigned long long)arg3;
- (_Bool)canCellShowOperationMenu;
- (void)handleHotSpotButtonClicked;
- (void)handleExpandButtonClicked;
- (double)calcuateCollapsedPositionYWithIndex:(unsigned long long)arg1;
- (double)calcuateExpandedPositionYWithIndex:(unsigned long long)arg1;
- (void)updateCellViewBackgroundColorAfterCollapse;
- (void)updateCellViewBackgroundColorBeforeExpand;
- (void)updateContentViewFrameBeforeExpand;
- (void)setNoClip;
- (void)expandFolder;
- (_Bool)canBeReused;
- (void)modifyStatusExpanding2ExpandedAndReplaceMessageNode;
- (void)layoutContentView;
- (void)setDelegate:(id)arg1;
- (void)setupContentView;
- (void)onAppear;
@property(retain, nonatomic) TemplateReaderMessageFolderViewModel *viewModel; // @dynamic viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

