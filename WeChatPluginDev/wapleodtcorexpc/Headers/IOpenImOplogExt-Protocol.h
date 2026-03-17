//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, ProtobufCGIWrap;

@protocol IOpenImOplogExt <NSObject>

@optional
- (void)onOpenImOplogRet:(int)arg1 errMsg:(NSString *)arg2 eventID:(unsigned int)arg3 cgiWrap:(ProtobufCGIWrap *)arg4;
@end

