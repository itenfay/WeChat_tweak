//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveActionSheetFlowLayoutView, MMLiveShopShelfDragBar, NSArray, NSString, UIPanGestureRecognizer;

@interface MMFinderLiveAudienceFolderActionSheet
{
    UIPanGestureRecognizer *_panGesture;
    MMLiveShopShelfDragBar *_dragBar;
    MMLiveActionSheetFlowLayoutView *_flowLayoutView;
    NSArray *_realItemArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *realItemArray; // @synthesize realItemArray=_realItemArray;
@property(retain, nonatomic) MMLiveActionSheetFlowLayoutView *flowLayoutView; // @synthesize flowLayoutView=_flowLayoutView;
@property(retain, nonatomic) MMLiveShopShelfDragBar *dragBar; // @synthesize dragBar=_dragBar;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
- (double)customIconMargin;
- (void)configScrollActionSheet:(id)arg1 rowIndex:(unsigned long long)arg2;
- (id)seperatorBackgroundColor;
- (void)handleContentGestureEnd;
- (void)handleContentGestureChangeTo:(double)arg1;
- (id)getHeaderView;
- (void)handlePopPanGesture:(id)arg1;
- (void)onActionSheetItemClicked:(id)arg1 senderView:(id)arg2;
- (id)mmLiveActionSheetFlowLayoutView:(id)arg1 getRedDotShowInfoAtPath:(id)arg2;
- (double)getMaxHeight;
- (void)showInView:(id)arg1;
- (void)setItemArray:(id)arg1;
- (id)containerViewBlurBackgroundColor;
- (void)commonInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

