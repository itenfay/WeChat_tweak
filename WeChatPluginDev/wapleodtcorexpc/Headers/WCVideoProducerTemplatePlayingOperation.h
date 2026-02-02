//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJVideoTemplate, NSMutableArray, OrderedDictionary, WCVideoProducerEditSegmentOperation, WCVideoProducerMusicPlayingOperation, WCVideoProducerMusicSearchingOperation;

@interface WCVideoProducerTemplatePlayingOperation
{
    _Bool _isBGMEnabled;
    _Bool _isOSTEnabled;
    _Bool _isLaunchMJAppClicked;
    _Bool _isLaunchMJAppSuccessfully;
    MJVideoTemplate *_mjVideoTemplate;
    long long _templateOrder;
    long long _launchMJAppRegularChoice;
    NSMutableArray *_musicPlayingOperationList;
    NSMutableArray *_musicSearchingOperationList;
    NSMutableArray *_editSegmentOperationList;
    unsigned long long _fetchExtRecommendMusicRequestID;
    WCVideoProducerMusicPlayingOperation *_currentMusicPlayingOperation;
    WCVideoProducerMusicSearchingOperation *_currentMusicSearchingOperation;
    WCVideoProducerEditSegmentOperation *_currentEditSegmentOperation;
    OrderedDictionary *_showedMusicListMap;
    CDStruct_1b6d18a9 _videoDuration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *showedMusicListMap; // @synthesize showedMusicListMap=_showedMusicListMap;
@property(retain, nonatomic) WCVideoProducerEditSegmentOperation *currentEditSegmentOperation; // @synthesize currentEditSegmentOperation=_currentEditSegmentOperation;
@property(retain, nonatomic) WCVideoProducerMusicSearchingOperation *currentMusicSearchingOperation; // @synthesize currentMusicSearchingOperation=_currentMusicSearchingOperation;
@property(retain, nonatomic) WCVideoProducerMusicPlayingOperation *currentMusicPlayingOperation; // @synthesize currentMusicPlayingOperation=_currentMusicPlayingOperation;
@property(nonatomic) unsigned long long fetchExtRecommendMusicRequestID; // @synthesize fetchExtRecommendMusicRequestID=_fetchExtRecommendMusicRequestID;
@property(retain, nonatomic) NSMutableArray *editSegmentOperationList; // @synthesize editSegmentOperationList=_editSegmentOperationList;
@property(retain, nonatomic) NSMutableArray *musicSearchingOperationList; // @synthesize musicSearchingOperationList=_musicSearchingOperationList;
@property(retain, nonatomic) NSMutableArray *musicPlayingOperationList; // @synthesize musicPlayingOperationList=_musicPlayingOperationList;
@property(nonatomic) _Bool isLaunchMJAppSuccessfully; // @synthesize isLaunchMJAppSuccessfully=_isLaunchMJAppSuccessfully;
@property(nonatomic) _Bool isLaunchMJAppClicked; // @synthesize isLaunchMJAppClicked=_isLaunchMJAppClicked;
@property(nonatomic) long long launchMJAppRegularChoice; // @synthesize launchMJAppRegularChoice=_launchMJAppRegularChoice;
@property(nonatomic) _Bool isOSTEnabled; // @synthesize isOSTEnabled=_isOSTEnabled;
@property(nonatomic) _Bool isBGMEnabled; // @synthesize isBGMEnabled=_isBGMEnabled;
@property(nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) long long templateOrder; // @synthesize templateOrder=_templateOrder;
@property(retain, nonatomic) MJVideoTemplate *mjVideoTemplate; // @synthesize mjVideoTemplate=_mjVideoTemplate;
- (void)didLaunchMJApp;
- (void)didClickLaunchMJApp;
- (void)didCheckJumpToMJAppRegular:(long long)arg1;
- (void)didCancelEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)didFinishEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)didStopEditingSegment;
- (void)didStartEditingSegmentWithTemplat:(id)arg1;
- (void)didStopPlayingSelectedSearchResultMusic;
- (void)didStartPlayingSelectedSearchResultMusic;
- (void)didSelectSearchResultMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didShowSearchResultMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didRequestSearchingWithKey:(id)arg1;
- (void)didFinishSearchingMusic;
- (void)didStartSearchingMusic;
- (void)didFetchExtRecommendMusicWithRequestID:(unsigned long long)arg1;
- (void)didFinishPlayingSelectedMusic;
- (void)didStartPlayingSelectedMusic;
- (void)didSelectMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didShowMusic:(id)arg1 atIndex:(long long)arg2;
- (id)getAllShowedMusicList;
- (void)didUpdateDuration:(CDStruct_1b6d18a9)arg1;
- (void)didSwitchOST:(_Bool)arg1;
- (void)didSwitchBGM:(_Bool)arg1;
- (void)operationDidStop;
- (void)operationDidStart;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTemplate:(id)arg1 order:(long long)arg2;
- (id)genReportStrForMusicSearchResultSelectCount;
- (id)genReportStrForMusicSearchKey;

@end

