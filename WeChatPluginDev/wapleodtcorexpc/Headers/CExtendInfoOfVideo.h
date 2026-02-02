//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, MMAsset, MessageExpItem, NSString, VideoUploadStatInfo, WASourceWeappInfo;

@interface CExtendInfoOfVideo : NSObject
{
    unsigned int m_uiVideoLen;
    unsigned int m_uiVideoTime;
    unsigned int m_uiUploadStatus;
    unsigned int m_uiVideoOffset;
    unsigned long long m_uiRawVideoOffset;
    unsigned int m_uiCameraType;
    unsigned int m_uiVideoSource;
    NSString *m_nsAesKey;
    unsigned int m_uiVideoFormat;
    NSString *m_nsMsgDataUrl;
    NSString *m_nsMsgThumbUrl;
    NSString *m_nsMsgThumbAesKey;
    unsigned int m_uiMsgThumbSize;
    unsigned int m_uiMsgThumbWidth;
    unsigned int m_uiMsgThumbHeight;
    NSString *m_nsAutoDownloadControl;
    NSString *m_nsStatExtStr;
    MessageExpItem *m_oMsgExpItem;
    NSString *m_nsFileParam;
    NSString *m_nsStreamVideoUrl;
    unsigned int m_uiStreamVideoTime;
    NSString *m_nsStreamVideoTitle;
    NSString *m_nsStreamVideoWording;
    NSString *m_nsStreamVideoWebUrl;
    NSString *m_nsStreamVideoThumbUrl;
    NSString *m_nsStreamVideoPublishId;
    NSString *m_nsStreamVideoAdUxInfo;
    NSString *m_nsMsgMd5;
    NSString *m_nsNewMd5;
    int m_nDownloadLimit;
    NSString *m_nsAttachFileKey;
    unsigned int m_uiContinueUploadCount;
    unsigned int m_uiRawContinueUploadCount;
    NSString *m_authkey;
    NSString *m_nsEncodeJson;
    unsigned long long m_uiRawFileLength;
    NSString *m_nsRawFileMd5;
    NSString *m_nsRawDataUrl;
    NSString *m_nsRawAeskey;
    unsigned int m_uiRawVideoFormat;
    NSString *m_nsOriginSourceDataMd5;
    unsigned int m_uOverWriteMsgSendTime;
    long long m_n64OverWriteMsgSvrID;
    NSString *m_nsUploadToken;
    _Bool m_bIsPlaceHolder;
    _Bool m_bIsVideoMsgToOverWrite;
    WASourceWeappInfo *m_sourceWeappInfo;
    _Bool m_bIsForceUpdate;
    _Bool m_isSpatial;
    unsigned int m_uiPreDownloadPercent;
    unsigned int m_uiPreDownloadNetType;
    unsigned int m_uiAppVersion;
    CMessageWrap *m_refMessageWrap;
    NSString *m_nsAssetId;
    NSString *m_nsNoPreDownloadRange;
    NSString *m_nsAppID;
    NSString *m_nsAppName;
    NSString *m_nsAppMediaTagName;
    NSString *m_nsAppMessageExt;
    NSString *m_nsAppMessageAction;
    VideoUploadStatInfo *_m_oVideoUploadStatInfo;
    MMAsset *_m_asset;
    NSString *_m_assetIdForForward;
}

+ (id)GenVideoMsg:(id)arg1 ToUsr:(id)arg2 MsgType:(unsigned int)arg3 VideoInfo:(id)arg4;
+ (void)CreateVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 MsgType:(unsigned int)arg4 retMessageWrap:(id *)arg5;
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_assetIdForForward; // @synthesize m_assetIdForForward=_m_assetIdForForward;
@property(retain, nonatomic) MMAsset *m_asset; // @synthesize m_asset=_m_asset;
@property(retain, nonatomic) VideoUploadStatInfo *m_oVideoUploadStatInfo; // @synthesize m_oVideoUploadStatInfo=_m_oVideoUploadStatInfo;
@property(retain, nonatomic) WASourceWeappInfo *m_sourceWeappInfo; // @synthesize m_sourceWeappInfo;
@property(nonatomic) _Bool m_isSpatial; // @synthesize m_isSpatial;
@property(retain, nonatomic) NSString *m_nsOriginSourceDataMd5; // @synthesize m_nsOriginSourceDataMd5;
@property(nonatomic) _Bool m_bIsVideoMsgToOverWrite; // @synthesize m_bIsVideoMsgToOverWrite;
@property(nonatomic) _Bool m_bIsPlaceHolder; // @synthesize m_bIsPlaceHolder;
@property(retain, nonatomic) NSString *m_nsUploadToken; // @synthesize m_nsUploadToken;
@property(nonatomic) long long m_n64OverWriteMsgSvrID; // @synthesize m_n64OverWriteMsgSvrID;
@property(nonatomic) unsigned int m_uOverWriteMsgSendTime; // @synthesize m_uOverWriteMsgSendTime;
@property(nonatomic) unsigned long long m_uiRawVideoOffset; // @synthesize m_uiRawVideoOffset;
@property(nonatomic) unsigned int m_uiRawVideoFormat; // @synthesize m_uiRawVideoFormat;
@property(retain, nonatomic) NSString *m_nsRawAeskey; // @synthesize m_nsRawAeskey;
@property(retain, nonatomic) NSString *m_nsRawDataUrl; // @synthesize m_nsRawDataUrl;
@property(retain, nonatomic) NSString *m_nsRawFileMd5; // @synthesize m_nsRawFileMd5;
@property(nonatomic) unsigned long long m_uiRawFileLength; // @synthesize m_uiRawFileLength;
@property(retain, nonatomic) NSString *m_nsEncodeJson; // @synthesize m_nsEncodeJson;
@property(retain, nonatomic) NSString *m_nsAppMessageAction; // @synthesize m_nsAppMessageAction;
@property(retain, nonatomic) NSString *m_nsAppMessageExt; // @synthesize m_nsAppMessageExt;
@property(retain, nonatomic) NSString *m_nsAppMediaTagName; // @synthesize m_nsAppMediaTagName;
@property(nonatomic) _Bool m_bIsForceUpdate; // @synthesize m_bIsForceUpdate;
@property(nonatomic) unsigned int m_uiAppVersion; // @synthesize m_uiAppVersion;
@property(retain, nonatomic) NSString *m_nsAppName; // @synthesize m_nsAppName;
@property(retain, nonatomic) NSString *m_nsAppID; // @synthesize m_nsAppID;
@property(retain, nonatomic) NSString *m_authkey; // @synthesize m_authkey;
@property(nonatomic) unsigned int m_uiRawContinueUploadCount; // @synthesize m_uiRawContinueUploadCount;
@property(nonatomic) unsigned int m_uiContinueUploadCount; // @synthesize m_uiContinueUploadCount;
@property(retain, nonatomic) NSString *m_nsAttachFileKey; // @synthesize m_nsAttachFileKey;
@property(retain, nonatomic) NSString *m_nsNoPreDownloadRange; // @synthesize m_nsNoPreDownloadRange;
@property(nonatomic) unsigned int m_uiPreDownloadNetType; // @synthesize m_uiPreDownloadNetType;
@property(nonatomic) unsigned int m_uiPreDownloadPercent; // @synthesize m_uiPreDownloadPercent;
@property(nonatomic) unsigned int m_uiVideoFormat; // @synthesize m_uiVideoFormat;
@property(retain, nonatomic) NSString *m_nsAssetId; // @synthesize m_nsAssetId;
@property(retain, nonatomic) MessageExpItem *m_oMsgExpItem; // @synthesize m_oMsgExpItem;
@property(nonatomic) int m_nDownloadLimit; // @synthesize m_nDownloadLimit;
@property(retain, nonatomic) NSString *m_nsNewMd5; // @synthesize m_nsNewMd5;
@property(retain, nonatomic) NSString *m_nsMsgMd5; // @synthesize m_nsMsgMd5;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @synthesize m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @synthesize m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @synthesize m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @synthesize m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @synthesize m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @synthesize m_nsStreamVideoWording;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @synthesize m_nsStreamVideoTitle;
@property(nonatomic) unsigned int m_uiStreamVideoTime; // @synthesize m_uiStreamVideoTime;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @synthesize m_nsStreamVideoUrl;
@property(retain, nonatomic) NSString *m_nsFileParam; // @synthesize m_nsFileParam;
@property(nonatomic) __weak CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(retain, nonatomic) NSString *m_nsMsgDataUrl; // @synthesize m_nsMsgDataUrl;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsMsgThumbUrl; // @synthesize m_nsMsgThumbUrl;
@property(retain, nonatomic) NSString *m_nsMsgThumbAesKey; // @synthesize m_nsMsgThumbAesKey;
@property(nonatomic) unsigned int m_uiVideoTime; // @synthesize m_uiVideoTime;
@property(nonatomic) unsigned int m_uiVideoSource; // @synthesize m_uiVideoSource;
@property(nonatomic) unsigned int m_uiVideoOffset; // @synthesize m_uiVideoOffset;
@property(nonatomic) unsigned int m_uiVideoLen; // @synthesize m_uiVideoLen;
@property(nonatomic) unsigned int m_uiUploadStatus; // @synthesize m_uiUploadStatus;
@property(nonatomic) unsigned int m_uiCameraType; // @synthesize m_uiCameraType;
@property(retain, nonatomic) NSString *m_nsAutoDownloadControl; // @synthesize m_nsAutoDownloadControl;
@property(nonatomic) unsigned int m_uiMsgThumbWidth; // @synthesize m_uiMsgThumbWidth;
@property(nonatomic) unsigned int m_uiMsgThumbSize; // @synthesize m_uiMsgThumbSize;
@property(nonatomic) unsigned int m_uiMsgThumbHeight; // @synthesize m_uiMsgThumbHeight;
- (_Bool)IsUnPlayed;
- (id)GetDownloadThumbPath;
- (id)GetThumbPath;
- (void)updateDownloadStatus:(id)arg1;
- (void)updateUploadStatus:(id)arg1;
- (void)UpdateVideoStatus:(id)arg1;
- (void)UpdateContent:(id)arg1;
- (id)xmlOfStreamVideo;
- (void)parseStreamVideoNode:(struct XmlReaderNode_t *)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

