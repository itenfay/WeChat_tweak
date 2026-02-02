//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TXCVideoReportBase
{
    _Bool _receivedFirstFrame;
    CDUnknownBlockType _logger;
    long long _lastTicks;
}

- (void).cxx_destruct;
@property long long lastTicks; // @synthesize lastTicks=_lastTicks;
@property(copy) CDUnknownBlockType logger; // @synthesize logger=_logger;
@property(nonatomic) _Bool receivedFirstFrame; // @synthesize receivedFirstFrame=_receivedFirstFrame;
- (void)onProcessFrame:(id)arg1 isFirstFrame:(_Bool)arg2;
- (void)onTickLog:(long long)arg1 inDuration:(long long)arg2;
- (void)reset;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)init;

@end

