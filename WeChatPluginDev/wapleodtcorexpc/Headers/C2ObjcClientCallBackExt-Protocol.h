//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol C2ObjcClientCallBackExt <NSObject>
- (void)onDisconnect:(NSString *)arg1 port:(unsigned short)arg2;
- (void)onRecv:(NSString *)arg1 port:(unsigned short)arg2 data:(NSData *)arg3 length:(unsigned int)arg4;
@end

