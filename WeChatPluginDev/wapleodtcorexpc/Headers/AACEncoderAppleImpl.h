//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AACEncoderAppleImpl : NSObject
{
    struct OpaqueAudioConverter *converterRef_;
    struct AudioEncodeParams params_;
    struct CopyOnWriteBuffer buffer_;
    unsigned long long frameCount_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)frameLengthInBytes;
- (Optional_eb6751fe)encodeAudioPacket:(const void *)arg1;
- (Optional_3f6628e3)encodeAudioFrame:(const void *)arg1;
- (int)Encode:(span_05dffa63)arg1;
- (_Bool)setBitrateInBPS:(unsigned long long)arg1;
- (_Bool)createAudioConverterWithParams:(const struct AudioEncodeParams *)arg1;
- (void)disposeConverter;
- (void)dealloc;
- (id)init;

@end

