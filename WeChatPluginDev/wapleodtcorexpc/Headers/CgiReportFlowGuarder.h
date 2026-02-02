//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface CgiReportFlowGuarder : NSObject
{
    NSMutableDictionary *_configMap;
    NSMutableDictionary *_controlData;
    NSMutableSet *_timerKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *timerKey; // @synthesize timerKey=_timerKey;
@property(retain, nonatomic) NSMutableDictionary *controlData; // @synthesize controlData=_controlData;
@property(retain, nonatomic) NSMutableDictionary *configMap; // @synthesize configMap=_configMap;
- (void)startReq:(id)arg1;
- (void)sizeOut:(id)arg1;
- (void)startTimer:(id)arg1 andTimeSecond:(double)arg2;
- (void)flowControl:(id)arg1 andReportData:(id)arg2 andConfigModel:(id)arg3;
- (_Bool)checkToFlowControl:(unsigned int)arg1 andReportData:(id)arg2;
- (void)onCgiFlowControl:(unsigned int)arg1 andModel:(id)arg2;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

