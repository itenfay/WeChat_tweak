//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIViewController;

@protocol FlutterNavigatorDelegate <NSObject>
- (void)pushFromViewController:(UIViewController *)arg1 plugin:(NSString *)arg2 route:(NSString *)arg3 arguments:(NSDictionary *)arg4;
@end

