//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCAsyncSocketPreBuffer : NSObject
{
    char *preBuffer;
    unsigned long long preBufferSize;
    char *readPointer;
    char *writePointer;
}

- (void)reset;
- (void)didWrite:(unsigned long long)arg1;
- (void)getWriteBuffer:(char **)arg1 availableSpace:(unsigned long long *)arg2;
- (char *)writeBuffer;
- (unsigned long long)availableSpace;
- (void)didRead:(unsigned long long)arg1;
- (void)getReadBuffer:(char **)arg1 availableBytes:(unsigned long long *)arg2;
- (char *)readBuffer;
- (unsigned long long)availableBytes;
- (void)ensureCapacityForWrite:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

