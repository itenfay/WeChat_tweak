//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface GCDAsyncWritePacket : NSObject
{
    NSData *buffer;
    unsigned long long bytesDone;
    long long tag;
    double timeout;
}

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long long)arg3;

@end

