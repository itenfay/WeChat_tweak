//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TingAudioTraceLog, TingBizPlayer, TingItem;
@protocol TingPlayingInfoDelegate;

@interface TingPlayingInfo : NSObject
{
    TingItem *_tingItem;
    TingBizPlayer *_bizPlayer;
    id <TingPlayingInfoDelegate> _delegate;
    TingAudioTraceLog *_traceLog;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingAudioTraceLog *traceLog; // @synthesize traceLog=_traceLog;
@property(nonatomic) __weak id <TingPlayingInfoDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TingBizPlayer *bizPlayer; // @synthesize bizPlayer=_bizPlayer;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
- (void)tingBizPlayerOnDisplayViewMTKViewCreated:(id)arg1;
- (void)tingBizPlayer:(id)arg1 onDisplayFrameBufferOut:(id)arg2;
- (void)tingBizPlayer:(id)arg1 onDisplayElementAvailable:(id)arg2;
- (void)tingBizPlayer:(id)arg1 playRateChanged:(float)arg2;
- (void)tingBizPlayer:(id)arg1 onInfoEvent:(int)arg2 error:(id)arg3;
- (void)tingBizPlayer:(id)arg1 onEvent:(int)arg2 error:(id)arg3;
- (void)tingBizPlayer:(id)arg1 statusChanged:(int)arg2;
- (void)tingBizPlayer:(id)arg1 updateCurrentTime:(double)arg2 displayTime:(double)arg3 duration:(double)arg4;
- (_Bool)hasMinimizedWindow;
- (void)clearTraceLog;
- (double)playedTime;
@property(readonly, copy) NSString *description;
- (id)initWithTingItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

