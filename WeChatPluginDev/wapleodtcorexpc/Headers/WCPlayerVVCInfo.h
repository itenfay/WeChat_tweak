//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPlayerVVCInfo : NSObject
{
    float _playDecodingFps;
    float _playRenderingFps;
    float _playDecodeStuckRatio;
    float _playRenderStuckRatio;
    long long _playDecodeStuckCount;
    long long _playRenderStuckCount;
    unsigned long long _lastProceedTime;
    long long _lastVideoDecodeFrmCnt;
    long long _lastVideoRenderFrmCnt;
    long long _totalProceedCnt;
    long long _totalDecodeFPSCnt;
    long long _totalRenderFPSCnt;
}

@property(nonatomic) long long totalRenderFPSCnt; // @synthesize totalRenderFPSCnt=_totalRenderFPSCnt;
@property(nonatomic) long long totalDecodeFPSCnt; // @synthesize totalDecodeFPSCnt=_totalDecodeFPSCnt;
@property(nonatomic) long long totalProceedCnt; // @synthesize totalProceedCnt=_totalProceedCnt;
@property(nonatomic) long long lastVideoRenderFrmCnt; // @synthesize lastVideoRenderFrmCnt=_lastVideoRenderFrmCnt;
@property(nonatomic) long long lastVideoDecodeFrmCnt; // @synthesize lastVideoDecodeFrmCnt=_lastVideoDecodeFrmCnt;
@property(nonatomic) unsigned long long lastProceedTime; // @synthesize lastProceedTime=_lastProceedTime;
@property(nonatomic) float playRenderStuckRatio; // @synthesize playRenderStuckRatio=_playRenderStuckRatio;
@property(nonatomic) float playDecodeStuckRatio; // @synthesize playDecodeStuckRatio=_playDecodeStuckRatio;
@property(nonatomic) long long playRenderStuckCount; // @synthesize playRenderStuckCount=_playRenderStuckCount;
@property(nonatomic) long long playDecodeStuckCount; // @synthesize playDecodeStuckCount=_playDecodeStuckCount;
@property(nonatomic) float playRenderingFps; // @synthesize playRenderingFps=_playRenderingFps;
@property(nonatomic) float playDecodingFps; // @synthesize playDecodingFps=_playDecodingFps;
- (id)init;

@end

