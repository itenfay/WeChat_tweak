//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSNumber, NSString;

@interface WeApp_Data : NSObject
{
    NSString *_appid;
    NSNumber *_version_type;
    FlutterStandardTypedData *_data_buffer;
    NSString *_path;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAppid:(id)arg1 version_type:(id)arg2 data_buffer:(id)arg3 path:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) FlutterStandardTypedData *data_buffer; // @synthesize data_buffer=_data_buffer;
@property(retain, nonatomic) NSNumber *version_type; // @synthesize version_type=_version_type;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (id)toList;

@end

