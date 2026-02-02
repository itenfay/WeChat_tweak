//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;
@protocol YtRawImgData_OC;

@interface YtDataPack_OC
{
    float _offset_sys;
    int _config_begin;
    int _frame_num;
    int _landmark_num;
    int _width;
    int _height;
    NSArray<YtRawImgData_OC> *_images_data;
    NSArray *_changepoint_time_list;
    long long _begin_time;
    long long _changepoint_time;
    NSString *_log;
    NSString *_version;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *log; // @synthesize log=_log;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) int landmark_num; // @synthesize landmark_num=_landmark_num;
@property(nonatomic) int frame_num; // @synthesize frame_num=_frame_num;
@property(nonatomic) int config_begin; // @synthesize config_begin=_config_begin;
@property(nonatomic) float offset_sys; // @synthesize offset_sys=_offset_sys;
@property(nonatomic) long long changepoint_time; // @synthesize changepoint_time=_changepoint_time;
@property(nonatomic) long long begin_time; // @synthesize begin_time=_begin_time;
@property(retain, nonatomic) NSArray *changepoint_time_list; // @synthesize changepoint_time_list=_changepoint_time_list;
@property(retain, nonatomic) NSArray<YtRawImgData_OC> *images_data; // @synthesize images_data=_images_data;

@end

