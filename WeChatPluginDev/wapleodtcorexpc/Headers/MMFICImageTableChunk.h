//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFICImageTableChunk : NSObject
{
    unsigned long long _index;
    void *_bytes;
    unsigned long long _length;
    long long _fileOffset;
}

@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) void *bytes; // @synthesize bytes=_bytes;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1 fileOffset:(unsigned long long)arg2 index:(unsigned long long)arg3 length:(unsigned long long)arg4;

@end

