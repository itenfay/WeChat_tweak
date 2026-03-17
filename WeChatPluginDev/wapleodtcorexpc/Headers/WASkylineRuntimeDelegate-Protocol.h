//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol WASkylineRuntimeDelegate <NSObject>
- (void)onUpdateMapCustomCallout:(long long)arg1 markerId:(long long)arg2 anchorX:(double)arg3 anchorY:(double)arg4 alwaysDisplay:(_Bool)arg5 imgData:(NSData *)arg6;
- (void)onSkylineRuntimeReady;
- (void)onSkylineRuntimeLaunch;
- (NSData *)onLoadUsrResource:(NSString *)arg1;
- (NSData *)onLoadPubResource:(NSString *)arg1;
- (void)onRunServiceBlock:(void (^)(void))arg1;
@end

