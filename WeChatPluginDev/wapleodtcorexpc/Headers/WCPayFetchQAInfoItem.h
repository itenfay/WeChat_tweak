//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayFetchQAInfoItem : NSObject
{
    NSString *_title;
    long long _jump_type;
    NSString *_jump_url;
    NSString *_username;
    NSString *_path;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *jump_url; // @synthesize jump_url=_jump_url;
@property(nonatomic) long long jump_type; // @synthesize jump_type=_jump_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)genFromDic:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

