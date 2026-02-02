//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;
@protocol FavMultiMenuTableViewCellDelegate;

@interface FavMultiMenuTableViewCell
{
    UIView *coverView;
    _Bool m_selected;
    _Bool _disableGesture;
    UIView *_m_bkgCardView;
    id <FavMultiMenuTableViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableGesture; // @synthesize disableGesture=_disableGesture;
@property(nonatomic) __weak id <FavMultiMenuTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *m_bkgCardView; // @synthesize m_bkgCardView=_m_bkgCardView;
- (void)editTagAction:(id)arg1;
- (void)moreAction:(id)arg1;
- (void)showContentAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)forwardAction:(id)arg1;
- (void)setMenuOptionsViewHidden:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)menuItemHidden;
- (void)showMenuItems;
- (void)tryToShowMenu;
- (id)indexPath;
- (void)setCoverView:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)handlePan:(id)arg1;

@end

