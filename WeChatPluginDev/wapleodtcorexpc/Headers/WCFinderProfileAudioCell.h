//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMListenItem, MMUIButton, NSURL, UIImageView, UILabel, UIView, WCFinderAnimationLoadingView, WCFinderStreamProfileHeadData;

@interface WCFinderProfileAudioCell : UICollectionViewCell
{
    _Bool _fullBottomLine;
    _Bool _fromAudioPage;
    int _audioStatus;
    WCFinderStreamProfileHeadData *_profileHeadData;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    NSURL *_coverUrl;
    UIView *_line;
    UILabel *_statusLabel;
    UIImageView *_failIcon;
    MMUIButton *_starBtn;
    UIImageView *_playNumIconView;
    UILabel *_playNumLabel;
    WCFinderAnimationLoadingView *_loadingView;
}

+ (double)displayHeight;
- (void).cxx_destruct;
@property(nonatomic) int audioStatus; // @synthesize audioStatus=_audioStatus;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *playNumLabel; // @synthesize playNumLabel=_playNumLabel;
@property(retain, nonatomic) UIImageView *playNumIconView; // @synthesize playNumIconView=_playNumIconView;
@property(retain, nonatomic) MMUIButton *starBtn; // @synthesize starBtn=_starBtn;
@property(retain, nonatomic) UIImageView *failIcon; // @synthesize failIcon=_failIcon;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) NSURL *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool fromAudioPage; // @synthesize fromAudioPage=_fromAudioPage;
@property(nonatomic) _Bool fullBottomLine; // @synthesize fullBottomLine=_fullBottomLine;
@property(retain, nonatomic) WCFinderStreamProfileHeadData *profileHeadData; // @synthesize profileHeadData=_profileHeadData;
- (void)onClickStar:(id)arg1;
- (void)_doLayout;
- (void)layoutSubviews;
- (void)updateAudioDuration:(long long)arg1;
- (void)updateStatusLabel:(id)arg1;
- (void)updateCoverUrl:(id)arg1;
@property(retain, nonatomic) MMListenItem *dataItem;
@property(nonatomic) _Bool showBottomLine;
- (id)initWithFrame:(struct CGRect)arg1;

@end

