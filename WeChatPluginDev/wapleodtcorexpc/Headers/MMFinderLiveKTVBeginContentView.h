//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveKTVSingingPrepareLogic, MMUILabel, NSString;

@interface MMFinderLiveKTVBeginContentView
{
    CDUnknownBlockType _requestSingerHeaderUIDescCallback;
    NSString *_currUniqueId;
    unsigned long long _contentMode;
    MMUILabel *_tipLabel;
    MMUILabel *_songNameLabel;
    MMUILabel *_descLabel;
    MMFinderLiveKTVSingingPrepareLogic *_currPrepareLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveKTVSingingPrepareLogic *currPrepareLogic; // @synthesize currPrepareLogic=_currPrepareLogic;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) MMUILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) unsigned long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) NSString *currUniqueId; // @synthesize currUniqueId=_currUniqueId;
@property(copy, nonatomic) CDUnknownBlockType requestSingerHeaderUIDescCallback; // @synthesize requestSingerHeaderUIDescCallback=_requestSingerHeaderUIDescCallback;
- (void)clearStates;
- (void)onCurrSongNameUpdated;
- (void)advanceDisplay;
- (void)onCurrSongItemBasicInfoUpdated;
- (void)begin;
- (void)prepareToSing;
- (void)refreshSongNameLabel;
- (_Bool)updateCurrUnique;
- (struct CGRect)getSingerHeaderRect;
- (void)layoutDescLabel;
- (void)updateSongNameLabelOrigin;
- (void)layoutSongNameLabel;
- (void)layoutTipLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1 mode:(unsigned long long)arg2;

@end

