//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@class NSIndexPath, UIView;
@protocol WCCollectViewReorderDragDelegate, WCCollectionViewDataSource;

@interface WCDragCollectionView : UICollectionView
{
    float _distGuesLocationWithCellCenterX;
    float _distGuesLocationWithCellCenterY;
    id <WCCollectionViewDataSource> _xd_dataSource;
    id <WCCollectViewReorderDragDelegate> _xd_dragDelegate;
    NSIndexPath *_originalIndexPath;
    NSIndexPath *_moveIndexPath;
    UIView *_tempMoveCell;
}

- (void).cxx_destruct;
@property(nonatomic) float distGuesLocationWithCellCenterY; // @synthesize distGuesLocationWithCellCenterY=_distGuesLocationWithCellCenterY;
@property(nonatomic) float distGuesLocationWithCellCenterX; // @synthesize distGuesLocationWithCellCenterX=_distGuesLocationWithCellCenterX;
@property(nonatomic) __weak UIView *tempMoveCell; // @synthesize tempMoveCell=_tempMoveCell;
@property(retain, nonatomic) NSIndexPath *moveIndexPath; // @synthesize moveIndexPath=_moveIndexPath;
@property(retain, nonatomic) NSIndexPath *originalIndexPath; // @synthesize originalIndexPath=_originalIndexPath;
@property(nonatomic) __weak id <WCCollectViewReorderDragDelegate> xd_dragDelegate; // @synthesize xd_dragDelegate=_xd_dragDelegate;
@property(nonatomic) __weak id <WCCollectionViewDataSource> xd_dataSource; // @synthesize xd_dataSource=_xd_dataSource;
- (void)xd_moveCell;
- (void)xd_cancelInteractiveMovement;
- (void)xd_endInteractiveMovement;
- (void)xd_updateInteractiveMovementTargetPosition:(struct CGPoint)arg1 gesture:(id)arg2;
- (_Bool)xd_beginInteractiveMovementForItemAtIndexPath:(id)arg1 gestureLocation:(struct CGPoint)arg2;
- (_Bool)checkCanMoveItemAtIndexPath:(id)arg1;

@end

