//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BasicSecurityInfo : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_logo_url;
    long long _jump_type;
    NSString *_jump_h5_url;
    NSString *_tinyapp_username;
    NSString *_tinyapp_path;
    NSString *_jump_wording;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *jump_wording; // @synthesize jump_wording=_jump_wording;
@property(copy, nonatomic) NSString *tinyapp_path; // @synthesize tinyapp_path=_tinyapp_path;
@property(copy, nonatomic) NSString *tinyapp_username; // @synthesize tinyapp_username=_tinyapp_username;
@property(copy, nonatomic) NSString *jump_h5_url; // @synthesize jump_h5_url=_jump_h5_url;
@property(nonatomic) long long jump_type; // @synthesize jump_type=_jump_type;
@property(copy, nonatomic) NSString *logo_url; // @synthesize logo_url=_logo_url;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)genFromDic:(id)arg1;

@end

