//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMCoverImageView, MMBGMSelectedMarqueeTextView, MMBGMSelectedTabTableViewCellConfig, NSString, UIImageView, UIView, WCProgressCircleView;
@protocol MMBGMSelectedMusicDataProtocol;

@interface MMBGMSelectedTabTableLyricCell
{
    _Bool _isSelected;
    _Bool _isLoading;
    MMBGMCoverImageView *_coverImageView;
    MMBGMSelectedMarqueeTextView *_songSingerMarqueeView;
    MMBGMSelectedMarqueeTextView *_lyricsMarqueeView;
    UIImageView *_checkImageView;
    WCProgressCircleView *_progressLoadingView;
    UIView *_separator;
    id <MMBGMSelectedMusicDataProtocol> _musicInfo;
    MMBGMSelectedTabTableViewCellConfig *_config;
}

+ (id)lyricsWithMusicInfo:(id)arg1;
+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBGMSelectedTabTableViewCellConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) id <MMBGMSelectedMusicDataProtocol> musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) WCProgressCircleView *progressLoadingView; // @synthesize progressLoadingView=_progressLoadingView;
@property(retain, nonatomic) UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(retain, nonatomic) MMBGMSelectedMarqueeTextView *lyricsMarqueeView; // @synthesize lyricsMarqueeView=_lyricsMarqueeView;
@property(retain, nonatomic) MMBGMSelectedMarqueeTextView *songSingerMarqueeView; // @synthesize songSingerMarqueeView=_songSingerMarqueeView;
@property(retain, nonatomic) MMBGMCoverImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (id)getMusicInfo;
- (id)getMusicId;
- (id)genAccessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)updateAccessibility;
- (void)videoProducerViewModel:(id)arg1 changeMusicInfo:(id)arg2 completeSuccess:(_Bool)arg3;
- (void)videoProducerViewModel:(id)arg1 changeMusicInfo:(id)arg2 progress:(double)arg3;
- (void)videoProducerViewModel:(id)arg1 changeMusicInfoWillStart:(id)arg2;
- (id)lyricsDisplayAttributedString;
- (id)songSingerDisplayAttributedStringWithQuery:(id)arg1;
- (void)layoutSubviews;
- (void)initSeparator;
- (void)initProgressLoadingView;
- (void)initCheckImageView;
- (void)initLyricsMarqueeView;
- (void)initSongSingerMarqueeView;
- (void)initCoverImageView;
- (void)initView;
- (id)musicIdForMusicData:(id)arg1;
- (id)musicId;
- (_Bool)isPlayable;
- (void)updateWithMusicData:(id)arg1 config:(id)arg2;
- (void)setIsCellSelected:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

