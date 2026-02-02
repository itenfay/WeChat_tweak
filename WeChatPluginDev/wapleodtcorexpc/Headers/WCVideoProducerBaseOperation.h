//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCVideoProducerBaseOperation : NSObject
{
    double _initTime;
    double _terminateTime;
    double _startTime;
    double _stopTime;
}

@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double terminateTime; // @synthesize terminateTime=_terminateTime;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
- (void)operationDidStop;
- (void)operationDidStart;
- (void)onOperationTerminate;
- (void)onOperationInit;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

