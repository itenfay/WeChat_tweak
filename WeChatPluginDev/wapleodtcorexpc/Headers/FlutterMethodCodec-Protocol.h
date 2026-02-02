//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterError, FlutterMethodCall, NSData;

@protocol FlutterMethodCodec
+ (id)sharedInstance;
- (id)decodeEnvelope:(NSData *)arg1;
- (NSData *)encodeErrorEnvelope:(FlutterError *)arg1;
- (NSData *)encodeSuccessEnvelope:(id)arg1;
- (FlutterMethodCall *)decodeMethodCall:(NSData *)arg1;
- (NSData *)encodeMethodCall:(FlutterMethodCall *)arg1;
@end

