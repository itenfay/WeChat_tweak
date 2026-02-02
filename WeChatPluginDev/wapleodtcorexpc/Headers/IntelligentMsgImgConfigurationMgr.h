//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface IntelligentMsgImgConfigurationMgr
{
    NSArray *m_arrFigureClassificationLabelId;
    NSArray *m_arrFaceAlbumClassificationLabelId;
    _Bool m_isEnterBackground;
    _Bool m_isFaceFeatureHardwareAcceleration;
    _Bool m_isFaceFeatureL2Norm;
}

+ (id)getMsgFromFTSMsgItem:(id)arg1;
+ (id)getMsgFrom:(id)arg1;
+ (id)getSimpleMsgFrom:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isEnterBackground;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)onModelListWillUpdate:(id)arg1;
- (void)onModelUpdate:(id)arg1;
- (id)getIntelligentMsgEveryDayId;
- (void)doReportIntelligentMsgEveryDay;
- (void)reportIntelligentMsgEveryDay;
- (void)onServiceInit;
- (void)onServiceClearData;
- (_Bool)isFaceFeatureL2Norm;
- (_Bool)isFaceFeatureHardwareAcceleration;
- (_Bool)isIntelligentAMXAbtestSwitchOpen;
- (_Bool)isSupportIntelligentAMX;
- (_Bool)isIntelligentNPUAbtestSwitchOpen;
- (_Bool)isSupportIntelligentNPU;
- (_Bool)isIntelligentFaceClusterDataReportAbtestSwitchOpen;
- (_Bool)isIntelligentOCRDataReportAbtestSwitchOpen;
- (_Bool)isIntelligentGPUAbtestSwitchOpen;
- (_Bool)isSupportIntelligentGPU;
- (_Bool)isIntelligentMsgImgSimilarWordAbtestSwitchOpen;
- (_Bool)isIntelligentMsgImgTurnOn;
- (void)asynModifyIntelligentMsgImgTurnOn:(_Bool)arg1;
- (void)setIsIntelligentMsgImgTurnOn:(_Bool)arg1;
- (_Bool)isIntelligentMsgImgSwitchOpen;
- (_Bool)isIntelligentMsgImgEffective;
- (_Bool)checkIntelligentMsgModelFileExit;
- (id)getSearchBarPlaceholder;
- (id)convertStringArrayToNumberArray:(id)arg1;
- (void)initIntelligentMsgData;
- (id)getArrFigureClassificationLabelId;
- (id)getArrFaceAlbumClassificationLabelId;
- (void)dealloc;
- (void)removeNotificationObservers;
- (void)registerMethod;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

