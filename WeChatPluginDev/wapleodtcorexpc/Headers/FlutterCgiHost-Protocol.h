//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterCgiFinderExtInfo, FlutterCgiRequest;

@protocol FlutterCgiHost
- (void)sendFinderRequest:(FlutterCgiRequest *)arg1 extInfo:(FlutterCgiFinderExtInfo *)arg2 completion:(void (^)(FlutterCgiResponse *, FlutterError *))arg3;
- (void)sendRequest:(FlutterCgiRequest *)arg1 completion:(void (^)(FlutterCgiResponse *, FlutterError *))arg2;
@end

