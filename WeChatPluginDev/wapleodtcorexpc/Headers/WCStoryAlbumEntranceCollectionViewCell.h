//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMBadgeView, MMUIButton, UIImageView, UILabel;
@protocol WCStoryAlbumEntranceCollectionViewCellDelegate;

@interface WCStoryAlbumEntranceCollectionViewCell : UICollectionViewCell
{
    _Bool _showsBadge;
    id <WCStoryAlbumEntranceCollectionViewCellDelegate> _delegate;
    MMUIButton *_containerButton;
    UILabel *_titleLabel;
    MMBadgeView *_badgeView;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *containerButton; // @synthesize containerButton=_containerButton;
@property(nonatomic) __weak id <WCStoryAlbumEntranceCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsBadge; // @synthesize showsBadge=_showsBadge;
- (void)onClickAction;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

