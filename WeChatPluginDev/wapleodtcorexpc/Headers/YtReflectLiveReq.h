//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, YtDataPack_OC, YtImageInfo;

@interface YtReflectLiveReq
{
    int _platform;
    NSString *_app_id;
    NSString *_business_id;
    NSString *_person_id;
    NSString *_color_data;
    YtImageInfo *_eye_image;
    YtImageInfo *_mouth_image;
    YtDataPack_OC *_reflect_data;
    NSString *_live_image;
    NSString *_compare_image;
    NSString *_session_id;
    NSDictionary *_select_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *select_data; // @synthesize select_data=_select_data;
@property(retain, nonatomic) NSString *session_id; // @synthesize session_id=_session_id;
@property(retain, nonatomic) NSString *compare_image; // @synthesize compare_image=_compare_image;
@property(retain, nonatomic) NSString *live_image; // @synthesize live_image=_live_image;
@property(retain, nonatomic) YtDataPack_OC *reflect_data; // @synthesize reflect_data=_reflect_data;
@property(retain, nonatomic) YtImageInfo *mouth_image; // @synthesize mouth_image=_mouth_image;
@property(retain, nonatomic) YtImageInfo *eye_image; // @synthesize eye_image=_eye_image;
@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *color_data; // @synthesize color_data=_color_data;
@property(retain, nonatomic) NSString *person_id; // @synthesize person_id=_person_id;
@property(retain, nonatomic) NSString *business_id; // @synthesize business_id=_business_id;
@property(retain, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;

@end

