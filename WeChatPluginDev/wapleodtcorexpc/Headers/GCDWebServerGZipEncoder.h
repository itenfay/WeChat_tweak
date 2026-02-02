//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GCDWebServerGZipEncoder
{
    struct z_stream_s _stream;
    _Bool _finished;
}

- (void)close;
- (id)readData:(id *)arg1;
- (_Bool)open:(id *)arg1;
- (id)initWithResponse:(id)arg1 reader:(id)arg2;

@end

