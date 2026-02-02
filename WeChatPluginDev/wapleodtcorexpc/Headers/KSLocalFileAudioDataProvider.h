//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KSLocalFileAudioDataProvider
{
    NSString *_audioFileExt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *audioFileExt; // @synthesize audioFileExt=_audioFileExt;
- (id)audioFileExtension;
- (void)close:(_Bool)arg1;
- (_Bool)isReady;
- (_Bool)prepareAudioData;
- (void)dealloc;
- (id)initWithSongInfo:(id)arg1 queue:(id)arg2 context:(void *)arg3;

@end

