//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCBaseControlMgr
{
    NSMutableArray *m_arrLogicStack;
}

- (void).cxx_destruct;
- (void)cancelAllLogicExcept:(id)arg1;
- (void)cancelAllLogic;
- (id)getAllLogic;
- (void)stopLogic:(unsigned int)arg1;
- (void)stopCurrentLogic;
- (id)getCurrentLogic;
- (_Bool)isCurrentLogic:(id)arg1;
- (id)getLogic:(unsigned int)arg1;
- (unsigned int)startLogic:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

