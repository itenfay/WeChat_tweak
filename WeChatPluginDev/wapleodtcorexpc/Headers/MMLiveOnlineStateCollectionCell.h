//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMCPLabel, MMHeadImageView, MMLiveUserStateItem, UIImageView, UIView;
@protocol MMLiveOnlineStateCollectionCellDelegate;

@interface MMLiveOnlineStateCollectionCell : UICollectionViewCell
{
    id <MMLiveOnlineStateCollectionCellDelegate> _cellDelegate;
    MMHeadImageView *_headImageView;
    MMCPLabel *_displayNameLabel;
    MMLiveUserStateItem *_onlineUserItem;
    UIImageView *_banCommentIconImageView;
    UIView *_selectedView;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UIImageView *banCommentIconImageView; // @synthesize banCommentIconImageView=_banCommentIconImageView;
@property(retain, nonatomic) MMLiveUserStateItem *onlineUserItem; // @synthesize onlineUserItem=_onlineUserItem;
@property(retain, nonatomic) MMCPLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <MMLiveOnlineStateCollectionCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)onHeadImageClicked:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithOnlineUserItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

