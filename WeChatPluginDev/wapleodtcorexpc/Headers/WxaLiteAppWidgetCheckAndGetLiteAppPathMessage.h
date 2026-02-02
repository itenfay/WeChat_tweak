//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WxaLiteAppWidgetCheckAndGetLiteAppPathMessage : NSObject
{
    _Bool _checkUpdate;
    _Bool _syncCheckUpdate;
    NSString *_appId;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAppId:(id)arg1 checkUpdate:(_Bool)arg2 syncCheckUpdate:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool syncCheckUpdate; // @synthesize syncCheckUpdate=_syncCheckUpdate;
@property(nonatomic) _Bool checkUpdate; // @synthesize checkUpdate=_checkUpdate;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toList;

@end

