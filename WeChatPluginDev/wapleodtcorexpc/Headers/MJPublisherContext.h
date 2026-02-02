//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderVideoTemplateInfo, MJMovieComposingDraftManager, MMBGMSelectedMusicResult, NSArray, NSData, NSDate, NSString, RecommendedMusicInfo;

@interface MJPublisherContext : NSObject
{
    _Bool _selectedTemplateIsFavorite;
    _Bool _isFrontFacingCamera;
    _Bool _isDuetShoot;
    _Bool _isAssetGenerate;
    _Bool _isFromMovieTemplate;
    _Bool _didEnteredTemplateOrMovieInOnceComposingSession;
    _Bool _didEnteredShootPreviewInOnceComposingSession;
    _Bool _isUsingTemplateComposing;
    NSString *_finderUserName;
    MMBGMSelectedMusicResult *_appliedMusicInfo;
    unsigned long long _enterScene;
    NSString *_entryType;
    NSString *_sessionId;
    NSString *_sourceFeedId;
    NSString *_sourceSongId;
    NSString *_followFeedTemplateId;
    NSString *_selectedTemplateId;
    NSString *_selectedTemplateTabId;
    unsigned long long _selectedTemplatePosition;
    NSData *_selectedTemplateSessionBuffer;
    unsigned long long _selectedTemplateType;
    NSString *_defaultSelectedTemplateId;
    unsigned long long _exportScene;
    unsigned long long _videoSource;
    unsigned long long _creationPageId;
    MJMovieComposingDraftManager *_draftManager;
    FinderVideoTemplateInfo *_shootFollowTemplateInfo;
    RecommendedMusicInfo *_patMusicInfo;
    NSArray *_wxToMaasMusicIds;
    NSDate *_startPreviewingTimestamp;
    NSDate *_startRecordingTimestamp;
}

+ (_Bool)shouldEnablePurePicturePostWithAssetInfos:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *startRecordingTimestamp; // @synthesize startRecordingTimestamp=_startRecordingTimestamp;
@property(retain, nonatomic) NSDate *startPreviewingTimestamp; // @synthesize startPreviewingTimestamp=_startPreviewingTimestamp;
@property(retain, nonatomic) NSArray *wxToMaasMusicIds; // @synthesize wxToMaasMusicIds=_wxToMaasMusicIds;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(retain, nonatomic) FinderVideoTemplateInfo *shootFollowTemplateInfo; // @synthesize shootFollowTemplateInfo=_shootFollowTemplateInfo;
@property(retain, nonatomic) MJMovieComposingDraftManager *draftManager; // @synthesize draftManager=_draftManager;
@property(nonatomic) _Bool isUsingTemplateComposing; // @synthesize isUsingTemplateComposing=_isUsingTemplateComposing;
@property(nonatomic) _Bool didEnteredShootPreviewInOnceComposingSession; // @synthesize didEnteredShootPreviewInOnceComposingSession=_didEnteredShootPreviewInOnceComposingSession;
@property(nonatomic) _Bool didEnteredTemplateOrMovieInOnceComposingSession; // @synthesize didEnteredTemplateOrMovieInOnceComposingSession=_didEnteredTemplateOrMovieInOnceComposingSession;
@property(nonatomic) _Bool isFromMovieTemplate; // @synthesize isFromMovieTemplate=_isFromMovieTemplate;
@property(nonatomic) unsigned long long creationPageId; // @synthesize creationPageId=_creationPageId;
@property(nonatomic) unsigned long long videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) unsigned long long exportScene; // @synthesize exportScene=_exportScene;
@property(nonatomic) _Bool isAssetGenerate; // @synthesize isAssetGenerate=_isAssetGenerate;
@property(nonatomic) _Bool isDuetShoot; // @synthesize isDuetShoot=_isDuetShoot;
@property(nonatomic) _Bool isFrontFacingCamera; // @synthesize isFrontFacingCamera=_isFrontFacingCamera;
@property(nonatomic) _Bool selectedTemplateIsFavorite; // @synthesize selectedTemplateIsFavorite=_selectedTemplateIsFavorite;
@property(retain, nonatomic) NSString *defaultSelectedTemplateId; // @synthesize defaultSelectedTemplateId=_defaultSelectedTemplateId;
@property(nonatomic) unsigned long long selectedTemplateType; // @synthesize selectedTemplateType=_selectedTemplateType;
@property(retain, nonatomic) NSData *selectedTemplateSessionBuffer; // @synthesize selectedTemplateSessionBuffer=_selectedTemplateSessionBuffer;
@property(nonatomic) unsigned long long selectedTemplatePosition; // @synthesize selectedTemplatePosition=_selectedTemplatePosition;
@property(retain, nonatomic) NSString *selectedTemplateTabId; // @synthesize selectedTemplateTabId=_selectedTemplateTabId;
@property(retain, nonatomic) NSString *selectedTemplateId; // @synthesize selectedTemplateId=_selectedTemplateId;
@property(retain, nonatomic) NSString *followFeedTemplateId; // @synthesize followFeedTemplateId=_followFeedTemplateId;
@property(retain, nonatomic) NSString *sourceSongId; // @synthesize sourceSongId=_sourceSongId;
@property(retain, nonatomic) NSString *sourceFeedId; // @synthesize sourceFeedId=_sourceFeedId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *entryType; // @synthesize entryType=_entryType;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) MMBGMSelectedMusicResult *appliedMusicInfo; // @synthesize appliedMusicInfo=_appliedMusicInfo;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
- (void)generatePostSessionModelIfIsMJProducedVideoWithMMAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkIsMJProducedVideoWithComposingVC:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isRedPacketEntry;
- (id)getComposingEffectivePatMusicInfoWithMusicInfo:(id)arg1 wxToMaasMusicIds:(id)arg2 musicResult:(id)arg3;
- (void)resetReportingInfo;
- (id)generateReportingParams;

@end

