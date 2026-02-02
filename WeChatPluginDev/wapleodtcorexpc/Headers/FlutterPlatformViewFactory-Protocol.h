//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol FlutterMessageCodec, FlutterPlatformView;

@protocol FlutterPlatformViewFactory <NSObject>
- (NSObject<FlutterPlatformView> *)createWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;

@optional
- (NSObject<FlutterMessageCodec> *)createArgsCodec;
@end

