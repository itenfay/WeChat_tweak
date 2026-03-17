//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterError;

@protocol FlutterStreamHandler
- (FlutterError *)onCancelWithArguments:(id)arg1;
- (FlutterError *)onListenWithArguments:(id)arg1 eventSink:(void (^)(id))arg2;
@end

