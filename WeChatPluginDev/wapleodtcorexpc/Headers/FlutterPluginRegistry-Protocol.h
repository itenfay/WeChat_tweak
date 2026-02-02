//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol FlutterPluginRegistrar;

@protocol FlutterPluginRegistry <NSObject>
- (NSObject *)valuePublishedByPlugin:(NSString *)arg1;
- (_Bool)hasPlugin:(NSString *)arg1;
- (NSObject<FlutterPluginRegistrar> *)registrarForPlugin:(NSString *)arg1;
@end

