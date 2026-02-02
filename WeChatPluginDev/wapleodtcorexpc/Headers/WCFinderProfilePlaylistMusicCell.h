//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class TingPlayStatusView, UIImageView, UILabel, UIView;

@interface WCFinderProfilePlaylistMusicCell : UICollectionViewCell
{
    double _horizontalPadding;
    UIImageView *_coverView;
    UILabel *_titleLabel;
    UILabel *_summaryLabel;
    UILabel *_durationLabel;
    UIView *_bottomLine;
    TingPlayStatusView *_statusView;
    UIImageView *_playInfoIconView;
    UILabel *_playInfoLabel;
}

+ (struct CGSize)sizeThatFit:(struct CGSize)arg1 style:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *playInfoLabel; // @synthesize playInfoLabel=_playInfoLabel;
@property(retain, nonatomic) UIImageView *playInfoIconView; // @synthesize playInfoIconView=_playInfoIconView;
@property(retain, nonatomic) TingPlayStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
- (void)useMusicStyle:(id)arg1 isPlaying:(_Bool)arg2 isLast:(_Bool)arg3 isAuthor:(_Bool)arg4;
- (void)useMusicStyle:(id)arg1 isPlaying:(_Bool)arg2 isAuthor:(_Bool)arg3;
- (void)useAllStyle;
@property(nonatomic) _Bool hiddenBottomLine;
- (id)initWithFrame:(struct CGRect)arg1;

@end

