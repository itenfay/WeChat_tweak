//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJSilkCodec : NSObject
{
    struct AudioCoder _encoder;
}

+ (id)encodeToSilkFromPCMData:(id)arg1;
+ (id)decodeToAudioDataFromSilkData:(id)arg1;
+ (id)decodeToPCMFromSilkData:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct AudioCoder encoder; // @synthesize encoder=_encoder;
- (_Bool)uninitEncoder;
- (id)encodeFromPCMData:(id)arg1;
- (_Bool)initEncoder;

@end

