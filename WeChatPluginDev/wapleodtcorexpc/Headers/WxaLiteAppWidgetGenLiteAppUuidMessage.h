//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WxaLiteAppWidgetGenLiteAppUuidMessage : NSObject
{
    NSString *_appId;
    NSString *_page;
    NSString *_path;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAppId:(id)arg1 page:(id)arg2 path:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toList;

@end

