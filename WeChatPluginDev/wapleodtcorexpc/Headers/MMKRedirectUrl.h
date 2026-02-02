//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKRedirectUrl : NSObject
{
    int _type;
    NSString *_appid;
    NSString *_appVersion;
    NSString *_path;
    NSString *_btnName;
}

+ (id)KRedirectUrlWithType:(int)arg1 appid:(id)arg2 appVersion:(id)arg3 path:(id)arg4 btnName:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *btnName; // @synthesize btnName=_btnName;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (id)initWithType:(int)arg1 appid:(id)arg2 appVersion:(id)arg3 path:(id)arg4 btnName:(id)arg5;

@end

