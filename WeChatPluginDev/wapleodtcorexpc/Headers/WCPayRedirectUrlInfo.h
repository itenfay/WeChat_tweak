//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayRedirectUrlInfo : NSObject
{
    long long _type;
    NSString *_appid;
    NSString *_app_version;
    NSString *_path;
    NSString *_button_name;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *button_name; // @synthesize button_name=_button_name;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)genFromDic:(id)arg1;

@end

