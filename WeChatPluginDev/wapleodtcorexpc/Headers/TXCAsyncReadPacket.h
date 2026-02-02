//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface TXCAsyncReadPacket : NSObject
{
    NSMutableData *buffer;
    unsigned long long startOffset;
    unsigned long long bytesDone;
    unsigned long long maxLength;
    double timeout;
    unsigned long long readLength;
    NSData *term;
    _Bool bufferOwner;
    unsigned long long originalBufferLength;
    long long tag;
}

- (void).cxx_destruct;
- (long long)searchForTermAfterPreBuffering:(long long)arg1;
- (unsigned long long)readLengthForTermWithPreBuffer:(id)arg1 found:(_Bool *)arg2;
- (unsigned long long)readLengthForTermWithHint:(unsigned long long)arg1 shouldPreBuffer:(_Bool *)arg2;
- (unsigned long long)readLengthForNonTermWithHint:(unsigned long long)arg1;
- (unsigned long long)optimalReadLengthWithDefault:(unsigned long long)arg1 shouldPreBuffer:(_Bool *)arg2;
- (void)ensureCapacityForAdditionalDataOfLength:(unsigned long long)arg1;
- (id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 readLength:(unsigned long long)arg5 terminator:(id)arg6 tag:(long long)arg7;

@end

