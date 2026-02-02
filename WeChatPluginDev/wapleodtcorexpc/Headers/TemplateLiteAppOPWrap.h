//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TemplateLiteAppOPWrap : NSObject
{
    _Bool _isTransparent;
    _Bool _isForbidRightgesture;
    NSString *_appid;
    NSString *_path;
    NSString *_query;
    NSString *_minVersion;
    unsigned long long _openType;
    double _heightPercent;
    NSString *_defaultUrl;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)liteAppOPWrapWithJSON:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *defaultUrl; // @synthesize defaultUrl=_defaultUrl;
@property(nonatomic) double heightPercent; // @synthesize heightPercent=_heightPercent;
@property(nonatomic) _Bool isForbidRightgesture; // @synthesize isForbidRightgesture=_isForbidRightgesture;
@property(nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
@property(nonatomic) unsigned long long openType; // @synthesize openType=_openType;
@property(copy, nonatomic) NSString *minVersion; // @synthesize minVersion=_minVersion;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;

@end

