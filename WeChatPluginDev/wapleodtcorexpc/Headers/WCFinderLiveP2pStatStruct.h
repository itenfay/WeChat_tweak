//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveP2pStatStruct : NSObject
{
    unsigned int _p2p_upload_switch;
    unsigned int _p2p_download_switch;
    unsigned int _candidates;
    unsigned int _standbys;
    unsigned int _load;
    unsigned int _xs_4xx_status;
    unsigned int _total_pieces;
    unsigned int _verify_pieces;
    unsigned int _invalid_pieces;
    unsigned int _tag_missed_invalid_pieces;
    unsigned int _abnormal_ts_count;
    unsigned int _play_ori_by_no_sei;
    unsigned int _buffer_length;
    unsigned int _max_cdn_firstframe;
    unsigned int _max_p2p_firstframe;
    unsigned int _first_frame_t;
    unsigned int _active_punch_total;
    unsigned int _acitve_punch_succ;
    unsigned int _passive_punch_total;
    unsigned int _passive_punch_succ;
    unsigned int _punch_hole;
    unsigned int _played_bytes;
    unsigned int _fullstream_bytes;
    unsigned int _cdn_substream_bytes;
    unsigned int _fillup_bytes;
    unsigned int _xntp_bytes;
    unsigned int _turn_bytes;
    unsigned int _punch_bytes;
    unsigned int _tlive_errmsg_early;
    unsigned int _tlive_errmsg_miss;
    unsigned int _tlive_errmsg_expire;
    unsigned int _subscribe_failure_c;
    unsigned int _subscribe_refused_c;
    unsigned int _subscribe_request_c;
    unsigned int _subscribe_success_c;
    unsigned int _subscribe_timeout_c;
    unsigned int _toofar_subscribe_c;
    unsigned int _too_depth_subscribe_c;
    unsigned int _checkout_subscribe_c;
    unsigned int _init_sdk_time;
    unsigned long long _liveId;
    NSString *_finderNickname;
    unsigned long long _p2pBytes;
    unsigned long long _cdnBytes;
    NSString *_natType;
    NSString *_isp;
    NSString *_url;
    NSString *_xs_full_url;
    NSString *_uuid;
    NSString *_pieceid;
    NSString *_send;
    NSString *_recv;
    NSString *_p2pSdkVersion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *p2pSdkVersion; // @synthesize p2pSdkVersion=_p2pSdkVersion;
@property(nonatomic) unsigned int init_sdk_time; // @synthesize init_sdk_time=_init_sdk_time;
@property(nonatomic) unsigned int checkout_subscribe_c; // @synthesize checkout_subscribe_c=_checkout_subscribe_c;
@property(nonatomic) unsigned int too_depth_subscribe_c; // @synthesize too_depth_subscribe_c=_too_depth_subscribe_c;
@property(nonatomic) unsigned int toofar_subscribe_c; // @synthesize toofar_subscribe_c=_toofar_subscribe_c;
@property(nonatomic) unsigned int subscribe_timeout_c; // @synthesize subscribe_timeout_c=_subscribe_timeout_c;
@property(nonatomic) unsigned int subscribe_success_c; // @synthesize subscribe_success_c=_subscribe_success_c;
@property(nonatomic) unsigned int subscribe_request_c; // @synthesize subscribe_request_c=_subscribe_request_c;
@property(nonatomic) unsigned int subscribe_refused_c; // @synthesize subscribe_refused_c=_subscribe_refused_c;
@property(nonatomic) unsigned int subscribe_failure_c; // @synthesize subscribe_failure_c=_subscribe_failure_c;
@property(nonatomic) unsigned int tlive_errmsg_expire; // @synthesize tlive_errmsg_expire=_tlive_errmsg_expire;
@property(nonatomic) unsigned int tlive_errmsg_miss; // @synthesize tlive_errmsg_miss=_tlive_errmsg_miss;
@property(nonatomic) unsigned int tlive_errmsg_early; // @synthesize tlive_errmsg_early=_tlive_errmsg_early;
@property(nonatomic) unsigned int punch_bytes; // @synthesize punch_bytes=_punch_bytes;
@property(nonatomic) unsigned int turn_bytes; // @synthesize turn_bytes=_turn_bytes;
@property(nonatomic) unsigned int xntp_bytes; // @synthesize xntp_bytes=_xntp_bytes;
@property(nonatomic) unsigned int fillup_bytes; // @synthesize fillup_bytes=_fillup_bytes;
@property(nonatomic) unsigned int cdn_substream_bytes; // @synthesize cdn_substream_bytes=_cdn_substream_bytes;
@property(nonatomic) unsigned int fullstream_bytes; // @synthesize fullstream_bytes=_fullstream_bytes;
@property(nonatomic) unsigned int played_bytes; // @synthesize played_bytes=_played_bytes;
@property(nonatomic) unsigned int punch_hole; // @synthesize punch_hole=_punch_hole;
@property(nonatomic) unsigned int passive_punch_succ; // @synthesize passive_punch_succ=_passive_punch_succ;
@property(nonatomic) unsigned int passive_punch_total; // @synthesize passive_punch_total=_passive_punch_total;
@property(nonatomic) unsigned int acitve_punch_succ; // @synthesize acitve_punch_succ=_acitve_punch_succ;
@property(nonatomic) unsigned int active_punch_total; // @synthesize active_punch_total=_active_punch_total;
@property(nonatomic) unsigned int first_frame_t; // @synthesize first_frame_t=_first_frame_t;
@property(nonatomic) unsigned int max_p2p_firstframe; // @synthesize max_p2p_firstframe=_max_p2p_firstframe;
@property(nonatomic) unsigned int max_cdn_firstframe; // @synthesize max_cdn_firstframe=_max_cdn_firstframe;
@property(nonatomic) unsigned int buffer_length; // @synthesize buffer_length=_buffer_length;
@property(nonatomic) unsigned int play_ori_by_no_sei; // @synthesize play_ori_by_no_sei=_play_ori_by_no_sei;
@property(nonatomic) unsigned int abnormal_ts_count; // @synthesize abnormal_ts_count=_abnormal_ts_count;
@property(copy, nonatomic) NSString *recv; // @synthesize recv=_recv;
@property(copy, nonatomic) NSString *send; // @synthesize send=_send;
@property(copy, nonatomic) NSString *pieceid; // @synthesize pieceid=_pieceid;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned int tag_missed_invalid_pieces; // @synthesize tag_missed_invalid_pieces=_tag_missed_invalid_pieces;
@property(nonatomic) unsigned int invalid_pieces; // @synthesize invalid_pieces=_invalid_pieces;
@property(nonatomic) unsigned int verify_pieces; // @synthesize verify_pieces=_verify_pieces;
@property(nonatomic) unsigned int total_pieces; // @synthesize total_pieces=_total_pieces;
@property(nonatomic) unsigned int xs_4xx_status; // @synthesize xs_4xx_status=_xs_4xx_status;
@property(copy, nonatomic) NSString *xs_full_url; // @synthesize xs_full_url=_xs_full_url;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *isp; // @synthesize isp=_isp;
@property(nonatomic) unsigned int load; // @synthesize load=_load;
@property(nonatomic) unsigned int standbys; // @synthesize standbys=_standbys;
@property(nonatomic) unsigned int candidates; // @synthesize candidates=_candidates;
@property(nonatomic) unsigned int p2p_download_switch; // @synthesize p2p_download_switch=_p2p_download_switch;
@property(nonatomic) unsigned int p2p_upload_switch; // @synthesize p2p_upload_switch=_p2p_upload_switch;
@property(copy, nonatomic) NSString *natType; // @synthesize natType=_natType;
@property(nonatomic) unsigned long long cdnBytes; // @synthesize cdnBytes=_cdnBytes;
@property(nonatomic) unsigned long long p2pBytes; // @synthesize p2pBytes=_p2pBytes;
@property(copy, nonatomic) NSString *finderNickname; // @synthesize finderNickname=_finderNickname;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)toReport;

@end

