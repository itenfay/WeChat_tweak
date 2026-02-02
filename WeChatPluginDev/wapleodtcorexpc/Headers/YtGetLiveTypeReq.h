//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface YtGetLiveTypeReq
{
    int _platform;
    NSString *_app_id;
    NSString *_business_id;
    NSString *_person_id;
    NSString *_session_id;
    NSDictionary *_select_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *select_data; // @synthesize select_data=_select_data;
@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *session_id; // @synthesize session_id=_session_id;
@property(retain, nonatomic) NSString *person_id; // @synthesize person_id=_person_id;
@property(retain, nonatomic) NSString *business_id; // @synthesize business_id=_business_id;
@property(retain, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;

@end

