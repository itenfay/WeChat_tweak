//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPReportParamsCommon : NSObject
{
    _Bool _downloadkit;
    _Bool _online;
    _Bool _p2p;
    long long _platform;
    NSString *_flowid;
    NSString *_playno;
    unsigned long long _step;
    long long _seq;
    NSString *_uin;
    NSString *_QQopenid;
    NSString *_WXopenid;
    long long _logintype;
    NSString *_guid;
    NSString *_uip;
    NSString *_cdnuip;
    NSString *_cdnip;
    long long _sstrength;
    long long _network;
    NSString *_protocol;
    NSString *_protocolVer;
    long long _speed;
    NSString *_device;
    NSString *_resolution;
    long long _testid;
    NSString *_osver;
    NSString *_p2pver;
    NSString *_appver;
    NSString *_playerver;
    long long _playertype;
    long long _cdnid;
    long long _scenesid;
    long long _playtype;
    long long _dltype;
    NSString *_vid;
    NSString *_definition;
    long long _fmt;
    long long _rate;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(nonatomic) long long fmt; // @synthesize fmt=_fmt;
@property(retain, nonatomic) NSString *definition; // @synthesize definition=_definition;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) long long dltype; // @synthesize dltype=_dltype;
@property(nonatomic) long long playtype; // @synthesize playtype=_playtype;
@property(nonatomic) long long scenesid; // @synthesize scenesid=_scenesid;
@property(nonatomic) long long cdnid; // @synthesize cdnid=_cdnid;
@property(nonatomic) long long playertype; // @synthesize playertype=_playertype;
@property(retain, nonatomic) NSString *playerver; // @synthesize playerver=_playerver;
@property(retain, nonatomic) NSString *appver; // @synthesize appver=_appver;
@property(retain, nonatomic) NSString *p2pver; // @synthesize p2pver=_p2pver;
@property(retain, nonatomic) NSString *osver; // @synthesize osver=_osver;
@property(nonatomic) long long testid; // @synthesize testid=_testid;
@property(retain, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) NSString *device; // @synthesize device=_device;
@property(nonatomic) long long speed; // @synthesize speed=_speed;
@property(retain, nonatomic) NSString *protocolVer; // @synthesize protocolVer=_protocolVer;
@property(retain, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(nonatomic) long long network; // @synthesize network=_network;
@property(nonatomic) long long sstrength; // @synthesize sstrength=_sstrength;
@property(nonatomic) _Bool p2p; // @synthesize p2p=_p2p;
@property(nonatomic) _Bool online; // @synthesize online=_online;
@property(nonatomic) _Bool downloadkit; // @synthesize downloadkit=_downloadkit;
@property(retain, nonatomic) NSString *cdnip; // @synthesize cdnip=_cdnip;
@property(retain, nonatomic) NSString *cdnuip; // @synthesize cdnuip=_cdnuip;
@property(retain, nonatomic) NSString *uip; // @synthesize uip=_uip;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) long long logintype; // @synthesize logintype=_logintype;
@property(retain, nonatomic) NSString *WXopenid; // @synthesize WXopenid=_WXopenid;
@property(retain, nonatomic) NSString *QQopenid; // @synthesize QQopenid=_QQopenid;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned long long step; // @synthesize step=_step;
@property(retain, nonatomic) NSString *playno; // @synthesize playno=_playno;
@property(retain, nonatomic) NSString *flowid; // @synthesize flowid=_flowid;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
- (void)setErrorCode:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

