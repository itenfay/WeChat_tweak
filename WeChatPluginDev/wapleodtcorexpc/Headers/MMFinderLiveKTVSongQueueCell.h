//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class WCFinderHeadImageView;

@interface MMFinderLiveKTVSongQueueCell : UICollectionViewCell
{
    WCFinderHeadImageView *_avatarImageView;
}

+ (struct CGSize)cellSize;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithLiveContact:(id)arg1;

@end

