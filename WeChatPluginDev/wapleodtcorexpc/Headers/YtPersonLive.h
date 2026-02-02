//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSString, YtDataPack_OC;
@protocol YtFaceFrame_OC;

@interface YtPersonLive
{
    int _platform;
    NSArray<YtFaceFrame_OC> *_frames;
    NSString *_validate_data;
    NSString *_voice;
    NSString *_mouth_move;
    NSString *_mouth_lip_reading;
    YtDataPack_OC *_reflect_data;
    NSString *_color_data;
    NSString *_client_version;
    NSDictionary *_select_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *select_data; // @synthesize select_data=_select_data;
@property(retain, nonatomic) NSString *client_version; // @synthesize client_version=_client_version;
@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *color_data; // @synthesize color_data=_color_data;
@property(retain, nonatomic) YtDataPack_OC *reflect_data; // @synthesize reflect_data=_reflect_data;
@property(retain, nonatomic) NSString *mouth_lip_reading; // @synthesize mouth_lip_reading=_mouth_lip_reading;
@property(retain, nonatomic) NSString *mouth_move; // @synthesize mouth_move=_mouth_move;
@property(retain, nonatomic) NSString *voice; // @synthesize voice=_voice;
@property(retain, nonatomic) NSString *validate_data; // @synthesize validate_data=_validate_data;
@property(retain, nonatomic) NSArray<YtFaceFrame_OC> *frames; // @synthesize frames=_frames;

@end

