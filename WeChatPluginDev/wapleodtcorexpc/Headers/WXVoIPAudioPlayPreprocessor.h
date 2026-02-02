//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol AudioPlayPreprocessedDelegate;

@interface WXVoIPAudioPlayPreprocessor : NSObject
{
    struct unique_ptr<wxvoipsdk::audio::AudioFrameRingBuffer, std::default_delete<wxvoipsdk::audio::AudioFrameRingBuffer>> _ringBuffer;
    AudioFrame_99e89bc4 _getDelegateDataHelpBuffer;
    int _getDataLengthBytes;
    id <AudioPlayPreprocessedDelegate> _delegate;
    struct DataBasicDescription _getDataDescription;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int getDataLengthBytes; // @synthesize getDataLengthBytes=_getDataLengthBytes;
@property(nonatomic) struct DataBasicDescription getDataDescription; // @synthesize getDataDescription=_getDataDescription;
@property(nonatomic) __weak id <AudioPlayPreprocessedDelegate> delegate; // @synthesize delegate=_delegate;
- (int)helperBufferLengthBytes:(const struct DataBasicDescription *)arg1;
- (void)resetIfDataDescriptionChanged:(const struct DataBasicDescription *)arg1;
- (void)fillBufferWithBitsFormatedData:(struct AudioFrame)arg1 dst:(struct AudioFrame *)arg2;
- (void)writeToRingBufferFromDelegate:(const struct DataBasicDescription *)arg1;
- (void)initializeHelpBuffer:(const struct DataBasicDescription *)arg1;
- (struct AudioFrame)getDelegateDataByRingBuffer:(const struct DataBasicDescription *)arg1 length:(int)arg2;
- (void)getData:(struct AudioFrame *)arg1;

@end

