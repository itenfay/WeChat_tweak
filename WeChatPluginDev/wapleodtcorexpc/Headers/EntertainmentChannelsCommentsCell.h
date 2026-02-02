//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView, WCFinderHeadImageView;

@interface EntertainmentChannelsCommentsCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_nameLabel;
    WCFinderHeadImageView *_avatorImageView;
    UIView *_avatorImageBorderView;
}

+ (struct CGSize)sizeWithComment:(id)arg1 maxWidth:(double)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *avatorImageBorderView; // @synthesize avatorImageBorderView=_avatorImageBorderView;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (void)updateWithBullet:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

