//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCFinderEditVideoBasicLayoutView
{
    NSMutableArray *_currentMusicLyrics;
    double _currentLyricTotalTime;
}

- (void).cxx_destruct;
@property(nonatomic) double currentLyricTotalTime; // @synthesize currentLyricTotalTime=_currentLyricTotalTime;
@property(retain, nonatomic) NSMutableArray *currentMusicLyrics; // @synthesize currentMusicLyrics=_currentMusicLyrics;
- (void)bgmSelectedViewController:(id)arg1 didClickLyricOnBtn:(_Bool)arg2;
- (void)bgmSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(_Bool)arg5;
- (_Bool)shouldShowNewBGMPanel;
- (id)getMusicLogoName;
- (unsigned long long)setBGMViewButtonOption;
- (id)customBottomButtonOrder;
- (void)setPlayerTimeControlStatusChangeBlock;
- (void)EditVideoBGMViewLyricUpdate:(id)arg1 totalTime:(double)arg2;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)onEditSuccess:(_Bool)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)EditVideoBGMViewLyricOnOffStateChange:(_Bool)arg1;
- (void)initEditImageView;

@end

