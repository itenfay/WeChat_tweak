//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, NSString, QVisualLayer;

@protocol QVisualLayerDelegate <NSObject>

@optional
- (void)onVisualLayerLog:(QVisualLayer *)arg1 log:(NSString *)arg2 logLevel:(int)arg3;
- (void)onVisualLayerEvent:(QVisualLayer *)arg1 eventType:(NSString *)arg2 eventInfoJson:(NSString *)arg3;
- (void)visualLayerDidFinshLoading:(QVisualLayer *)arg1 withError:(NSError *)arg2;
@end

