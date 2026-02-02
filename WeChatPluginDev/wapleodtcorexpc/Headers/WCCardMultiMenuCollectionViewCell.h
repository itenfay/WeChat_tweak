//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, NSMutableArray, NSString, UIColor, UIGestureRecognizer, UIImageView, UIView;

@interface WCCardMultiMenuCollectionViewCell : UICollectionViewCell
{
    UIView *_menuContentView;
    UIView *_actualContentView;
    UIGestureRecognizer *_panGestureRecognizer;
    double _initialTouchPositionX;
    _Bool _shouldDisplayContextMenuView;
    _Bool _contextMenuHidden;
    _Bool _shouldDisplayRightSwipeTips;
    UIImageView *_copyedBackgroundView;
    _Bool _bIsNeedUpdateMenu;
    _Bool _contextMenuEnabled;
    NSIndexPath *_indexPath;
    NSMutableArray *_arrMenuItems;
    UIColor *_menuBackgroundColor;
    CDUnknownBlockType _editAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType editAction; // @synthesize editAction=_editAction;
@property(retain, nonatomic) UIColor *menuBackgroundColor; // @synthesize menuBackgroundColor=_menuBackgroundColor;
@property(nonatomic) _Bool contextMenuEnabled; // @synthesize contextMenuEnabled=_contextMenuEnabled;
@property(retain, nonatomic) NSMutableArray *arrMenuItems; // @synthesize arrMenuItems=_arrMenuItems;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)getCurrentWidth;
- (void)showRightSwipeTips;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)animation;
- (void)resetActionContentView;
- (void)setMenuOptionsViewHidden:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)onClearBackgroundView;
- (id)contentView;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)prepareForReuse;
- (void)updateMenuView;
- (void)onDeleteButtonClicked:(id)arg1;
- (void)onGiftButtonClicked:(id)arg1;
- (void)handlePan:(id)arg1;
- (_Bool)isMenuHidden;
- (_Bool)isPointInMenu:(struct CGPoint)arg1;
- (void)hideMenuOptionsAnimated:(_Bool)arg1;
- (void)forceHideMenuOptionsAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

