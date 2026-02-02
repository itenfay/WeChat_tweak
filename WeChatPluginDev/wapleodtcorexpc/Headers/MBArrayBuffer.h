//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface MBArrayBuffer : NSObject
{
    _Bool _isTraceBuffer;
    int _bufferId;
    unsigned long long _permission;
    void *_bufferPtr;
    unsigned long long _bufferLength;
    NSMutableData *_localData;
    NSObject *_dataRef;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *dataRef; // @synthesize dataRef=_dataRef;
@property(retain) NSMutableData *localData; // @synthesize localData=_localData;
@property unsigned long long bufferLength; // @synthesize bufferLength=_bufferLength;
@property void *bufferPtr; // @synthesize bufferPtr=_bufferPtr;
@property(nonatomic) _Bool isTraceBuffer; // @synthesize isTraceBuffer=_isTraceBuffer;
@property(nonatomic) int bufferId; // @synthesize bufferId=_bufferId;
@property(readonly, nonatomic) unsigned long long permission; // @synthesize permission=_permission;
- (void)dealloc;
- (_Bool)writeData:(id)arg1 offset:(unsigned long long)arg2 retWriteLength:(unsigned long long *)arg3 retErrno:(unsigned int *)arg4;
- (_Bool)getWriteableBuffer:(void **)arg1 length:(unsigned long long *)arg2;
- (id)createTraceJSObject:(id)arg1;
- (id)createJSObject:(id)arg1;
- (const void *)dataBufferPtr;
- (unsigned long long)dataLength;
- (id)data;
- (id)initWithBuffer:(void *)arg1 length:(unsigned long long)arg2 permission:(unsigned long long)arg3 dataRef:(id)arg4;
- (id)initWithLength:(unsigned int)arg1;

@end

