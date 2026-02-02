//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSInputStream.h>

@class NSArray, NSError, NSString;

@interface WAUploadFileFormInputStream : NSInputStream
{
    NSArray *_arrFormBodyObject;
    unsigned long long _curObjectIndex;
    unsigned long long _curOffset;
    unsigned long long _contentLength;
    NSString *_boundary;
    basic_string_5909a4e2 _headerData;
    int _headerDataLength;
    basic_string_5909a4e2 _endData;
    int _endDataLength;
    unsigned long long streamStatus;
    NSError *streamError;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setStreamError:(id)arg1;
- (id)streamError;
- (void)setStreamStatus:(unsigned long long)arg1;
- (unsigned long long)streamStatus;
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (unsigned long long)contentLength;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)close;
- (void)open;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (void)nextBodyObject;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)endData;
- (int)endDataLength;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)headerData;
- (int)headerDataLength;
- (void)setupCronetDataWithFileFieldName:(id)arg1 fileName:(id)arg2 filePath:(id)arg3 formFields:(id)arg4;
- (id)boundary;
- (void)setupWithFileFieldName:(id)arg1 fileName:(id)arg2 filePath:(id)arg3 formFields:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

