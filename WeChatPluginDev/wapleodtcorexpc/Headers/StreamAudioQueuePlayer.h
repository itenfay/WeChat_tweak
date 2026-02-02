//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;
@protocol StreamAudioCodecProtocol, StreamAudioPlayerDelegate;

@interface StreamAudioQueuePlayer
{
    _Bool mAppendDataEnd;
    NSMutableArray *mEmptyBuffers;
    NSString *_filePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (_Bool)initAudioQueue;
- (int)getCodecTypeFromVoiceFormat:(long long)arg1;
- (void)appendData:(id)arg1 endFlag:(_Bool)arg2;
- (_Bool)preparePlayWithFile:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) id <StreamAudioCodecProtocol> codec; // @dynamic codec;
@property(nonatomic) __weak id <StreamAudioPlayerDelegate> delegate; // @dynamic delegate;

@end

