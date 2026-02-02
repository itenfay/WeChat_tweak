//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface FlutterStandardReader : NSObject
{
    NSData *_data;
    struct _NSRange _range;
}

- (void).cxx_destruct;
- (id)readValueOfType:(unsigned char)arg1;
- (id)readValue;
- (void)readAlignment:(unsigned char)arg1;
- (id)readUTF8;
- (id)readData:(unsigned long long)arg1;
- (unsigned int)readSize;
- (unsigned char)readByte;
- (void)readBytes:(void *)arg1 length:(unsigned long long)arg2;
- (_Bool)hasMore;
- (id)initWithData:(id)arg1;

@end

