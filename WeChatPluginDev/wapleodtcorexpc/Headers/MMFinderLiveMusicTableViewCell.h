//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveMusicDataItem, MMUILabel, MMUIView, MMWebImageView, PAGView, UIImageView;
@protocol MMFinderLiveMusicTableViewCellDelegate;

@interface MMFinderLiveMusicTableViewCell
{
    MMFinderLiveMusicDataItem *_musicDataItem;
    id <MMFinderLiveMusicTableViewCellDelegate> _musicTableCellDelegate;
    MMWebImageView *_coverImageView;
    MMUILabel *_musicNameLabel;
    MMUILabel *_musicAnchorLabel;
    MMUILabel *_durationLabel;
    PAGView *_playingAnimatedView;
    MMUIView *_playingAnimatedBgView;
    UIImageView *_playingStateImg;
}

+ (id)identifier;
+ (double)preferLabelLeft;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *playingStateImg; // @synthesize playingStateImg=_playingStateImg;
@property(retain, nonatomic) MMUIView *playingAnimatedBgView; // @synthesize playingAnimatedBgView=_playingAnimatedBgView;
@property(retain, nonatomic) PAGView *playingAnimatedView; // @synthesize playingAnimatedView=_playingAnimatedView;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) MMUILabel *musicAnchorLabel; // @synthesize musicAnchorLabel=_musicAnchorLabel;
@property(retain, nonatomic) MMUILabel *musicNameLabel; // @synthesize musicNameLabel=_musicNameLabel;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak id <MMFinderLiveMusicTableViewCellDelegate> musicTableCellDelegate; // @synthesize musicTableCellDelegate=_musicTableCellDelegate;
@property(retain, nonatomic) MMFinderLiveMusicDataItem *musicDataItem; // @synthesize musicDataItem=_musicDataItem;
- (void)customReorderImage:(id)arg1;
- (double)selectedButtonLeftMargin;
- (double)adjustedLeftOffsetForEditing;
- (void)updatePlayingStateImg;
- (void)createPlayingAnimatedView;
- (void)pausePlayingAnimatedView;
- (void)stopPlayingAnimatedView;
- (void)playPlayingAnimatedView;
- (void)updatePlayingAnimatedViewState;
- (void)refreshContents;
- (void)onTapGesture:(id)arg1;
- (void)refreshUI;
- (void)layoutPlayingStateImg;
- (void)layoutPlayingIconView;
- (void)layoutDurationLabel;
- (void)layoutMusicAnchorLabel;
- (void)layoutMusicNameLabel;
- (void)layoutCoverImageView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

