//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPReportParamsLive : NSObject
{
    _Bool _use_p2p;
    _Bool _p2p_play;
    _Bool _isuserpay;
    _Bool _lookback;
    _Bool _live_tag;
    long long _ftime;
    NSString *_sip;
    NSString *_uip;
    NSString *_cdnuip;
    NSString *_iqq;
    NSString *_qqopen_id;
    NSString *_wxopen_id;
    NSString *_playno;
    long long _seq;
    NSString *_cdnid;
    NSString *_protocol;
    NSString *_protocolVer;
    long long _prdlength;
    long long _playad;
    NSString *_guid;
    NSString *_fplayerver;
    NSString *_dsip;
    long long _devtype;
    long long _nettype;
    long long _freetype;
    long long _platform;
    NSString *_device;
    NSString *_resolution;
    NSString *_osver;
    long long _playertype;
    NSString *_appver;
    long long _playtype;
    long long _scenesid;
    NSString *_p2pver;
    long long _livepid;
    long long _sid;
    long long _contentid;
    long long _playtime;
    NSString *_defSwitch;
    long long _live_type;
    NSString *_xserverip;
    NSString *_durl;
    long long _live_delay;
    NSString *_extraInfo;
    NSString *_spanId;
    NSString *_tuid;
    unsigned long long _step;
    long long _cnntime;
    long long _maxspeed;
    long long _testspeed;
    long long _downspeed;
    long long _recnncount;
    unsigned long long _loadingtime;
    long long _blockcount;
    unsigned long long _blocktime;
    long long _errorcode;
    long long _geturltime;
    NSString *_code;
    long long _get_stream_data_duration;
    long long _get_sync_frame_duration;
}

+ (id)modelCustomPropertyMapper;
- (void).cxx_destruct;
@property(nonatomic) long long get_sync_frame_duration; // @synthesize get_sync_frame_duration=_get_sync_frame_duration;
@property(nonatomic) long long get_stream_data_duration; // @synthesize get_stream_data_duration=_get_stream_data_duration;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) long long geturltime; // @synthesize geturltime=_geturltime;
@property(nonatomic) long long errorcode; // @synthesize errorcode=_errorcode;
@property(nonatomic) unsigned long long blocktime; // @synthesize blocktime=_blocktime;
@property(nonatomic) long long blockcount; // @synthesize blockcount=_blockcount;
@property(nonatomic) unsigned long long loadingtime; // @synthesize loadingtime=_loadingtime;
@property(nonatomic) long long recnncount; // @synthesize recnncount=_recnncount;
@property(nonatomic) long long downspeed; // @synthesize downspeed=_downspeed;
@property(nonatomic) long long testspeed; // @synthesize testspeed=_testspeed;
@property(nonatomic) long long maxspeed; // @synthesize maxspeed=_maxspeed;
@property(nonatomic) long long cnntime; // @synthesize cnntime=_cnntime;
@property(nonatomic) unsigned long long step; // @synthesize step=_step;
@property(copy, nonatomic) NSString *tuid; // @synthesize tuid=_tuid;
@property(copy, nonatomic) NSString *spanId; // @synthesize spanId=_spanId;
@property(retain, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) _Bool live_tag; // @synthesize live_tag=_live_tag;
@property(nonatomic) long long live_delay; // @synthesize live_delay=_live_delay;
@property(nonatomic) _Bool lookback; // @synthesize lookback=_lookback;
@property(retain, nonatomic) NSString *durl; // @synthesize durl=_durl;
@property(retain, nonatomic) NSString *xserverip; // @synthesize xserverip=_xserverip;
@property(nonatomic) long long live_type; // @synthesize live_type=_live_type;
@property(retain, nonatomic) NSString *defSwitch; // @synthesize defSwitch=_defSwitch;
@property(nonatomic) _Bool isuserpay; // @synthesize isuserpay=_isuserpay;
@property(nonatomic) long long playtime; // @synthesize playtime=_playtime;
@property(nonatomic) long long contentid; // @synthesize contentid=_contentid;
@property(nonatomic) long long sid; // @synthesize sid=_sid;
@property(nonatomic) long long livepid; // @synthesize livepid=_livepid;
@property(retain, nonatomic) NSString *p2pver; // @synthesize p2pver=_p2pver;
@property(nonatomic) _Bool p2p_play; // @synthesize p2p_play=_p2p_play;
@property(nonatomic) _Bool use_p2p; // @synthesize use_p2p=_use_p2p;
@property(nonatomic) long long scenesid; // @synthesize scenesid=_scenesid;
@property(nonatomic) long long playtype; // @synthesize playtype=_playtype;
@property(retain, nonatomic) NSString *appver; // @synthesize appver=_appver;
@property(nonatomic) long long playertype; // @synthesize playertype=_playertype;
@property(retain, nonatomic) NSString *osver; // @synthesize osver=_osver;
@property(retain, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) NSString *device; // @synthesize device=_device;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(nonatomic) long long freetype; // @synthesize freetype=_freetype;
@property(nonatomic) long long nettype; // @synthesize nettype=_nettype;
@property(nonatomic) long long devtype; // @synthesize devtype=_devtype;
@property(retain, nonatomic) NSString *dsip; // @synthesize dsip=_dsip;
@property(retain, nonatomic) NSString *fplayerver; // @synthesize fplayerver=_fplayerver;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) long long playad; // @synthesize playad=_playad;
@property(nonatomic) long long prdlength; // @synthesize prdlength=_prdlength;
@property(retain, nonatomic) NSString *protocolVer; // @synthesize protocolVer=_protocolVer;
@property(retain, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSString *cdnid; // @synthesize cdnid=_cdnid;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSString *playno; // @synthesize playno=_playno;
@property(retain, nonatomic) NSString *wxopen_id; // @synthesize wxopen_id=_wxopen_id;
@property(retain, nonatomic) NSString *qqopen_id; // @synthesize qqopen_id=_qqopen_id;
@property(retain, nonatomic) NSString *iqq; // @synthesize iqq=_iqq;
@property(retain, nonatomic) NSString *cdnuip; // @synthesize cdnuip=_cdnuip;
@property(retain, nonatomic) NSString *uip; // @synthesize uip=_uip;
@property(retain, nonatomic) NSString *sip; // @synthesize sip=_sip;
@property(nonatomic) long long ftime; // @synthesize ftime=_ftime;
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

