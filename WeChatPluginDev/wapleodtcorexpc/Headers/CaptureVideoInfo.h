//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditVideoAttr, MMAsset, MMImageExifLogInfo, MPPageIdentityInfo, NSString, VideoUploadStatInfo, WASourceWeappInfo;

@interface CaptureVideoInfo : NSObject
{
    NSString *thumb_path;
    NSString *video_path;
    unsigned int video_time;
    unsigned int video_size;
    unsigned int thumb_size;
    unsigned int m_uiVideoOffset;
    _Bool front_camera;
    unsigned int m_uiVideoSource;
    _Bool m_bForward;
    NSString *m_nsMsgDataUrl;
    NSString *m_nsAesKey;
    unsigned int m_videoCreateTime;
    NSString *m_nsStreamVideoUrl;
    unsigned int m_uiStreamVideoTime;
    NSString *m_nsStreamVideoTitle;
    NSString *m_nsStreamVideoWording;
    NSString *m_nsStreamVideoWebUrl;
    NSString *m_nsStreamVideoThumbUrl;
    NSString *m_nsStreamVideoPublishId;
    NSString *m_nsStreamVideoAdUxInfo;
    NSString *m_nsStatExtStr;
    NSString *m_msgSource;
    unsigned int thumb_width;
    unsigned int thumb_height;
    unsigned int video_width;
    unsigned int video_height;
    _Bool bRawVideo;
    NSString *m_authkey;
    _Bool _isSpatial;
    _Bool _isEdited;
    unsigned int m_uiIsSenderStatus;
    unsigned int _overWriteMsgSendTime;
    unsigned int _m_forwardType;
    unsigned int _m_uiContinueUploadCount;
    unsigned int _m_uiPercent;
    unsigned int _m_referFromScene;
    NSString *m_nsSpecifiedChatName;
    MMAsset *_asset;
    NSString *_nsRawAesKey;
    NSString *_nsRawDataUrl;
    NSString *_nsRawFileMd5;
    NSString *_nsUploadToken;
    NSString *_nsRawVidePath;
    NSString *_nsOriginSourceDataMd5;
    unsigned long long _rawFileLength;
    unsigned long long _overWriteMsgSvrID;
    NSString *_video_assetId;
    NSString *_m_assetIdForForward;
    NSString *_m_md5;
    NSString *_m_newMd5;
    VideoUploadStatInfo *_m_statInfo;
    EditVideoAttr *_editVideoAttr;
    MMImageExifLogInfo *_exifLogInfo;
    NSString *_m_nsAttachFileKey;
    NSString *_m_nsAppId;
    NSString *_m_nsMessageAction;
    NSString *_m_nsMessageExt;
    NSString *_m_nsMediaTagName;
    WASourceWeappInfo *_m_sourceWeappInfo;
    NSString *_m_weappSourceUsername;
    NSString *_m_nsEncodeJson;
    MPPageIdentityInfo *_m_mpPageIdentityInfo;
}

+ (int)getVideoDurationForAsset:(id)arg1;
+ (id)genVideoInfoWithVideoUrl:(id)arg1 thumb:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_referFromScene; // @synthesize m_referFromScene=_m_referFromScene;
@property(retain, nonatomic) MPPageIdentityInfo *m_mpPageIdentityInfo; // @synthesize m_mpPageIdentityInfo=_m_mpPageIdentityInfo;
@property(retain, nonatomic) NSString *m_nsEncodeJson; // @synthesize m_nsEncodeJson=_m_nsEncodeJson;
@property(retain, nonatomic) NSString *m_weappSourceUsername; // @synthesize m_weappSourceUsername=_m_weappSourceUsername;
@property(retain, nonatomic) WASourceWeappInfo *m_sourceWeappInfo; // @synthesize m_sourceWeappInfo=_m_sourceWeappInfo;
@property(retain, nonatomic) NSString *m_nsMediaTagName; // @synthesize m_nsMediaTagName=_m_nsMediaTagName;
@property(retain, nonatomic) NSString *m_nsMessageExt; // @synthesize m_nsMessageExt=_m_nsMessageExt;
@property(retain, nonatomic) NSString *m_nsMessageAction; // @synthesize m_nsMessageAction=_m_nsMessageAction;
@property(retain, nonatomic) NSString *m_nsAppId; // @synthesize m_nsAppId=_m_nsAppId;
@property(nonatomic) unsigned int m_uiPercent; // @synthesize m_uiPercent=_m_uiPercent;
@property(nonatomic) unsigned int m_uiContinueUploadCount; // @synthesize m_uiContinueUploadCount=_m_uiContinueUploadCount;
@property(retain, nonatomic) NSString *m_nsAttachFileKey; // @synthesize m_nsAttachFileKey=_m_nsAttachFileKey;
@property(retain, nonatomic) MMImageExifLogInfo *exifLogInfo; // @synthesize exifLogInfo=_exifLogInfo;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr; // @synthesize editVideoAttr=_editVideoAttr;
@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(retain, nonatomic) VideoUploadStatInfo *m_statInfo; // @synthesize m_statInfo=_m_statInfo;
@property(retain, nonatomic) NSString *m_newMd5; // @synthesize m_newMd5=_m_newMd5;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5=_m_md5;
@property(nonatomic) unsigned int m_forwardType; // @synthesize m_forwardType=_m_forwardType;
@property(retain, nonatomic) NSString *m_assetIdForForward; // @synthesize m_assetIdForForward=_m_assetIdForForward;
@property(retain, nonatomic) NSString *video_assetId; // @synthesize video_assetId=_video_assetId;
@property(nonatomic) _Bool isSpatial; // @synthesize isSpatial=_isSpatial;
@property(nonatomic) unsigned int overWriteMsgSendTime; // @synthesize overWriteMsgSendTime=_overWriteMsgSendTime;
@property(nonatomic) unsigned long long overWriteMsgSvrID; // @synthesize overWriteMsgSvrID=_overWriteMsgSvrID;
@property(nonatomic) unsigned long long rawFileLength; // @synthesize rawFileLength=_rawFileLength;
@property(retain, nonatomic) NSString *nsOriginSourceDataMd5; // @synthesize nsOriginSourceDataMd5=_nsOriginSourceDataMd5;
@property(retain, nonatomic) NSString *nsRawVidePath; // @synthesize nsRawVidePath=_nsRawVidePath;
@property(retain, nonatomic) NSString *nsUploadToken; // @synthesize nsUploadToken=_nsUploadToken;
@property(retain, nonatomic) NSString *nsRawFileMd5; // @synthesize nsRawFileMd5=_nsRawFileMd5;
@property(retain, nonatomic) NSString *nsRawDataUrl; // @synthesize nsRawDataUrl=_nsRawDataUrl;
@property(retain, nonatomic) NSString *nsRawAesKey; // @synthesize nsRawAesKey=_nsRawAesKey;
@property(retain, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool bRawVideo; // @synthesize bRawVideo;
@property(nonatomic) unsigned int m_uiIsSenderStatus; // @synthesize m_uiIsSenderStatus;
@property(retain, nonatomic) NSString *m_nsSpecifiedChatName; // @synthesize m_nsSpecifiedChatName;
@property(retain, nonatomic) NSString *m_authkey; // @synthesize m_authkey;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @synthesize m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @synthesize m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @synthesize m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @synthesize m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @synthesize m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @synthesize m_nsStreamVideoWording;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @synthesize m_nsStreamVideoTitle;
@property(nonatomic) unsigned int m_uiStreamVideoTime; // @synthesize m_uiStreamVideoTime;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @synthesize m_nsStreamVideoUrl;
@property(nonatomic) unsigned int m_videoCreateTime; // @synthesize m_videoCreateTime;
@property(nonatomic) unsigned int video_height; // @synthesize video_height;
@property(nonatomic) unsigned int video_width; // @synthesize video_width;
@property(nonatomic) unsigned int thumb_height; // @synthesize thumb_height;
@property(nonatomic) unsigned int thumb_width; // @synthesize thumb_width;
@property(retain, nonatomic) NSString *m_msgSource; // @synthesize m_msgSource;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsMsgDataUrl; // @synthesize m_nsMsgDataUrl;
@property(nonatomic) _Bool m_bForward; // @synthesize m_bForward;
@property(nonatomic) unsigned int m_uiVideoSource; // @synthesize m_uiVideoSource;
@property(nonatomic) _Bool front_camera; // @synthesize front_camera;
@property(nonatomic) unsigned int m_uiVideoOffset; // @synthesize m_uiVideoOffset;
@property(nonatomic) unsigned int thumb_size; // @synthesize thumb_size;
@property(nonatomic) unsigned int video_size; // @synthesize video_size;
@property(nonatomic) unsigned int video_time; // @synthesize video_time;
@property(retain, nonatomic) NSString *video_path; // @synthesize video_path;
@property(retain, nonatomic) NSString *thumb_path; // @synthesize thumb_path;
- (id)init;

@end

