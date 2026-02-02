//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;

@protocol IAudioReceiverExt

@optional
- (void)OnEarTip;
- (void)OnEndPlaying:(CMessageWrap *)arg1 isForceStop:(_Bool)arg2;
- (void)OnBeginPlaying:(CMessageWrap *)arg1 success:(_Bool)arg2;
- (void)OnLevelMeter:(CMessageWrap *)arg1 Peak:(float)arg2;
@end

