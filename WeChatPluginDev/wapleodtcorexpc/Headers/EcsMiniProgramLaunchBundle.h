//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EcsMiniProgramLaunchViewModeExtraData, NSArray, NSNumber, NSString;

@interface EcsMiniProgramLaunchBundle : NSObject
{
    NSString *_appid;
    NSString *_username;
    NSString *_path;
    NSNumber *_scene;
    NSString *_scene_note;
    NSString *_extra_data;
    NSString *_referrer_info_extra_data;
    NSNumber *_app_version;
    NSNumber *_isHalfPage;
    NSNumber *_ecs_open_scene;
    NSNumber *_isSilentLaunch;
    EcsMiniProgramLaunchViewModeExtraData *_viewModeExtraData;
    NSNumber *_bForbidExpandGesture;
    NSArray *_featureList;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAppid:(id)arg1 username:(id)arg2 path:(id)arg3 scene:(id)arg4 scene_note:(id)arg5 extra_data:(id)arg6 referrer_info_extra_data:(id)arg7 app_version:(id)arg8 isHalfPage:(id)arg9 ecs_open_scene:(id)arg10 isSilentLaunch:(id)arg11 viewModeExtraData:(id)arg12 bForbidExpandGesture:(id)arg13 featureList:(id)arg14;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *featureList; // @synthesize featureList=_featureList;
@property(retain, nonatomic) NSNumber *bForbidExpandGesture; // @synthesize bForbidExpandGesture=_bForbidExpandGesture;
@property(retain, nonatomic) EcsMiniProgramLaunchViewModeExtraData *viewModeExtraData; // @synthesize viewModeExtraData=_viewModeExtraData;
@property(retain, nonatomic) NSNumber *isSilentLaunch; // @synthesize isSilentLaunch=_isSilentLaunch;
@property(retain, nonatomic) NSNumber *ecs_open_scene; // @synthesize ecs_open_scene=_ecs_open_scene;
@property(retain, nonatomic) NSNumber *isHalfPage; // @synthesize isHalfPage=_isHalfPage;
@property(retain, nonatomic) NSNumber *app_version; // @synthesize app_version=_app_version;
@property(copy, nonatomic) NSString *referrer_info_extra_data; // @synthesize referrer_info_extra_data=_referrer_info_extra_data;
@property(copy, nonatomic) NSString *extra_data; // @synthesize extra_data=_extra_data;
@property(copy, nonatomic) NSString *scene_note; // @synthesize scene_note=_scene_note;
@property(retain, nonatomic) NSNumber *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (id)toList;

@end

