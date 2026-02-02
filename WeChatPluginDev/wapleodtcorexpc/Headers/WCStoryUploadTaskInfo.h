//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WCStoryUploadTaskInfo : NSObject
{
    _Bool _isRetrying;
    _Bool _startCndUpload;
    _Bool _isSelectFromAlbum;
    _Bool _bCgiPosting;
    unsigned int _createTime;
    unsigned int _retryCount;
    unsigned int _enterQueueTime;
    unsigned int _startUploadTime;
    unsigned int _finishUploadTime;
    unsigned int _firstFailTime;
    unsigned int _lastFailTime;
    int _retCode;
    int _cgiRetCode;
    unsigned int _audioChannelsPerFrame;
    NSString *_tid;
    NSString *_clientId;
    NSString *_videoPath;
    NSString *_thumbPath;
    NSString *_localInfo;
    unsigned long long _scope;
    NSData *_localInfoBuf;
    double _duration;
    long long _totalsize;
    NSMutableArray *_originImageMd5s;
    NSString *_videoUrl;
    NSString *_md5;
    NSString *_videoMd5;
    NSString *_thumbUrl;
    NSString *_thumbMd5;
    NSString *_reportXml;
    NSString *_originVideoArgs;
    NSString *_exportVideoPath;
    long long _errorType;
    NSString *_fileId;
    NSString *_nsCdnStatInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_originImageMd5s;
+ (void)PBArrayAdd_startCndUpload;
+ (void)PBArrayAdd_scope;
+ (void)PBArrayAdd_audioChannelsPerFrame;
+ (void)PBArrayAdd_isSelectFromAlbum;
+ (void)PBArrayAdd_exportVideoPath;
+ (void)PBArrayAdd_originVideoArgs;
+ (void)PBArrayAdd_finishUploadTime;
+ (void)PBArrayAdd_retCode;
+ (void)PBArrayAdd_reportXml;
+ (void)PBArrayAdd_totalsize;
+ (void)PBArrayAdd_errorType;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_localInfoBuf;
+ (void)PBArrayAdd_bCgiPosting;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_videoMd5;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_lastFailTime;
+ (void)PBArrayAdd_firstFailTime;
+ (void)PBArrayAdd_startUploadTime;
+ (void)PBArrayAdd_enterQueueTime;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_isRetrying;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_localInfo;
+ (void)PBArrayAdd_clientId;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsCdnStatInfo; // @synthesize nsCdnStatInfo=_nsCdnStatInfo;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) _Bool bCgiPosting; // @synthesize bCgiPosting=_bCgiPosting;
@property(nonatomic) _Bool isSelectFromAlbum; // @synthesize isSelectFromAlbum=_isSelectFromAlbum;
@property(nonatomic) unsigned int audioChannelsPerFrame; // @synthesize audioChannelsPerFrame=_audioChannelsPerFrame;
@property(retain, nonatomic) NSString *exportVideoPath; // @synthesize exportVideoPath=_exportVideoPath;
@property(retain, nonatomic) NSString *originVideoArgs; // @synthesize originVideoArgs=_originVideoArgs;
@property(retain, nonatomic) NSString *reportXml; // @synthesize reportXml=_reportXml;
@property(retain, nonatomic) NSString *thumbMd5; // @synthesize thumbMd5=_thumbMd5;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *videoMd5; // @synthesize videoMd5=_videoMd5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSMutableArray *originImageMd5s; // @synthesize originImageMd5s=_originImageMd5s;
@property(nonatomic) _Bool startCndUpload; // @synthesize startCndUpload=_startCndUpload;
@property(nonatomic) int cgiRetCode; // @synthesize cgiRetCode=_cgiRetCode;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
@property(nonatomic) unsigned int lastFailTime; // @synthesize lastFailTime=_lastFailTime;
@property(nonatomic) unsigned int firstFailTime; // @synthesize firstFailTime=_firstFailTime;
@property(nonatomic) unsigned int finishUploadTime; // @synthesize finishUploadTime=_finishUploadTime;
@property(nonatomic) unsigned int startUploadTime; // @synthesize startUploadTime=_startUploadTime;
@property(nonatomic) unsigned int enterQueueTime; // @synthesize enterQueueTime=_enterQueueTime;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool isRetrying; // @synthesize isRetrying=_isRetrying;
@property(nonatomic) long long totalsize; // @synthesize totalsize=_totalsize;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSData *localInfoBuf; // @synthesize localInfoBuf=_localInfoBuf;
@property(nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSString *localInfo; // @synthesize localInfo=_localInfo;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (_Bool)isStartUpload;
@property(readonly, copy) NSString *description;
- (_Bool)isRetryTimeout;
- (id)getCDNReportInfo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

