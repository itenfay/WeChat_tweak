//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MiniTaskCollectionCellViewModel, MiniTaskLongPressGesture, NSString, UIImageView;
@protocol MiniTaskCollectionCellDelegate;

@interface MiniTaskCollectionBaseCell : UICollectionViewCell
{
    _Bool _isEditing;
    MiniTaskCollectionCellViewModel *_viewModel;
    id <MiniTaskCollectionCellDelegate> _delegate;
    UIImageView *_snapShotView;
    UIImageView *_iconImageView;
    MiniTaskLongPressGesture *_longPressGes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniTaskLongPressGesture *longPressGes; // @synthesize longPressGes=_longPressGes;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *snapShotView; // @synthesize snapShotView=_snapShotView;
@property(nonatomic) __weak id <MiniTaskCollectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MiniTaskCollectionCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (struct CGSize)snapshotImagePreferredSize;
- (void)onMenuSelectDelete:(id)arg1;
- (void)onMenuSelectFavorite:(id)arg1;
- (void)onLongPress:(id)arg1;
- (id)defaultIconNameForBizName:(id)arg1;
- (id)menuItems;
- (struct CGRect)menuPopoverFrame;
- (void)asyncLoadSnapshot:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

