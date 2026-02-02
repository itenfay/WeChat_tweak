//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAppStateChangedContextInfoBluetoothInfo, WAAppStateChangedContextInfoLocationInfo, WAAppStateChangedContextInfoMusicInfo, WAAppStateChangedContextInfoWXABGAudioInfo;

@interface WAAppStateChangedContextInfo
{
    WAAppStateChangedContextInfoMusicInfo *_musicInfo;
    WAAppStateChangedContextInfoLocationInfo *_locationInfo;
    WAAppStateChangedContextInfoWXABGAudioInfo *_wxaBGAudioInfo;
    WAAppStateChangedContextInfoBluetoothInfo *_bluetoothInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppStateChangedContextInfoBluetoothInfo *bluetoothInfo; // @synthesize bluetoothInfo=_bluetoothInfo;
@property(retain, nonatomic) WAAppStateChangedContextInfoWXABGAudioInfo *wxaBGAudioInfo; // @synthesize wxaBGAudioInfo=_wxaBGAudioInfo;
@property(retain, nonatomic) WAAppStateChangedContextInfoLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) WAAppStateChangedContextInfoMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
- (id)description;
- (id)init;

@end

