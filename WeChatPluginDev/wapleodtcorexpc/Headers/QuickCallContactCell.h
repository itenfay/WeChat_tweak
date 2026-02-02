//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CContact, MMHeadImageView, MMUILabel;

@interface QuickCallContactCell : UICollectionViewCell
{
    CContact *_contact;
    MMHeadImageView *_headImageView;
    MMUILabel *_nameLabel;
}

+ (struct CGSize)cellSize;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

