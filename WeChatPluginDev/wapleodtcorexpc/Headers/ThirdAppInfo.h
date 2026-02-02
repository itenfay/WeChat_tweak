//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSString;

@interface ThirdAppInfo : NSObject
{
    NSString *_appId;
    NSString *_name;
    NSString *_iconUrl;
    FlutterStandardTypedData *_iconData;
    FlutterStandardTypedData *_grayIconData;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAppId:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 iconData:(id)arg4 grayIconData:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *grayIconData; // @synthesize grayIconData=_grayIconData;
@property(retain, nonatomic) FlutterStandardTypedData *iconData; // @synthesize iconData=_iconData;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toList;

@end

