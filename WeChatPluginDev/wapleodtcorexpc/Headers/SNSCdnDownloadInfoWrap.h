//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnTaskInfo, NSArray, NSString;

@interface SNSCdnDownloadInfoWrap : NSObject
{
    _Bool _bUseDCIP;
    _Bool _bUseXorEncrypt;
    int _filetype;
    int _downloadMode;
    unsigned int _predownloadPercent;
    NSString *_clientId;
    NSString *_dataUrl;
    NSString *_savePath;
    NSArray *_arryIP;
    NSString *_referUrl;
    unsigned long long _xorEncryKey;
    CdnTaskInfo *_taskInfo;
    unsigned long long _m_ui64TaskCreateTime;
    NSString *_videoColdRule;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *videoColdRule; // @synthesize videoColdRule=_videoColdRule;
@property(nonatomic) unsigned long long m_ui64TaskCreateTime; // @synthesize m_ui64TaskCreateTime=_m_ui64TaskCreateTime;
@property(retain, nonatomic) CdnTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(nonatomic) unsigned long long xorEncryKey; // @synthesize xorEncryKey=_xorEncryKey;
@property(nonatomic) _Bool bUseXorEncrypt; // @synthesize bUseXorEncrypt=_bUseXorEncrypt;
@property(nonatomic) unsigned int predownloadPercent; // @synthesize predownloadPercent=_predownloadPercent;
@property(nonatomic) int downloadMode; // @synthesize downloadMode=_downloadMode;
@property(nonatomic) _Bool bUseDCIP; // @synthesize bUseDCIP=_bUseDCIP;
@property(retain, nonatomic) NSString *referUrl; // @synthesize referUrl=_referUrl;
@property(retain, nonatomic) NSArray *arryIP; // @synthesize arryIP=_arryIP;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(nonatomic) int filetype; // @synthesize filetype=_filetype;

@end

