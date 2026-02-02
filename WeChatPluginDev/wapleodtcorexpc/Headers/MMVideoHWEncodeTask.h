//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SightAssetExportSession;

@interface MMVideoHWEncodeTask
{
    SightAssetExportSession *_hwExportSession;
}

+ (id)getProfileLevelWithParams:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SightAssetExportSession *hwExportSession; // @synthesize hwExportSession=_hwExportSession;
- (id)getAudioSettingWithParams:(id)arg1 asset:(id)arg2;
- (id)getAudioSettingForDolbyVideo:(id)arg1 asset:(id)arg2;
- (id)getAudioSettingWithParams:(id)arg1;
- (id)HDRMetadataInsertionModeKey;
- (id)HDRMetadataInsertionModeValue;
- (id)getVideoSettingWithParams:(id)arg1;
- (id)getReaderVideoSettingWithParams:(id)arg1;
- (void)stopExport;
- (void)cleanExportSession;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

