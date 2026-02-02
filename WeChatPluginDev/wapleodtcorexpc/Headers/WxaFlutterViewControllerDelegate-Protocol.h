//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FlutterEngine, NSDictionary, NSString;

@protocol WxaFlutterViewControllerDelegate <NSObject>
- (FlutterEngine *)getFlutterEngine;
- (NSDictionary *)generateParams;
- (NSDictionary *)getFlutterViewParams;
- (NSString *)getFlutterViewName;
- (NSString *)getActivityId;
@end

