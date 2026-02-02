//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageMusicLyricsWidgetTool, WCTimeLineEditImageScrollView;

@interface WCTimeLineEditImageView
{
    EditImageMusicLyricsWidgetTool *_musicLyricsWidget;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EditImageMusicLyricsWidgetTool *musicLyricsWidget; // @synthesize musicLyricsWidget=_musicLyricsWidget;
- (_Bool)isTextToolType:(int)arg1;
- (void)useImageTool:(int)arg1;
- (_Bool)checkWhetherEdited;
- (void)seekMusicLyricsToRelativeTimeSec:(double)arg1;
- (void)updateMusicLyricsCropTime:(CDStruct_e83c9415)arg1;
- (void)updateMusicLyrics:(id)arg1 totalTime:(double)arg2;
- (void)setMusicLyricWidgetAlpha:(double)arg1;
- (_Bool)recoverLyricsWidget;
- (void)setMusicLyricIsOn:(_Bool)arg1;

// Remaining properties
@property(nonatomic) __weak WCTimeLineEditImageScrollView *_delegate;

@end

