//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WxaLiteAppWidgetShowViewMessage : NSObject
{
    _Bool _isTransparent;
    NSString *_appId;
    NSString *_page;
    NSString *_query;
    NSString *_referrerInfo;
    NSString *_path;
    NSString *_signatureKey;
    long long _appUuid;
    NSString *_sourceType;
    NSArray *_enableActions;
    NSArray *_enableViews;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAppId:(id)arg1 page:(id)arg2 query:(id)arg3 referrerInfo:(id)arg4 path:(id)arg5 signatureKey:(id)arg6 appUuid:(long long)arg7 isTransparent:(_Bool)arg8 sourceType:(id)arg9 enableActions:(id)arg10 enableViews:(id)arg11;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *enableViews; // @synthesize enableViews=_enableViews;
@property(copy, nonatomic) NSArray *enableActions; // @synthesize enableActions=_enableActions;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
@property(nonatomic) long long appUuid; // @synthesize appUuid=_appUuid;
@property(copy, nonatomic) NSString *signatureKey; // @synthesize signatureKey=_signatureKey;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *referrerInfo; // @synthesize referrerInfo=_referrerInfo;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toList;

@end

