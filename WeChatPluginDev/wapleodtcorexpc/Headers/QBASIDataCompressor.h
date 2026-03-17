//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBASIDataCompressor : NSObject
{
    _Bool streamReady;
    struct z_stream_s zStream;
}

+ (id)deflateErrorWithCode:(int)arg1;
+ (_Bool)compressDataFromFile:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
+ (id)compressData:(id)arg1 error:(id *)arg2;
+ (id)compressor;
@property(readonly) _Bool streamReady; // @synthesize streamReady;
- (id)compressBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3 shouldFinish:(_Bool)arg4;
- (id)closeStream;
- (id)setupStream;
- (void)dealloc;

@end

