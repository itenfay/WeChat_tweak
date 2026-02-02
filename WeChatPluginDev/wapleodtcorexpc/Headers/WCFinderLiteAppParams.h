//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiteAppParams : NSObject
{
    NSString *_appId;
    NSString *_page;
    NSString *_query;
    NSString *_defaultUrl;
    NSString *_extInfo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *defaultUrl; // @synthesize defaultUrl=_defaultUrl;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (_Bool)isValid;

@end

