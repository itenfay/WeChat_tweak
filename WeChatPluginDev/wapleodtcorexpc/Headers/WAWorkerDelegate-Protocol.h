//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol WAWorkerDelegate <NSObject>
- (void)onMessage:(NSDictionary *)arg1;
- (NSString *)getFrame;
- (void)onCreate;
- (unsigned int)getWorkerId;

@optional
- (NSData *)getCompressedFileData:(NSString *)arg1 compressionAlgorithm:(NSString *)arg2;
- (NSData *)getFileData:(NSString *)arg1;
- (NSData *)getFrameData;
@end

