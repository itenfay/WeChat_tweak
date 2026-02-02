//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TPPlayerStateWrapper;

@interface TPPlayerStateStrategy : NSObject
{
    TPPlayerStateWrapper *_stateWrapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPlayerStateWrapper *stateWrapper; // @synthesize stateWrapper=_stateWrapper;
- (_Bool)isValidStateToCallbackOnSeekComplete;
- (_Bool)isValidStateToCallbackOnDataOutput;
- (_Bool)isValidStateToCallbackOnVideoSizeChanged;
- (_Bool)isValidStateToCallbackOnError;
- (_Bool)isValidStateToCallbackOnInfo;
- (_Bool)isValidStateToCallbackOnComplete;
- (_Bool)isValidStateToCallbackOnPreared;
- (_Bool)isValidStateToCallGetDynamicStatisticParamsAndReset;
- (_Bool)isValidStateToCallGetGeneralPlayFlowParams;
- (_Bool)isValidStateToCallGetDynamicStatisticParams;
- (_Bool)isValidStateToCallGetDemuxerOffsetInFile;
- (_Bool)isValidStateToCallRelease;
- (_Bool)isValidStateToCallGetBufferPercent;
- (_Bool)isValidStateToCallGetState;
- (_Bool)isValidStateToCallGetVideoSize;
- (_Bool)isValidStateToCallGetPosition;
- (_Bool)isValidStateToCallGetDuration;
- (_Bool)isValidStateToCallSelectProgram;
- (_Bool)isValidStateToCallDeselectTrack;
- (_Bool)isValidStateToCallSelectTrack;
- (_Bool)isValidStateToCallSwitchDefinition;
- (_Bool)isValidStateToCallSeek;
- (_Bool)isValidStateToCallReset;
- (_Bool)isValidStateToCallStop;
- (_Bool)isValidStateToCallPause;
- (_Bool)isValidStateToCallStart;
- (_Bool)isValidStateToCallSetView;
- (_Bool)isValidStateToCallSetParams;
- (_Bool)isValidStateToCallSetDataSource;
- (_Bool)isValidStateToCallPrepare;
- (_Bool)isValidStateToCallBack:(unsigned long long)arg1;
- (_Bool)isValidStateToCall:(unsigned long long)arg1;
- (id)initWithStateWrapper:(id)arg1;

@end

