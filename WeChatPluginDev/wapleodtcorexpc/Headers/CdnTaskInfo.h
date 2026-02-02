//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, MassSendWrap, NSMutableDictionary, NSString, WCMediaItem;

@interface CdnTaskInfo : NSObject
{
    NSString *m_nsClientMsgID;
    CMessageWrap *m_wrapMsg;
    MassSendWrap *m_massWrapMsg;
    NSString *m_nsChatName;
    unsigned int m_uiThumbSize;
    _Bool m_bHD;
    unsigned long long m_uiFinishedLen;
    unsigned long long m_uiTotalLen;
    unsigned long long m_ui64StartTime;
    unsigned long long m_ui64EndTime;
    int m_nRetCode;
    _Bool m_bUpload;
    _Bool m_bThumb;
    NSString *m_nsCdnStatInfo;
    unsigned int m_uiOpType;
    NSString *m_nsMd5;
    _Bool m_bAutoDownload;
    double m_tGetMoovTime;
    unsigned long long m_emDownloadMode;
    WCMediaItem *m_oWCMediaItem;
    unsigned long long m_saveAlbumMode;
    _Bool m_bPreloadTask;
    unsigned int m_uiHasPreloadSize;
    unsigned int m_uiConfigPreloadPercent;
    _Bool m_bSourceChanged;
    int retryCount;
    _Bool _m_bDisableHitCheck;
    _Bool _m_bCheckExistOnly;
    _Bool _m_bSilent;
    _Bool _isSendingMsg;
    _Bool _isRealtimeUploadSentAppmsg;
    _Bool _isRealtimeUpload;
    _Bool _isDataUploaded;
    _Bool _isSendImgWithCdn;
    _Bool _customizedVideoFlagsEnabled;
    _Bool _isSkipTransH264;
    _Bool _hasTryWxamConvert;
    _Bool _wxamIllegal;
    _Bool _wxamDisabled;
    _Bool _heicIllegal;
    _Bool _hadTryCaculateOriginSourceMD5;
    _Bool _hadTryCalcPHash;
    unsigned int m_uiMoovPos;
    int _videoFlagPolicy;
    NSString *m_nsShareOriginUrl;
    NSString *m_nsShareOpenUrl;
    NSString *m_nsJsAppId;
    NSMutableDictionary *m_dicStatParas;
    NSString *m_nsSnsPostUser;
    NSString *_m_uiThumbUrl;
    NSString *_m_uiThumbAesKey;
    NSString *_m_uiAuthKey;
    NSMutableDictionary *_m_userInfo;
    unsigned long long _m_ui64TaskCreateTime;
    NSString *_tempPath;
    NSString *_cachePath;
    NSString *_requestVideoFlag;
    NSString *_responseVideoFlag;
    long long _downloadBehavior;
}

+ (_Bool)isServerBehavior:(long long)arg1;
+ (unsigned int)GetStatNetworkType;
- (void).cxx_destruct;
@property(nonatomic) long long downloadBehavior; // @synthesize downloadBehavior=_downloadBehavior;
@property(nonatomic) _Bool hadTryCalcPHash; // @synthesize hadTryCalcPHash=_hadTryCalcPHash;
@property(nonatomic) _Bool hadTryCaculateOriginSourceMD5; // @synthesize hadTryCaculateOriginSourceMD5=_hadTryCaculateOriginSourceMD5;
@property(nonatomic) _Bool heicIllegal; // @synthesize heicIllegal=_heicIllegal;
@property(nonatomic) _Bool wxamDisabled; // @synthesize wxamDisabled=_wxamDisabled;
@property(nonatomic) _Bool wxamIllegal; // @synthesize wxamIllegal=_wxamIllegal;
@property(nonatomic) _Bool hasTryWxamConvert; // @synthesize hasTryWxamConvert=_hasTryWxamConvert;
@property(nonatomic) _Bool isSkipTransH264; // @synthesize isSkipTransH264=_isSkipTransH264;
@property(copy, nonatomic) NSString *responseVideoFlag; // @synthesize responseVideoFlag=_responseVideoFlag;
@property(copy, nonatomic) NSString *requestVideoFlag; // @synthesize requestVideoFlag=_requestVideoFlag;
@property(nonatomic) int videoFlagPolicy; // @synthesize videoFlagPolicy=_videoFlagPolicy;
@property(nonatomic) _Bool customizedVideoFlagsEnabled; // @synthesize customizedVideoFlagsEnabled=_customizedVideoFlagsEnabled;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(copy, nonatomic) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(nonatomic) _Bool isSendImgWithCdn; // @synthesize isSendImgWithCdn=_isSendImgWithCdn;
@property(nonatomic) _Bool isDataUploaded; // @synthesize isDataUploaded=_isDataUploaded;
@property(nonatomic) _Bool isRealtimeUpload; // @synthesize isRealtimeUpload=_isRealtimeUpload;
@property(nonatomic) _Bool isRealtimeUploadSentAppmsg; // @synthesize isRealtimeUploadSentAppmsg=_isRealtimeUploadSentAppmsg;
@property(nonatomic) _Bool isSendingMsg; // @synthesize isSendingMsg=_isSendingMsg;
@property(nonatomic) unsigned long long m_ui64TaskCreateTime; // @synthesize m_ui64TaskCreateTime=_m_ui64TaskCreateTime;
@property(retain, nonatomic) NSMutableDictionary *m_userInfo; // @synthesize m_userInfo=_m_userInfo;
@property(nonatomic) _Bool m_bSilent; // @synthesize m_bSilent=_m_bSilent;
@property(nonatomic) _Bool m_bCheckExistOnly; // @synthesize m_bCheckExistOnly=_m_bCheckExistOnly;
@property(nonatomic) _Bool m_bDisableHitCheck; // @synthesize m_bDisableHitCheck=_m_bDisableHitCheck;
@property(retain, nonatomic) NSString *m_uiAuthKey; // @synthesize m_uiAuthKey=_m_uiAuthKey;
@property(retain, nonatomic) NSString *m_uiThumbAesKey; // @synthesize m_uiThumbAesKey=_m_uiThumbAesKey;
@property(retain, nonatomic) NSString *m_uiThumbUrl; // @synthesize m_uiThumbUrl=_m_uiThumbUrl;
@property(nonatomic) int retryCount; // @synthesize retryCount;
@property(retain, nonatomic) NSString *m_nsSnsPostUser; // @synthesize m_nsSnsPostUser;
@property(nonatomic) unsigned int m_uiMoovPos; // @synthesize m_uiMoovPos;
@property(nonatomic) _Bool m_bSourceChanged; // @synthesize m_bSourceChanged;
@property(nonatomic) unsigned int m_uiConfigPreloadPercent; // @synthesize m_uiConfigPreloadPercent;
@property(nonatomic) unsigned int m_uiHasPreloadSize; // @synthesize m_uiHasPreloadSize;
@property(nonatomic) _Bool m_bPreloadTask; // @synthesize m_bPreloadTask;
@property(nonatomic) unsigned long long m_saveAlbumMode; // @synthesize m_saveAlbumMode;
@property(nonatomic) unsigned long long m_emDownloadMode; // @synthesize m_emDownloadMode;
@property(retain, nonatomic) WCMediaItem *m_oWCMediaItem; // @synthesize m_oWCMediaItem;
@property(nonatomic) double m_tGetMoovTime; // @synthesize m_tGetMoovTime;
@property(nonatomic) _Bool m_bAutoDownload; // @synthesize m_bAutoDownload;
@property(retain, nonatomic) NSMutableDictionary *m_dicStatParas; // @synthesize m_dicStatParas;
@property(retain, nonatomic) NSString *m_nsJsAppId; // @synthesize m_nsJsAppId;
@property(retain, nonatomic) NSString *m_nsShareOpenUrl; // @synthesize m_nsShareOpenUrl;
@property(retain, nonatomic) NSString *m_nsShareOriginUrl; // @synthesize m_nsShareOriginUrl;
@property(retain, nonatomic) NSString *m_nsMd5; // @synthesize m_nsMd5;
@property(nonatomic) unsigned int m_uiOpType; // @synthesize m_uiOpType;
@property(retain, nonatomic) NSString *m_nsCdnStatInfo; // @synthesize m_nsCdnStatInfo;
@property(nonatomic) _Bool m_bThumb; // @synthesize m_bThumb;
@property(nonatomic) _Bool m_bUpload; // @synthesize m_bUpload;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) unsigned long long m_ui64EndTime; // @synthesize m_ui64EndTime;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime;
@property(nonatomic) unsigned long long m_uiTotalLen; // @synthesize m_uiTotalLen;
@property(nonatomic) unsigned long long m_uiFinishedLen; // @synthesize m_uiFinishedLen;
@property(nonatomic) _Bool m_bHD; // @synthesize m_bHD;
@property(nonatomic) unsigned int m_uiThumbSize; // @synthesize m_uiThumbSize;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(retain, nonatomic) MassSendWrap *m_massWrapMsg; // @synthesize m_massWrapMsg;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (id)description;
- (unsigned int)getVideoPreloadStatus;
- (_Bool)isMsgFromChatroom;
- (id)GetStatInfo;
- (id)init;

@end

