//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDragManager, MainFrameCellData, MainFrameItemView, NSString, UIDragInteraction, UIImage, UIImageView, UIView;

@interface NewMainFrameCell
{
    MainFrameItemView *m_itemView;
    UIImageView *m_backGroundViewOfCell;
    UIImage *m_cellBkgImageWithTop;
    UIImage *m_cellBkgImage;
    MainFrameCellData *m_cellData;
    MainFrameCellData *m_oldCellData;
    MMDragManager *_dragManager;
    UIDragInteraction *_dragInteraction;
    UIView *_dragLiftingView;
    double _horizonPadding;
}

- (void).cxx_destruct;
@property(nonatomic) double horizonPadding; // @synthesize horizonPadding=_horizonPadding;
@property(retain, nonatomic) UIView *dragLiftingView; // @synthesize dragLiftingView=_dragLiftingView;
@property(retain, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(retain, nonatomic) MMDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property(retain, nonatomic) MainFrameCellData *m_oldCellData; // @synthesize m_oldCellData;
@property(retain, nonatomic) MainFrameCellData *m_cellData; // @synthesize m_cellData;
- (id)extInfoForSnapshotPrinter;
- (id)itemViewSnapshotForDragAndDrop;
- (void)playHighlightBackgroundAnimate;
- (id)getGreenLabelText;
- (void)onMultiMenuAppear;
- (void)onMenuTransitionToConfirmState:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)updateCellBackground:(id)arg1;
- (void)updateCellTime;
- (id)accessibilityLabel;
- (void)updateCellContent:(id)arg1 withContact:(id)arg2;
- (void)updateContentView:(id)arg1 tableViewFrame:(struct CGRect)arg2 isSearching:(_Bool)arg3 isSearchTableView:(_Bool)arg4 searchBarText:(id)arg5;
- (id)makeUnsubscribeMenuItem;
- (void)updateMoreMenu:(id)arg1;
- (_Bool)isSessionSetUnreadable:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

