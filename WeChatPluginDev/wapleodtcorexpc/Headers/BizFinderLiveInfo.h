//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class Finder_Data, FlutterStandardTypedData, NSNumber, NSString, WeApp_Data;

@interface BizFinderLiveInfo : NSObject
{
    NSString *_bizusername;
    NSString *_finder_feed_export_id;
    NSNumber *_refresh_interval;
    NSString *_title;
    NSNumber *_live_scene;
    NSString *_cover;
    NSNumber *_use_weapp;
    NSString *_finder_session_buffer;
    FlutterStandardTypedData *_data_buffer;
    WeApp_Data *_weapp_data;
    Finder_Data *_finder_data;
    NSNumber *_live_status;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithBizusername:(id)arg1 finder_feed_export_id:(id)arg2 refresh_interval:(id)arg3 title:(id)arg4 live_scene:(id)arg5 cover:(id)arg6 use_weapp:(id)arg7 finder_session_buffer:(id)arg8 data_buffer:(id)arg9 weapp_data:(id)arg10 finder_data:(id)arg11 live_status:(id)arg12;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *live_status; // @synthesize live_status=_live_status;
@property(retain, nonatomic) Finder_Data *finder_data; // @synthesize finder_data=_finder_data;
@property(retain, nonatomic) WeApp_Data *weapp_data; // @synthesize weapp_data=_weapp_data;
@property(retain, nonatomic) FlutterStandardTypedData *data_buffer; // @synthesize data_buffer=_data_buffer;
@property(copy, nonatomic) NSString *finder_session_buffer; // @synthesize finder_session_buffer=_finder_session_buffer;
@property(retain, nonatomic) NSNumber *use_weapp; // @synthesize use_weapp=_use_weapp;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) NSNumber *live_scene; // @synthesize live_scene=_live_scene;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *refresh_interval; // @synthesize refresh_interval=_refresh_interval;
@property(copy, nonatomic) NSString *finder_feed_export_id; // @synthesize finder_feed_export_id=_finder_feed_export_id;
@property(copy, nonatomic) NSString *bizusername; // @synthesize bizusername=_bizusername;
- (id)toList;
- (id)toBizServiceFinderLiveInfo;
- (id)toBizFinderLiveInfo;

@end

