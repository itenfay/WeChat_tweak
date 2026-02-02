//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MusicSearchMgr
{
}

- (void)onGetMusicItemFail:(int)arg1 sessionId:(unsigned int)arg2;
- (void)onGetMusicItemSuccess:(id)arg1 fpId:(unsigned int)arg2;
- (void)outputPeakPower:(float)arg1;
- (long long)recordTimeLimitInSecond;
- (_Bool)checkSearchEnvironmentIsValid;
- (id)init;

@end

