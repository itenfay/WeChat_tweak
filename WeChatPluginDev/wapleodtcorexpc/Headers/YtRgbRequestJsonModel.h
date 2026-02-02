//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface YtRgbRequestJsonModel
{
    int _platform;
    NSString *_app_id;
    NSString *_session_id;
    NSString *_machine;
    NSString *_systemName;
    NSString *_systemVersion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(retain, nonatomic) NSString *machine; // @synthesize machine=_machine;
@property(retain, nonatomic) NSString *session_id; // @synthesize session_id=_session_id;
@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;

@end

