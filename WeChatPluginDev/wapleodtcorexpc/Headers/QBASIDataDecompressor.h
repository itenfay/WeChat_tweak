//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBASIDataDecompressor : NSObject
{
    _Bool streamReady;
    struct z_stream_s zStream;
}

+ (id)inflateErrorWithCode:(int)arg1;
+ (_Bool)uncompressDataFromFile:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
+ (id)uncompressData:(id)arg1 error:(id *)arg2;
+ (id)decompressor;
@property(readonly) _Bool streamReady; // @synthesize streamReady;
- (id)uncompressBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)closeStream;
- (id)setupStream;
- (void)dealloc;

@end

