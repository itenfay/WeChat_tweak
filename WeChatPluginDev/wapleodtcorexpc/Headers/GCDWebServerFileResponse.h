//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GCDWebServerFileResponse
{
    NSString *_path;
    unsigned long long _offset;
    unsigned long long _size;
    int _file;
}

+ (id)responseWithFile:(id)arg1 byteRange:(struct _NSRange)arg2 isAttachment:(_Bool)arg3;
+ (id)responseWithFile:(id)arg1 byteRange:(struct _NSRange)arg2;
+ (id)responseWithFile:(id)arg1 isAttachment:(_Bool)arg2;
+ (id)responseWithFile:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)close;
- (id)readData:(id *)arg1;
- (_Bool)open:(id *)arg1;
- (id)initWithFile:(id)arg1 byteRange:(struct _NSRange)arg2 isAttachment:(_Bool)arg3;
- (id)initWithFile:(id)arg1 byteRange:(struct _NSRange)arg2;
- (id)initWithFile:(id)arg1 isAttachment:(_Bool)arg2;
- (id)initWithFile:(id)arg1;

@end

