//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class EmoticonBoardCrossCollectionStoreGridCellModel, EmoticonGridView, NSString;
@protocol EmoticonBoardCrossCollectionStoreGridCellDelegate;

@interface EmoticonBoardCrossCollectionStoreGridCell : UICollectionViewCell
{
    id <EmoticonBoardCrossCollectionStoreGridCellDelegate> _delegsate;
    EmoticonBoardCrossCollectionStoreGridCellModel *_model;
    EmoticonGridView *_gridView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) EmoticonBoardCrossCollectionStoreGridCellModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <EmoticonBoardCrossCollectionStoreGridCellDelegate> delegsate; // @synthesize delegsate=_delegsate;
- (void)shouldHideEmoticonPreview;
- (void)shouldShowEmoticonPreviewForWrap:(id)arg1 atIndex:(long long)arg2 withGridOffset:(struct CGPoint)arg3 description:(id)arg4;
- (void)onTapEmoticonWrap:(id)arg1 atIndex:(long long)arg2 gridView:(id)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)initViews;
- (void)hideAllFocus;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

