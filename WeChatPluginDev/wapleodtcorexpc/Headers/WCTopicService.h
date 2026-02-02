//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, WCTopicJumpInfo;

@interface WCTopicService
{
    _Bool _isAvaliableForTextFeaturesInChat;
    _Bool _isAvaliableForTextFeaturesInTimeline;
    _Bool _isAvaliableForShareConentSearch;
    unsigned int _topicMaxCharacterCount;
    WCTopicJumpInfo *_curTopicJumpInfo;
    MMLoadingView *_loadingView;
    double _lastReqTime;
}

- (void).cxx_destruct;
@property(nonatomic) double lastReqTime; // @synthesize lastReqTime=_lastReqTime;
@property(nonatomic) __weak MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCTopicJumpInfo *curTopicJumpInfo; // @synthesize curTopicJumpInfo=_curTopicJumpInfo;
@property(nonatomic) unsigned int topicMaxCharacterCount; // @synthesize topicMaxCharacterCount=_topicMaxCharacterCount;
@property(nonatomic) _Bool isAvaliableForShareConentSearch; // @synthesize isAvaliableForShareConentSearch=_isAvaliableForShareConentSearch;
@property(nonatomic) _Bool isAvaliableForTextFeaturesInTimeline; // @synthesize isAvaliableForTextFeaturesInTimeline=_isAvaliableForTextFeaturesInTimeline;
@property(nonatomic) _Bool isAvaliableForTextFeaturesInChat; // @synthesize isAvaliableForTextFeaturesInChat=_isAvaliableForTextFeaturesInChat;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)openLiteAppTopicJumpInfo:(id)arg1 viewController:(id)arg2;
- (void)openBizByTopicJumpInfo:(id)arg1 ViewController:(id)arg2 addContactScene:(int)arg3;
- (void)openFinderProfileByTopicJumpInfo:(id)arg1 ViewController:(id)arg2 reportScene:(int)arg3 enterType:(unsigned int)arg4 params:(id)arg5;
- (void)openH5ByTopicJumpInfo:(id)arg1 ViewController:(id)arg2;
- (void)openWaAppByTopicJumpInfo:(id)arg1 OpenParam:(id)arg2;
- (id)makeOpenParamByTopicJumpInfo:(id)arg1;
- (void)onTopicJumpInfoTimeout;
- (void)cancelReqTopicJumpInfoByObject:(id)arg1;
- (void)stopReqTopicJumpInfo;
- (void)reqTopicJumpInfo:(id)arg1 Object:(id)arg2 Handler:(CDUnknownBlockType)arg3;
- (void)openTopicWithParams:(id)arg1 object:(id)arg2 fromViewController:(id)arg3;
- (void)hideTopicJumpLoading:(_Bool)arg1;
- (void)showTopicJumpLoading;
- (void)onExptItemListChange;
- (_Bool)isAvaliableForTopicSearchTextFeaturesInTimeline;
- (_Bool)isAvaliableForTopicSearchInputShare;
- (_Bool)isAvaliableForTopicSearchTextFeatures;
- (_Bool)updateCacheTextFeatureEnableInTimeline:(_Bool)arg1;
- (_Bool)updateCacheTextFeatureEnableInChat:(_Bool)arg1;
- (unsigned long long)localJSBizType;
- (unsigned int)packageResouceType;
- (id)templateResouceRootPath;
- (id)defaultTemplateZipPath;
- (void)onServiceInit;

@end

