//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderBuildLiteAppConfig : NSObject
{
    _Bool _is_transparent;
    _Bool _is_forbid_rightgesture;
    NSString *_app_id;
    NSString *_path;
    NSString *_query;
    NSString *_default_url;
    double _height_percent;
    double _half_height;
    long long _open_type;
    NSData *_extraData;
    NSString *_mini_version;
    long long _position;
}

- (void).cxx_destruct;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *mini_version; // @synthesize mini_version=_mini_version;
@property(retain, nonatomic) NSData *extraData; // @synthesize extraData=_extraData;
@property(nonatomic) _Bool is_forbid_rightgesture; // @synthesize is_forbid_rightgesture=_is_forbid_rightgesture;
@property(nonatomic) _Bool is_transparent; // @synthesize is_transparent=_is_transparent;
@property(nonatomic) long long open_type; // @synthesize open_type=_open_type;
@property(nonatomic) double half_height; // @synthesize half_height=_half_height;
@property(nonatomic) double height_percent; // @synthesize height_percent=_height_percent;
@property(copy, nonatomic) NSString *default_url; // @synthesize default_url=_default_url;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;
- (id)description;
- (id)initWithJSONString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)toJsonStr;

@end

