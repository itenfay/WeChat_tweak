//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol MagicBrushCoreResourceDelegate <NSObject>
- (NSData *)onLoadDataSync:(NSString *)arg1;
- (void)onLoadData:(NSString *)arg1 withCallback:(void (^)(NSData *))arg2;

@optional
- (void)onProfilerFileGenerated:(NSString *)arg1 type:(NSString *)arg2;
- (struct __CVBuffer *)providePixelBufferByViewId:(unsigned int)arg1 withType:(NSString *)arg2;
@end

