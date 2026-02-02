//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, QualityTagInfo;

@interface LiveSdkChannelParams : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int anchorPushMode; // @dynamic anchorPushMode;
@property(nonatomic) unsigned int audienceMode; // @dynamic audienceMode;
@property(retain, nonatomic) NSMutableArray *bakDomain; // @dynamic bakDomain;
@property(retain, nonatomic) NSMutableArray *cdnIps; // @dynamic cdnIps;
@property(nonatomic) unsigned int cdnQualityH265Backcfg; // @dynamic cdnQualityH265Backcfg;
@property(nonatomic) unsigned int cdnQualitySmallH265Backcfg; // @dynamic cdnQualitySmallH265Backcfg;
@property(nonatomic) unsigned int cdnQualitySmallSvrcfg; // @dynamic cdnQualitySmallSvrcfg;
@property(nonatomic) unsigned int cdnQualitySvrcfg; // @dynamic cdnQualitySvrcfg;
@property(nonatomic) int cdnQualityTag; // @dynamic cdnQualityTag;
@property(retain, nonatomic) NSMutableArray *cdnTransInfo; // @dynamic cdnTransInfo;
@property(nonatomic) unsigned int customRenderParam; // @dynamic customRenderParam;
@property(retain, nonatomic) NSString *flvEncryptionIv; // @dynamic flvEncryptionIv;
@property(retain, nonatomic) NSString *flvEncryptionKey; // @dynamic flvEncryptionKey;
@property(nonatomic) unsigned int flvEncryptionMode; // @dynamic flvEncryptionMode;
@property(retain, nonatomic) NSString *gameAppid; // @dynamic gameAppid;
@property(retain, nonatomic) NSString *hlsUrl; // @dynamic hlsUrl;
@property(nonatomic) unsigned int lebMaxCacheMs; // @dynamic lebMaxCacheMs;
@property(nonatomic) unsigned int lebMinCacheMs; // @dynamic lebMinCacheMs;
@property(nonatomic) int micAbility; // @dynamic micAbility;
@property(retain, nonatomic) NSString *p2PAppid; // @dynamic p2PAppid;
@property(nonatomic) unsigned int p2PDebugLogSwitch; // @dynamic p2PDebugLogSwitch;
@property(nonatomic) unsigned int p2PDownloadMnSwitch; // @dynamic p2PDownloadMnSwitch;
@property(retain, nonatomic) NSString *p2PKey; // @dynamic p2PKey;
@property(nonatomic) unsigned int p2PMaxBufferSize; // @dynamic p2PMaxBufferSize;
@property(nonatomic) unsigned int p2PMaxLoad; // @dynamic p2PMaxLoad;
@property(retain, nonatomic) NSString *p2PSecret; // @dynamic p2PSecret;
@property(nonatomic) unsigned int p2PStatSwitch; // @dynamic p2PStatSwitch;
@property(nonatomic) unsigned int p2PSwitch; // @dynamic p2PSwitch;
@property(nonatomic) unsigned int p2PUploadDawangkaSwitch; // @dynamic p2PUploadDawangkaSwitch;
@property(nonatomic) unsigned int p2PUploadSwitch; // @dynamic p2PUploadSwitch;
@property(nonatomic) unsigned int p2PVerifyStream; // @dynamic p2PVerifyStream;
@property(nonatomic) unsigned int playerMaxCacheMs; // @dynamic playerMaxCacheMs;
@property(nonatomic) unsigned int playerMinCacheMs; // @dynamic playerMinCacheMs;
@property(nonatomic) unsigned long long qcAppid; // @dynamic qcAppid;
@property(nonatomic) unsigned long long qcBizid; // @dynamic qcBizid;
@property(nonatomic) unsigned int qosControlSwitch; // @dynamic qosControlSwitch;
@property(nonatomic) unsigned int qosReportIntervalSeconds; // @dynamic qosReportIntervalSeconds;
@property(nonatomic) unsigned int qosReportSwitch; // @dynamic qosReportSwitch;
@property(retain, nonatomic) QualityTagInfo *qualityTagInfo; // @dynamic qualityTagInfo;
@property(retain, nonatomic) NSString *rtmpPushUrl; // @dynamic rtmpPushUrl;
@property(nonatomic) unsigned int seiMode; // @dynamic seiMode;
@property(retain, nonatomic) NSString *streamId; // @dynamic streamId;
@property(nonatomic) unsigned int supportScreenRotate; // @dynamic supportScreenRotate;
@property(retain, nonatomic) NSMutableArray *svrSwitchList; // @dynamic svrSwitchList;
@property(nonatomic) unsigned int uploadMediaType; // @dynamic uploadMediaType;
@property(retain, nonatomic) NSString *userDefinePushArgs; // @dynamic userDefinePushArgs;
@property(retain, nonatomic) NSString *userDefineRecordId; // @dynamic userDefineRecordId;
@property(nonatomic) unsigned int videoHeight; // @dynamic videoHeight;
@property(nonatomic) unsigned int videoWidth; // @dynamic videoWidth;
@property(nonatomic) unsigned int wavejbmFlag; // @dynamic wavejbmFlag;
@property(nonatomic) unsigned int wavejbmMaxSpeedRate; // @dynamic wavejbmMaxSpeedRate;
@property(nonatomic) unsigned int wavejbmMinSpeedRate; // @dynamic wavejbmMinSpeedRate;
@property(nonatomic) unsigned int wavejbmMode; // @dynamic wavejbmMode;

@end

