//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMBadgeView, UIImageView;

@interface WCFinderNearbyLiveAnchorsPeopleCell : UICollectionViewCell
{
    MMBadgeView *_redDotView;
    UIImageView *_footImage;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *footImage; // @synthesize footImage=_footImage;
@property(retain, nonatomic) MMBadgeView *redDotView; // @synthesize redDotView=_redDotView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

