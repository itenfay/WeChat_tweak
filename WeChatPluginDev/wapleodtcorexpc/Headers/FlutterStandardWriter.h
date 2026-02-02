//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface FlutterStandardWriter : NSObject
{
    NSMutableData *_data;
}

- (void).cxx_destruct;
- (void)writeValue:(id)arg1;
- (void)writeUTF8:(id)arg1;
- (void)writeAlignment:(unsigned char)arg1;
- (void)writeSize:(unsigned int)arg1;
- (void)writeData:(id)arg1;
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)writeByte:(unsigned char)arg1;
- (id)initWithData:(id)arg1;

@end

