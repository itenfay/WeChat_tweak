//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCVideoProducerOptions : NSObject
{
    _Bool _isCDNDownloadDisabled;
    _Bool _isAIAnalysisEnabled;
    _Bool _isDefaultTemplateEnabled;
    _Bool _isStubTemplateEnabled;
    _Bool _isMJAppLauncherTemplateEnabled;
    _Bool _isAssetClipperMJAppLauncherEnabled;
    _Bool _isTemplateFlowMJAppLauncherEnabled;
    _Bool _isFolderTemplateEnabled;
    _Bool _isWXRecommendEnabled;
    _Bool _isMJRecommendEnabled;
    _Bool _isMusicSearcherEnabled;
    _Bool _isMusicSearchingAfterInputEnabled;
    _Bool _isOSTEnabled;
    _Bool _isBGMEnabled;
    _Bool _isLyricsEnabled;
    _Bool _isOptimizedClipLogicEnabled;
    _Bool _isMusicRecommendForDefaultTemplateEnabled;
    _Bool _isMusicRecommendForRecommendTemplateEnabled;
    _Bool _allowsExternalPlayback;
    _Bool _canExportInBackground;
    _Bool _isAssetClipperEnabled;
    unsigned int _activityEventType;
    unsigned long long _mjTemplateScene;
    unsigned long long _creationRetainDuration;
    unsigned long long _creationMaxDurationSec;
    unsigned long long _preprocMaxDurationSec;
    NSString *_exportFilePath;
    long long _maxRecommendCount;
    long long _maxStubCount;
    NSString *_createSameTemplateId;
    NSString *_createSameMusicId;
    NSString *_createSameFeedMusicId;
    NSString *_createSameAIModelType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int activityEventType; // @synthesize activityEventType=_activityEventType;
@property(nonatomic) _Bool isAssetClipperEnabled; // @synthesize isAssetClipperEnabled=_isAssetClipperEnabled;
@property(nonatomic) _Bool canExportInBackground; // @synthesize canExportInBackground=_canExportInBackground;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(nonatomic) _Bool isMusicRecommendForRecommendTemplateEnabled; // @synthesize isMusicRecommendForRecommendTemplateEnabled=_isMusicRecommendForRecommendTemplateEnabled;
@property(nonatomic) _Bool isMusicRecommendForDefaultTemplateEnabled; // @synthesize isMusicRecommendForDefaultTemplateEnabled=_isMusicRecommendForDefaultTemplateEnabled;
@property(nonatomic) _Bool isOptimizedClipLogicEnabled; // @synthesize isOptimizedClipLogicEnabled=_isOptimizedClipLogicEnabled;
@property(nonatomic) _Bool isLyricsEnabled; // @synthesize isLyricsEnabled=_isLyricsEnabled;
@property(nonatomic) _Bool isBGMEnabled; // @synthesize isBGMEnabled=_isBGMEnabled;
@property(nonatomic) _Bool isOSTEnabled; // @synthesize isOSTEnabled=_isOSTEnabled;
@property(retain, nonatomic) NSString *createSameAIModelType; // @synthesize createSameAIModelType=_createSameAIModelType;
@property(retain, nonatomic) NSString *createSameFeedMusicId; // @synthesize createSameFeedMusicId=_createSameFeedMusicId;
@property(retain, nonatomic) NSString *createSameMusicId; // @synthesize createSameMusicId=_createSameMusicId;
@property(retain, nonatomic) NSString *createSameTemplateId; // @synthesize createSameTemplateId=_createSameTemplateId;
@property(nonatomic) long long maxStubCount; // @synthesize maxStubCount=_maxStubCount;
@property(nonatomic) long long maxRecommendCount; // @synthesize maxRecommendCount=_maxRecommendCount;
@property(nonatomic) _Bool isMusicSearchingAfterInputEnabled; // @synthesize isMusicSearchingAfterInputEnabled=_isMusicSearchingAfterInputEnabled;
@property(nonatomic) _Bool isMusicSearcherEnabled; // @synthesize isMusicSearcherEnabled=_isMusicSearcherEnabled;
@property(nonatomic) _Bool isMJRecommendEnabled; // @synthesize isMJRecommendEnabled=_isMJRecommendEnabled;
@property(nonatomic) _Bool isWXRecommendEnabled; // @synthesize isWXRecommendEnabled=_isWXRecommendEnabled;
@property(nonatomic) _Bool isFolderTemplateEnabled; // @synthesize isFolderTemplateEnabled=_isFolderTemplateEnabled;
@property(nonatomic) _Bool isTemplateFlowMJAppLauncherEnabled; // @synthesize isTemplateFlowMJAppLauncherEnabled=_isTemplateFlowMJAppLauncherEnabled;
@property(nonatomic) _Bool isAssetClipperMJAppLauncherEnabled; // @synthesize isAssetClipperMJAppLauncherEnabled=_isAssetClipperMJAppLauncherEnabled;
@property(nonatomic) _Bool isMJAppLauncherTemplateEnabled; // @synthesize isMJAppLauncherTemplateEnabled=_isMJAppLauncherTemplateEnabled;
@property(nonatomic) _Bool isStubTemplateEnabled; // @synthesize isStubTemplateEnabled=_isStubTemplateEnabled;
@property(nonatomic) _Bool isDefaultTemplateEnabled; // @synthesize isDefaultTemplateEnabled=_isDefaultTemplateEnabled;
@property(copy, nonatomic) NSString *exportFilePath; // @synthesize exportFilePath=_exportFilePath;
@property(nonatomic) unsigned long long preprocMaxDurationSec; // @synthesize preprocMaxDurationSec=_preprocMaxDurationSec;
@property(nonatomic) unsigned long long creationMaxDurationSec; // @synthesize creationMaxDurationSec=_creationMaxDurationSec;
@property(nonatomic) unsigned long long creationRetainDuration; // @synthesize creationRetainDuration=_creationRetainDuration;
@property(nonatomic) _Bool isAIAnalysisEnabled; // @synthesize isAIAnalysisEnabled=_isAIAnalysisEnabled;
@property(nonatomic) _Bool isCDNDownloadDisabled; // @synthesize isCDNDownloadDisabled=_isCDNDownloadDisabled;
@property(nonatomic) unsigned long long mjTemplateScene; // @synthesize mjTemplateScene=_mjTemplateScene;
- (id)description;

@end

