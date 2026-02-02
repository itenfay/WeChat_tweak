//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMHeadImageView, UILabel;

@interface MMFinderLiveCommentAssistantCollectionViewCell : UICollectionViewCell
{
    _Bool _circleHeader;
    MMHeadImageView *_headerImageView;
    UILabel *_nameLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool circleHeader; // @synthesize circleHeader=_circleHeader;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMHeadImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
- (void)initUI;
- (void)layoutSubviews;
- (void)resetHeaderImageView;
- (void)switchToAddStyle;
- (void)switchToDeleteStyle;
- (void)configWithContact:(id)arg1;

@end

