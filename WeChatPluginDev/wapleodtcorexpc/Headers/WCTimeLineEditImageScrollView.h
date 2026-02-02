//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCTimeLineEditImageOperationDelegate;

@interface WCTimeLineEditImageScrollView
{
}

- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)setMusicLyricWidgetAlpha:(double)arg1;
- (void)setMusicLyricIsOn:(_Bool)arg1;
- (void)seekMusicLyricsToRelativeTimeSec:(double)arg1;
- (void)updateMusicLyricsCropTime:(CDStruct_e83c9415)arg1;
- (void)updateMusicLyrics:(id)arg1 totalTime:(double)arg2;
- (_Bool)recoverLyricsWidget;
- (id)getEditImageView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <WCTimeLineEditImageOperationDelegate> m_delegate;
@property(readonly) Class superclass;

@end

