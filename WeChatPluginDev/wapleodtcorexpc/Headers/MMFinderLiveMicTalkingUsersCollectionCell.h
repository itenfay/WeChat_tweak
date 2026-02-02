//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveConnectMicUser, PAGView, UIImageView, UILabel, UIView;

@interface MMFinderLiveMicTalkingUsersCollectionCell : UICollectionViewCell
{
    _Bool _isSmallMode;
    MMFinderLiveConnectMicUser *_micUser;
    UIView *_infoContainerView;
    UILabel *_titleLabel;
    UIImageView *_audioIconView;
    PAGView *_volumeAnimationView;
}

+ (double)cellLabelTextFontSize:(_Bool)arg1;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *volumeAnimationView; // @synthesize volumeAnimationView=_volumeAnimationView;
@property(retain, nonatomic) UIImageView *audioIconView; // @synthesize audioIconView=_audioIconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *infoContainerView; // @synthesize infoContainerView=_infoContainerView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *micUser; // @synthesize micUser=_micUser;
@property(nonatomic) _Bool isSmallMode; // @synthesize isSmallMode=_isSmallMode;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

