//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, WCFinderHeadImageView;

@interface MMFinderLiveKTVEndContentView
{
    NSString *_currUniqueId;
    WCFinderHeadImageView *_singerHeadImageView;
    MMUILabel *_endTipLabel;
    MMUILabel *_scoreCntLabel;
    MMUILabel *_levelCntLabel;
    MMUILabel *_nextSongTipLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *nextSongTipLabel; // @synthesize nextSongTipLabel=_nextSongTipLabel;
@property(retain, nonatomic) MMUILabel *levelCntLabel; // @synthesize levelCntLabel=_levelCntLabel;
@property(retain, nonatomic) MMUILabel *scoreCntLabel; // @synthesize scoreCntLabel=_scoreCntLabel;
@property(retain, nonatomic) MMUILabel *endTipLabel; // @synthesize endTipLabel=_endTipLabel;
@property(retain, nonatomic) WCFinderHeadImageView *singerHeadImageView; // @synthesize singerHeadImageView=_singerHeadImageView;
@property(retain, nonatomic) NSString *currUniqueId; // @synthesize currUniqueId=_currUniqueId;
- (void)onLiveKTVMainWidgetColorUpdate:(id)arg1 taskId:(id)arg2;
- (id)gradientColorImageForTheme:(id)arg1;
- (void)updateNextSong;
- (void)updateLevelCnt;
- (void)updateScoreCnt;
- (void)updateEndTip;
- (void)updateSingerHeaderImage;
- (void)updateDatas;
- (_Bool)updateCurrUniqueId;
- (void)clearStates;
- (void)onNextSongNameUpdated;
- (void)onCurrSongNameUpdated;
- (void)refresh;
- (void)updateNextSongTipLabelOrigin;
- (void)layoutNextSongTipLabel;
- (void)updateScoreAndLevelWidgetsOrigin;
- (void)createLevelCntLabel;
- (void)createScoreCntLabel;
- (void)layoutScoreAndLevelWidgets;
- (void)updateEndTipWidgetsOrigin;
- (void)createTipLabel;
- (void)createSingerHeadImageView;
- (void)layoutEndTipWidgets;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

