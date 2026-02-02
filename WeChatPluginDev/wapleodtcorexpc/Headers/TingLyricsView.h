//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicLiveLyricDisplayView, MMMusicLyricResolver, NSString;

@interface TingLyricsView
{
    NSString *_lyricsId;
    MMMusicLyricResolver *_resolver;
    MMMusicLiveLyricDisplayView *_lyricsDisplayView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicLiveLyricDisplayView *lyricsDisplayView; // @synthesize lyricsDisplayView=_lyricsDisplayView;
@property(retain, nonatomic) MMMusicLyricResolver *resolver; // @synthesize resolver=_resolver;
@property(copy, nonatomic) NSString *lyricsId; // @synthesize lyricsId=_lyricsId;
- (_Bool)isValid;
- (void)updateWithCurrentTime:(double)arg1 animated:(_Bool)arg2;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
- (void)updateLyricsWithCurrentTime:(double)arg1 animated:(_Bool)arg2;
- (void)updateLyricsId:(id)arg1;
- (void)setIsSeeking:(_Bool)arg1;
- (void)setLyricNumberOfLines:(int)arg1;
- (void)setLyricColor:(id)arg1;
- (void)setLyricFont:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

