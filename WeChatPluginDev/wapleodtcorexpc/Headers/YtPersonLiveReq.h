//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, YtImageInfo, YtPersonLive;

@interface YtPersonLiveReq
{
    int _live_type;
    NSString *_app_id;
    NSString *_business_name;
    NSString *_person_id;
    YtPersonLive *_livedata;
    NSString *_req_type;
    NSString *_person_type;
    NSString *_mp_business_buffer;
    NSString *_request_id;
    YtImageInfo *_extra_best_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YtImageInfo *extra_best_image; // @synthesize extra_best_image=_extra_best_image;
@property(retain, nonatomic) NSString *request_id; // @synthesize request_id=_request_id;
@property(retain, nonatomic) NSString *mp_business_buffer; // @synthesize mp_business_buffer=_mp_business_buffer;
@property(retain, nonatomic) NSString *person_type; // @synthesize person_type=_person_type;
@property(retain, nonatomic) NSString *req_type; // @synthesize req_type=_req_type;
@property(nonatomic) int live_type; // @synthesize live_type=_live_type;
@property(retain, nonatomic) YtPersonLive *livedata; // @synthesize livedata=_livedata;
@property(retain, nonatomic) NSString *person_id; // @synthesize person_id=_person_id;
@property(retain, nonatomic) NSString *business_name; // @synthesize business_name=_business_name;
@property(retain, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;

@end

