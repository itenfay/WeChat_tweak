//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMHeadImageView, MMUIButton, MMUILabel, NSMutableArray, UIImageView, WCStoryTimelineCellModel;

@interface WCStoryFriendsCollectionViewCell : UICollectionViewCell
{
    WCStoryTimelineCellModel *_friendsCollectionViewCellModel;
    MMHeadImageView *_headerImageView;
    MMUILabel *_usernameLabel;
    UIImageView *_favourImageView;
    MMUIButton *_unreadCountButton;
    NSMutableArray *_storyHeadImageViewArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *storyHeadImageViewArray; // @synthesize storyHeadImageViewArray=_storyHeadImageViewArray;
@property(retain, nonatomic) MMUIButton *unreadCountButton; // @synthesize unreadCountButton=_unreadCountButton;
@property(retain, nonatomic) UIImageView *favourImageView; // @synthesize favourImageView=_favourImageView;
@property(retain, nonatomic) MMUILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) MMHeadImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) WCStoryTimelineCellModel *friendsCollectionViewCellModel; // @synthesize friendsCollectionViewCellModel=_friendsCollectionViewCellModel;
- (id)createUnreadStoryHeadImageView;
- (void)updateUnreadStoryHeadImageView:(id)arg1;
- (void)prepareForReuse;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

