//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@protocol FlutterNavigatorHost
- (void)popPlugin:(NSString *)arg1 route:(NSString *)arg2 error:(id *)arg3;
- (void)pushPlugin:(NSString *)arg1 route:(NSString *)arg2 arguments:(NSDictionary *)arg3 completion:(void (^)(FlutterError *))arg4;
- (void)enableSwipeBackWithError:(id *)arg1;
- (void)disableSwipeBackWithError:(id *)arg1;
@end

