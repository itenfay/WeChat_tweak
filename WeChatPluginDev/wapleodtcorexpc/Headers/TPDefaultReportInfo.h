//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TPDefaultReportInfo : NSObject
{
    _Bool _online;
    _Bool _enableP2p;
    long long _testId;
    long long _cdnId;
    long long _dlType;
    long long _loginType;
    long long _mediaFormat;
    long long _mediaRate;
    long long _cdnUrlIndex;
    long long _platform;
    double _mediaDuration;
    NSString *_uin;
    NSString *_qqOpenId;
    NSString *_wxOpenId;
    NSString *_guid;
    NSString *_uip;
    NSString *_cdnUip;
    NSString *_cdnIp;
    NSString *_appVersion;
    NSString *_vid;
    NSString *_mediaResolution;
    long long _subtitleCdnType;
    long long _subtitleUrlIndex;
    long long _freeType;
    long long _scenesId;
    NSMutableDictionary *_extraReportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extraReportInfo; // @synthesize extraReportInfo=_extraReportInfo;
@property(nonatomic) long long scenesId; // @synthesize scenesId=_scenesId;
@property(nonatomic) long long freeType; // @synthesize freeType=_freeType;
@property(nonatomic) long long subtitleUrlIndex; // @synthesize subtitleUrlIndex=_subtitleUrlIndex;
@property(nonatomic) long long subtitleCdnType; // @synthesize subtitleCdnType=_subtitleCdnType;
@property(retain, nonatomic) NSString *mediaResolution; // @synthesize mediaResolution=_mediaResolution;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *cdnIp; // @synthesize cdnIp=_cdnIp;
@property(retain, nonatomic) NSString *cdnUip; // @synthesize cdnUip=_cdnUip;
@property(retain, nonatomic) NSString *uip; // @synthesize uip=_uip;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSString *wxOpenId; // @synthesize wxOpenId=_wxOpenId;
@property(retain, nonatomic) NSString *qqOpenId; // @synthesize qqOpenId=_qqOpenId;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) double mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(nonatomic) long long cdnUrlIndex; // @synthesize cdnUrlIndex=_cdnUrlIndex;
@property(nonatomic) long long mediaRate; // @synthesize mediaRate=_mediaRate;
@property(nonatomic) long long mediaFormat; // @synthesize mediaFormat=_mediaFormat;
@property(nonatomic) long long loginType; // @synthesize loginType=_loginType;
@property(nonatomic) long long dlType; // @synthesize dlType=_dlType;
@property(nonatomic) long long cdnId; // @synthesize cdnId=_cdnId;
@property(nonatomic) long long testId; // @synthesize testId=_testId;
@property(nonatomic) _Bool enableP2p; // @synthesize enableP2p=_enableP2p;
@property(nonatomic) _Bool online; // @synthesize online=_online;
- (long long)playType;

@end

