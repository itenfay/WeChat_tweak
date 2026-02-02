//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, WCFinderAuthInfoIconView, WCFinderHeadImageView;

@interface WCFinderMusicianCardCollectionViewCell : UICollectionViewCell
{
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    UILabel *_descLabel;
    WCFinderAuthInfoIconView *_authIconView;
}

+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)adjustAllSubviews;
- (void)updateWithSingerInfo:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

