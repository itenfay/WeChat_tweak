//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FlutterEngine, NSArray, NSString;

@protocol WxaRouterFlutterEngineDelegate <NSObject>
- (void)setLocaleDelegateWithEngine:(FlutterEngine *)arg1;
- (FlutterEngine *)provideFlutterEngineWithEntrypoint:(NSString *)arg1 libraryURI:(NSString *)arg2 initialRoute:(NSString *)arg3 entrypointArgs:(NSArray *)arg4;
@end

