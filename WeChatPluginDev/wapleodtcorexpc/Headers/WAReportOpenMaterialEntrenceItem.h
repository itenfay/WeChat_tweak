//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportOpenMaterialEntrenceItem
{
    unsigned int _scene_id;
    NSString *_session;
    NSString *_weapp_id;
    NSString *_weapp_name;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *weapp_name; // @synthesize weapp_name=_weapp_name;
@property(retain, nonatomic) NSString *weapp_id; // @synthesize weapp_id=_weapp_id;
@property(nonatomic) unsigned int scene_id; // @synthesize scene_id=_scene_id;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
- (id)reportString;
- (int)reportID;

@end

