//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, WCFinderAccoutItem, WCFinderAuthInfoIconView, WCFinderHeadImageView;

@interface WCFinderProfileRecommendFollowCell : UICollectionViewCell
{
    WCFinderAccoutItem *_item;
    WCFinderHeadImageView *_avatarView;
    UILabel *_titleLabel;
    UILabel *_authViewLabel;
    WCFinderAuthInfoIconView *_authIconView;
    UILabel *_descLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *authViewLabel; // @synthesize authViewLabel=_authViewLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) WCFinderAccoutItem *item; // @synthesize item=_item;
- (id)displayAuthInfoText:(id)arg1;
- (void)layoutSubviews;
- (void)_doLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

