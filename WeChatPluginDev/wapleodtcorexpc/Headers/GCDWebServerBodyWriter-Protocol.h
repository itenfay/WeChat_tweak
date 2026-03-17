//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol GCDWebServerBodyWriter <NSObject>
- (_Bool)close:(id *)arg1;
- (_Bool)writeData:(NSData *)arg1 error:(id *)arg2;
- (_Bool)open:(id *)arg1;
@end

