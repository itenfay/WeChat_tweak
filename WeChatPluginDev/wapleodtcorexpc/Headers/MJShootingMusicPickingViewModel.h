//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditVideoMusicController, MJCameraMusicTabViewModel, MJPublisherContext, MMBGMSelectedConfig, NSArray, NSMutableArray, NSMutableDictionary, NSString, OMJMusicInfo, RecommendedMusicInfo;
@protocol MJShootingMusicPickingViewModelDelegate;

@interface MJShootingMusicPickingViewModel : NSObject
{
    _Bool _isOSTSelected;
    _Bool _isBGMSelected;
    _Bool _isManualSettingMusicOn;
    _Bool _isFirstShow;
    _Bool _shouldBlockSelectCallback;
    _Bool _shouldOpenMusicPanelForFavMusicEntry;
    _Bool _didSelectedMusicTriggeredByMusicPanelFirstShowing;
    id <MJShootingMusicPickingViewModelDelegate> _delegate;
    NSMutableArray *_bgmPanelTabModels;
    MMBGMSelectedConfig *_bgmPanelConfig;
    NSArray *_templateMusics;
    OMJMusicInfo *_currentMusicInfo;
    unsigned long long _tabIndex;
    unsigned long long _index;
    unsigned long long _currentMusicSource;
    OMJMusicInfo *_followMusicInfo;
    NSMutableArray *_wxToMaasMusicIds;
    RecommendedMusicInfo *_patMusicInfo;
    MJPublisherContext *_publisherContext;
    NSMutableDictionary *_musicDataByID;
    MJCameraMusicTabViewModel *_camMusicVM;
    NSString *_templateId;
    NSString *_templateMusicId;
    OMJMusicInfo *_templateMusicInfo;
    EditVideoMusicController *_musicController;
}

+ (int)bgmTypeWithMusicID:(id)arg1;
+ (unsigned long long)bgmIDWithMusicID:(id)arg1;
+ (id)lyricInfosWithResp:(id)arg1 musicDuration:(CDStruct_1b6d18a9)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) EditVideoMusicController *musicController; // @synthesize musicController=_musicController;
@property(retain, nonatomic) OMJMusicInfo *templateMusicInfo; // @synthesize templateMusicInfo=_templateMusicInfo;
@property(retain, nonatomic) NSString *templateMusicId; // @synthesize templateMusicId=_templateMusicId;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) MJCameraMusicTabViewModel *camMusicVM; // @synthesize camMusicVM=_camMusicVM;
@property(readonly, nonatomic) NSMutableDictionary *musicDataByID; // @synthesize musicDataByID=_musicDataByID;
@property(nonatomic) _Bool didSelectedMusicTriggeredByMusicPanelFirstShowing; // @synthesize didSelectedMusicTriggeredByMusicPanelFirstShowing=_didSelectedMusicTriggeredByMusicPanelFirstShowing;
@property(nonatomic) _Bool shouldOpenMusicPanelForFavMusicEntry; // @synthesize shouldOpenMusicPanelForFavMusicEntry=_shouldOpenMusicPanelForFavMusicEntry;
@property(nonatomic) _Bool shouldBlockSelectCallback; // @synthesize shouldBlockSelectCallback=_shouldBlockSelectCallback;
@property(nonatomic) _Bool isFirstShow; // @synthesize isFirstShow=_isFirstShow;
@property(nonatomic) _Bool isManualSettingMusicOn; // @synthesize isManualSettingMusicOn=_isManualSettingMusicOn;
@property(nonatomic) _Bool isBGMSelected; // @synthesize isBGMSelected=_isBGMSelected;
@property(nonatomic) _Bool isOSTSelected; // @synthesize isOSTSelected=_isOSTSelected;
@property(retain, nonatomic) MJPublisherContext *publisherContext; // @synthesize publisherContext=_publisherContext;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(retain, nonatomic) NSMutableArray *wxToMaasMusicIds; // @synthesize wxToMaasMusicIds=_wxToMaasMusicIds;
@property(retain, nonatomic) OMJMusicInfo *followMusicInfo; // @synthesize followMusicInfo=_followMusicInfo;
@property(readonly, nonatomic) unsigned long long currentMusicSource; // @synthesize currentMusicSource=_currentMusicSource;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) unsigned long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(readonly, nonatomic) OMJMusicInfo *currentMusicInfo; // @synthesize currentMusicInfo=_currentMusicInfo;
@property(readonly, nonatomic) NSArray *templateMusics; // @synthesize templateMusics=_templateMusics;
@property(readonly, nonatomic) MMBGMSelectedConfig *bgmPanelConfig; // @synthesize bgmPanelConfig=_bgmPanelConfig;
@property(readonly, nonatomic) NSMutableArray *bgmPanelTabModels; // @synthesize bgmPanelTabModels=_bgmPanelTabModels;
@property(nonatomic) __weak id <MJShootingMusicPickingViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestLyricForCurrentMusicInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)bgmSelectedFavFeedSoundTabViewModel:(id)arg1 didFetchMusicDatas:(id)arg2;
- (void)cameraMusicTabViewModelDidFetchRecommendedMusic:(id)arg1;
- (id)MJCameraMusicTabViewModelGetMusicInfo:(id)arg1;
- (void)downloadMusic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_insertSelectMusicToFirst:(id)arg1 selectedMusic:(id)arg2;
- (id)overrideMusicInfoWithPatInfoIfNeeded:(id)arg1;
- (_Bool)_isForceUsedMusic:(id)arg1;
- (void)updateCurrentMusic:(id)arg1 source:(unsigned long long)arg2;
- (void)updateCurrentMusic:(id)arg1 atTabIndex:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (void)updateTemplateMusic:(id)arg1 selectedMusic:(id)arg2;
- (id)genMusicInfoAfterClearTemplate;
- (void)fillMusicParamsTo:(id)arg1 withTemplateId:(id)arg2;
- (void)configForceUsedMusicsWithTemplateInfo:(id)arg1 wxToMaasMusicIds:(id)arg2 patMusicInfo:(id)arg3;
- (void)replayMusic;
- (void)pauseMusic;
- (void)loadAndPlayMusic:(id)arg1;
- (long long)favMusicTabIndex;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

