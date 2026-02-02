//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAssetExportSession, NSArray;

@interface KSIpodAudioDataProvider
{
    _Bool _isReady;
    AVAssetExportSession *_exportSession;
    NSArray *_fileTypes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *fileTypes; // @synthesize fileTypes=_fileTypes;
- (void)exportdidComplete;
- (id)mimeType;
- (id)audioFileTypes;
- (_Bool)isReady;
- (_Bool)prepareAudioData;
- (void)close:(_Bool)arg1;
- (void)dealloc;
- (id)initWithSongInfo:(id)arg1 queue:(id)arg2 context:(void *)arg3;

@end

