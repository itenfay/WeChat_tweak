//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLivePromoteDisplayRecordInfo : NSObject
{
    _Bool _supportDisplayCountDown;
    _Bool _isBeginCountDown;
    _Bool _isCancelCountDown;
    double _beginDisplayTime;
    double _endDisplayTime;
    NSString *_promoteId;
    CDUnknownBlockType _timeoutCallback;
    double _enableDisplayDuration;
    double _sumCostDuration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCancelCountDown; // @synthesize isCancelCountDown=_isCancelCountDown;
@property(nonatomic) _Bool isBeginCountDown; // @synthesize isBeginCountDown=_isBeginCountDown;
@property(nonatomic) double sumCostDuration; // @synthesize sumCostDuration=_sumCostDuration;
@property(nonatomic) double enableDisplayDuration; // @synthesize enableDisplayDuration=_enableDisplayDuration;
@property(copy, nonatomic) CDUnknownBlockType timeoutCallback; // @synthesize timeoutCallback=_timeoutCallback;
@property(retain, nonatomic) NSString *promoteId; // @synthesize promoteId=_promoteId;
@property(nonatomic) _Bool supportDisplayCountDown; // @synthesize supportDisplayCountDown=_supportDisplayCountDown;
@property(nonatomic) double endDisplayTime; // @synthesize endDisplayTime=_endDisplayTime;
@property(nonatomic) double beginDisplayTime; // @synthesize beginDisplayTime=_beginDisplayTime;
- (void)updateEndDisplayTime;
- (void)updateBeginDisplayTime;
- (void)handleCountDownEnd;
- (void)modifyCountDown;
- (void)stopCountDown;
- (void)startCountDown;
- (_Bool)needCountDown;
- (void)destroy;
- (void)cancelCountDown;
- (void)endDisplay;
- (void)beginDisplay;
- (_Bool)udpateEnableDisplayDuraion:(unsigned int)arg1;

@end

