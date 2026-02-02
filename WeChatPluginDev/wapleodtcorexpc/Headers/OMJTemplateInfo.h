//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, OMJChannelEventConfig;

@interface OMJTemplateInfo : NSObject
{
    NSString *_templateName;
    NSString *_templateID;
    NSURL *_coverImageURL;
    NSString *_coverImageFileMD5;
    NSURL *_previewImageGifURL;
    NSString *_previewImageGifFileMD5;
    NSURL *_previewImageWxAMURL;
    NSString *_previewImageWxAMFileMD5;
    OMJChannelEventConfig *_channelEventConfig;
    NSString *_templateDescURL;
    NSString *_templateDescFileMD5;
    unsigned long long _templateDescVersion;
    unsigned long long _minimumiOSSDKVersion;
    unsigned long long _minimumAndroidSDKVersion;
    unsigned long long _minimumAssetCount;
    unsigned long long _maximumAssetCount;
    NSData *_sessionBuffer;
    NSString *_aiModelType;
}

+ (id)templateWithMJVideoTemplate:(id)arg1;
+ (id)loadingTemplateInfo;
+ (id)emptyTemplateInfo;
+ (id)emptyImageTemplateInfo;
+ (id)finderDefaultTemplateId;
+ (id)templateWithName:(id)arg1 coverUrl:(id)arg2 coverFileMd5:(id)arg3 previewWxamUrl:(id)arg4 previewWxamFileMd5:(id)arg5 previewGifUrl:(id)arg6 previewGifFileMd5:(id)arg7 templateId:(id)arg8 descUrl:(id)arg9 descFileMd5:(id)arg10 descVer:(unsigned long long)arg11 localSVGIconName:(id)arg12;
+ (id)templateWithName:(id)arg1 coverUrls:(id)arg2 templateId:(id)arg3 descUrl:(id)arg4 descVer:(unsigned long long)arg5 localSVGIconName:(id)arg6;
+ (id)templateWithName:(id)arg1 coverUrls:(id)arg2 templateId:(id)arg3 localSVGIconName:(id)arg4;
+ (id)templateWithName:(id)arg1 coverUrls:(id)arg2 templateId:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *aiModelType; // @synthesize aiModelType=_aiModelType;
@property(readonly, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long maximumAssetCount; // @synthesize maximumAssetCount=_maximumAssetCount;
@property(nonatomic) unsigned long long minimumAssetCount; // @synthesize minimumAssetCount=_minimumAssetCount;
@property(readonly, nonatomic) unsigned long long minimumAndroidSDKVersion; // @synthesize minimumAndroidSDKVersion=_minimumAndroidSDKVersion;
@property(readonly, nonatomic) unsigned long long minimumiOSSDKVersion; // @synthesize minimumiOSSDKVersion=_minimumiOSSDKVersion;
@property(readonly, nonatomic) unsigned long long templateDescVersion; // @synthesize templateDescVersion=_templateDescVersion;
@property(readonly, nonatomic) NSString *templateDescFileMD5; // @synthesize templateDescFileMD5=_templateDescFileMD5;
@property(readonly, nonatomic) NSString *templateDescURL; // @synthesize templateDescURL=_templateDescURL;
@property(readonly, nonatomic) OMJChannelEventConfig *channelEventConfig; // @synthesize channelEventConfig=_channelEventConfig;
@property(readonly, nonatomic) NSString *previewImageWxAMFileMD5; // @synthesize previewImageWxAMFileMD5=_previewImageWxAMFileMD5;
@property(readonly, nonatomic) NSURL *previewImageWxAMURL; // @synthesize previewImageWxAMURL=_previewImageWxAMURL;
@property(readonly, nonatomic) NSString *previewImageGifFileMD5; // @synthesize previewImageGifFileMD5=_previewImageGifFileMD5;
@property(readonly, nonatomic) NSURL *previewImageGifURL; // @synthesize previewImageGifURL=_previewImageGifURL;
@property(readonly, nonatomic) NSString *coverImageFileMD5; // @synthesize coverImageFileMD5=_coverImageFileMD5;
@property(readonly, nonatomic) NSURL *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(readonly, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(readonly, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTemplateID:(id)arg1 templateName:(id)arg2 coverImageURL:(id)arg3 coverImageFileMD5:(id)arg4 previewImageGifURL:(id)arg5 previewImageGifFileMD5:(id)arg6 previewImageWxAMURL:(id)arg7 previewImageWxAMFileMD5:(id)arg8 channelEventConfig:(id)arg9 templateDescURL:(id)arg10 templateDescFileMD5:(id)arg11 templateDescVersion:(unsigned long long)arg12 minimumiOSSDKVersion:(unsigned long long)arg13 minimumAndroidSDKVersion:(unsigned long long)arg14 sessionBuffer:(id)arg15 aiModelType:(id)arg16;
- (id)initWithTemplateID:(id)arg1 templateName:(id)arg2 coverImageURL:(id)arg3 previewImageGifURL:(id)arg4 previewImageWxAMURL:(id)arg5 channelEventConfig:(id)arg6 templateDescURL:(id)arg7 templateDescVersion:(unsigned long long)arg8 minimumiOSSDKVersion:(unsigned long long)arg9 minimumAndroidSDKVersion:(unsigned long long)arg10 sessionBuffer:(id)arg11;
- (id)initWithBackingInfo:(const void *)arg1;
- (_Bool)isRecommendTemplate;
- (_Bool)isLoadingTemplate;
- (_Bool)isEmptyTemplate;
- (_Bool)isFinderDefaultTemplate;
- (_Bool)isEmptyImageTemplate;
- (id)getLocalSVGName;

@end

