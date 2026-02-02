//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GCDWebServerGZipDecoder
{
    struct z_stream_s _stream;
    _Bool _finished;
}

- (_Bool)close:(id *)arg1;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;
- (_Bool)open:(id *)arg1;

@end

