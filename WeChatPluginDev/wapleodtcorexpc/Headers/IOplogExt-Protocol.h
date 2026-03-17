//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class OplogErrMsg, ProtobufCGIWrap;

@protocol IOplogExt <NSObject>
- (void)oplogRet:(int)arg1 errMsg:(OplogErrMsg *)arg2 eventID:(unsigned int)arg3 cgiWrap:(ProtobufCGIWrap *)arg4;
@end

