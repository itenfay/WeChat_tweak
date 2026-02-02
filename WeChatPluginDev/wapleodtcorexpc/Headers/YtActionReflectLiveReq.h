//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray, NSString, YtDataPack_OC, YtImageInfo;

@interface YtActionReflectLiveReq
{
    int _platform;
    int _mode;
    NSString *_app_id;
    NSString *_business_id;
    NSString *_person_id;
    NSString *_color_data;
    YtDataPack_OC *_reflect_data;
    YtImageInfo *_live_image;
    YtImageInfo *_compare_image;
    YtImageInfo *_eye_image;
    YtImageInfo *_mouth_image;
    NSString *_session_id;
    NSDictionary *_select_data;
    NSString *_action_video;
    NSString *_action_str;
    NSString *_config;
    NSMutableArray *_depth;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *depth; // @synthesize depth=_depth;
@property(retain, nonatomic) NSString *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *action_str; // @synthesize action_str=_action_str;
@property(retain, nonatomic) NSString *action_video; // @synthesize action_video=_action_video;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSDictionary *select_data; // @synthesize select_data=_select_data;
@property(retain, nonatomic) NSString *session_id; // @synthesize session_id=_session_id;
@property(retain, nonatomic) YtImageInfo *mouth_image; // @synthesize mouth_image=_mouth_image;
@property(retain, nonatomic) YtImageInfo *eye_image; // @synthesize eye_image=_eye_image;
@property(retain, nonatomic) YtImageInfo *compare_image; // @synthesize compare_image=_compare_image;
@property(retain, nonatomic) YtImageInfo *live_image; // @synthesize live_image=_live_image;
@property(retain, nonatomic) YtDataPack_OC *reflect_data; // @synthesize reflect_data=_reflect_data;
@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *color_data; // @synthesize color_data=_color_data;
@property(retain, nonatomic) NSString *person_id; // @synthesize person_id=_person_id;
@property(retain, nonatomic) NSString *business_id; // @synthesize business_id=_business_id;
@property(retain, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;

@end

