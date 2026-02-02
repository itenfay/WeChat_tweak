//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveKtvSongScoreReportRequest_ScoreInfo, MMFinderLiveKTVSongInfo, MMFinderLiveKTVSongItem, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKSKitMusicSong : NSObject
{
    _Bool _isSingBySelf;
    _Bool _isPreparing;
    _Bool _isResourceLoading;
    _Bool _isResourceParsing;
    int _midiTotalScore;
    MMFinderLiveKTVSongInfo *_songInfo;
    NSString *_midiScoreLevel;
    MMFinderLiveKTVSongItem *_songItem;
    FinderLiveKtvSongScoreReportRequest_ScoreInfo *_finalScoreInfo;
    id <MMLiveUniqueTaskId> _taskId;
    unsigned long long _mode;
    CDUnknownBlockType _resLoadCompletion;
    NSArray *_sentenceList;
    NSArray *_sentenceTimeList;
    NSData *_noteData;
    NSMutableDictionary *_resourceDict;
    NSMutableDictionary *_resourceParseTaskDict;
    NSMutableArray *_musicNoteList;
}

+ (int)perfectScoreStandard;
+ (int)goodScoreStandard;
+ (id)transferAverScoreToLevel:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *musicNoteList; // @synthesize musicNoteList=_musicNoteList;
@property(retain, nonatomic) NSMutableDictionary *resourceParseTaskDict; // @synthesize resourceParseTaskDict=_resourceParseTaskDict;
@property(retain, nonatomic) NSMutableDictionary *resourceDict; // @synthesize resourceDict=_resourceDict;
@property(retain, nonatomic) NSData *noteData; // @synthesize noteData=_noteData;
@property(retain, nonatomic) NSArray *sentenceTimeList; // @synthesize sentenceTimeList=_sentenceTimeList;
@property(retain, nonatomic) NSArray *sentenceList; // @synthesize sentenceList=_sentenceList;
@property(nonatomic) _Bool isResourceParsing; // @synthesize isResourceParsing=_isResourceParsing;
@property(nonatomic) _Bool isResourceLoading; // @synthesize isResourceLoading=_isResourceLoading;
@property(nonatomic) _Bool isPreparing; // @synthesize isPreparing=_isPreparing;
@property(copy, nonatomic) CDUnknownBlockType resLoadCompletion; // @synthesize resLoadCompletion=_resLoadCompletion;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isSingBySelf; // @synthesize isSingBySelf=_isSingBySelf;
@property(retain, nonatomic) FinderLiveKtvSongScoreReportRequest_ScoreInfo *finalScoreInfo; // @synthesize finalScoreInfo=_finalScoreInfo;
@property(retain, nonatomic) MMFinderLiveKTVSongItem *songItem; // @synthesize songItem=_songItem;
@property(retain, nonatomic) NSString *midiScoreLevel; // @synthesize midiScoreLevel=_midiScoreLevel;
@property(nonatomic) int midiTotalScore; // @synthesize midiTotalScore=_midiTotalScore;
@property(retain, nonatomic) MMFinderLiveKTVSongInfo *songInfo; // @synthesize songInfo=_songInfo;
@property(readonly, copy) NSString *description;
- (id)baseResourceDir;
@property(readonly, nonatomic) NSString *uniqueId;
@property(readonly, nonatomic) NSString *songId;
- (void)checkResourcesParsingFinishWithPinToken:(id)arg1;
- (void)updateResParseResult:(id)arg1 resType:(unsigned int)arg2;
- (void)parseResourcesIfNeed:(id)arg1 pinToken:(id)arg2;
- (void)cacheResourcesIfNeed:(id)arg1;
- (void)onLiveKTVSongResourcesLoaded:(_Bool)arg1 songId:(id)arg2 resources:(id)arg3 needSongRes:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isSingingEnd;
@property(readonly, nonatomic) _Bool needSongRes;
- (long long)getAllResourcesState;
- (_Bool)isAllResourcesPrepared;
- (void)finishResourcePreparingWithPinToken:(id)arg1;
- (void)checkResourcePreparingFinishWithPinToken:(id)arg1;
- (void)finishResourceParsingWithPinToken:(id)arg1;
- (void)startResourceParsingWithPinToken:(id)arg1;
- (void)finishResourceLoading;
- (void)startResourceLoading;
- (void)startResourcePreparing;
- (void)updateFinalScoreInfo:(id)arg1;
- (id)getMusicNoteList;
- (id)getLyricSentenceList;
- (id)getSentenceSrcArray;
- (void)processMIDIScoreLevel:(double)arg1;
- (void)processMIDITotalScore:(int)arg1;
- (void)updateMusicNotes:(id)arg1;
- (id)getNoteSrcData;
- (void)prepareResource:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithSongItem:(id)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

