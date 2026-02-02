//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJAlbumTemplateInfo, MJCameraTemplateInfo, MJCommonTemplateInfo, MJTemplateDynamicInfo, MJTemplateFinderEventTopicInfo, MJTemplateFinderUserInfo, MJTemplateVersionInfo, NSData, NSString, OMJTemplateInfo;

@interface MJVideoTemplate : NSObject
{
    _Bool _isMusicRecommendationEnabled;
    _Bool _enableSingleTemplateMusicRec;
    OMJTemplateInfo *_oMJTemplateInfo;
    NSString *_templateId;
    unsigned long long _type;
    unsigned long long _sdkVersion;
    MJCommonTemplateInfo *_commonTplInfo;
    MJCameraTemplateInfo *_cameraTplInfo;
    MJAlbumTemplateInfo *_albumTplInfo;
    MJTemplateDynamicInfo *_dynamicInfo;
    MJTemplateVersionInfo *_versionInfo;
    MJTemplateFinderEventTopicInfo *_eventInfo;
    MJTemplateFinderUserInfo *_finderUserInfo;
    long long _videoTemplateSource;
    NSString *_AIModelType;
    unsigned long long _createTime;
    unsigned long long _updateTime;
    NSData *_sessionBuffer;
}

+ (void)initialize;
+ (void)PBArrayAdd_finderUserInfo;
+ (void)PBArrayAdd_AIModelType;
+ (void)PBArrayAdd_sessionBuffer;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_dynamicInfo;
+ (void)PBArrayAdd_albumTplInfo;
+ (void)PBArrayAdd_cameraTplInfo;
+ (void)PBArrayAdd_commonTplInfo;
+ (void)PBArrayAdd_sdkVersion;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_templateId;
+ (id)finderDefaultTemplate;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *AIModelType; // @synthesize AIModelType=_AIModelType;
@property(nonatomic) _Bool enableSingleTemplateMusicRec; // @synthesize enableSingleTemplateMusicRec=_enableSingleTemplateMusicRec;
@property(nonatomic) _Bool isMusicRecommendationEnabled; // @synthesize isMusicRecommendationEnabled=_isMusicRecommendationEnabled;
@property(nonatomic) long long videoTemplateSource; // @synthesize videoTemplateSource=_videoTemplateSource;
@property(retain, nonatomic) MJTemplateFinderUserInfo *finderUserInfo; // @synthesize finderUserInfo=_finderUserInfo;
@property(retain, nonatomic) MJTemplateFinderEventTopicInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(retain, nonatomic) MJTemplateVersionInfo *versionInfo; // @synthesize versionInfo=_versionInfo;
@property(retain, nonatomic) MJTemplateDynamicInfo *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(retain, nonatomic) MJAlbumTemplateInfo *albumTplInfo; // @synthesize albumTplInfo=_albumTplInfo;
@property(retain, nonatomic) MJCameraTemplateInfo *cameraTplInfo; // @synthesize cameraTplInfo=_cameraTplInfo;
@property(retain, nonatomic) MJCommonTemplateInfo *commonTplInfo; // @synthesize commonTplInfo=_commonTplInfo;
@property(nonatomic) unsigned long long sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) OMJTemplateInfo *oMJTemplateInfo; // @synthesize oMJTemplateInfo=_oMJTemplateInfo;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isAITemplate;
@property(readonly, nonatomic) _Bool isEditable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOMJTemplateInfo:(id)arg1;
- (id)initWithShortUrlBindingTemplate:(id)arg1;
- (id)initWithVideoTemplate:(id)arg1;
- (id)getPBPropertyTable;
- (_Bool)isFinderDefaultTemplate;
- (id)initForFinderDefaultTemplate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

