//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveSubTitleUIConfigModel, MMLiveTaskId, NSArray, NSMutableArray, NSMutableDictionary, TextStyleAttributeObj, UIFont;

@interface MMFinderLiveSubTitleViewModel : NSObject
{
    _Bool _hasStartSubTitleDisplay;
    _Bool _isSubTitleClosed;
    _Bool _isSubTitleDisabled;
    _Bool _isSubTitleStartDelaySupplyCheck;
    _Bool _isChnSubTitleScrolling;
    _Bool _isEngSubTitleScrolling;
    MMLiveTaskId *_taskId;
    CDUnknownBlockType _refreshBlock;
    MMFinderLiveSubTitleUIConfigModel *_subTitleUIConfigModel;
    NSMutableArray *_currentSubTitleList;
    NSMutableArray *_lastSubTitleList;
    NSMutableDictionary *_subTitleDisplayDict;
    NSArray *_currentInitSubTitleList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *currentInitSubTitleList; // @synthesize currentInitSubTitleList=_currentInitSubTitleList;
@property(nonatomic) _Bool isEngSubTitleScrolling; // @synthesize isEngSubTitleScrolling=_isEngSubTitleScrolling;
@property(nonatomic) _Bool isChnSubTitleScrolling; // @synthesize isChnSubTitleScrolling=_isChnSubTitleScrolling;
@property(nonatomic) _Bool isSubTitleStartDelaySupplyCheck; // @synthesize isSubTitleStartDelaySupplyCheck=_isSubTitleStartDelaySupplyCheck;
@property(retain, nonatomic) NSMutableDictionary *subTitleDisplayDict; // @synthesize subTitleDisplayDict=_subTitleDisplayDict;
@property(retain, nonatomic) NSMutableArray *lastSubTitleList; // @synthesize lastSubTitleList=_lastSubTitleList;
@property(retain, nonatomic) NSMutableArray *currentSubTitleList; // @synthesize currentSubTitleList=_currentSubTitleList;
@property(retain, nonatomic) MMFinderLiveSubTitleUIConfigModel *subTitleUIConfigModel; // @synthesize subTitleUIConfigModel=_subTitleUIConfigModel;
@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
@property(nonatomic) _Bool isSubTitleDisabled; // @synthesize isSubTitleDisabled=_isSubTitleDisabled;
@property(nonatomic) _Bool isSubTitleClosed; // @synthesize isSubTitleClosed=_isSubTitleClosed;
@property(nonatomic) _Bool hasStartSubTitleDisplay; // @synthesize hasStartSubTitleDisplay=_hasStartSubTitleDisplay;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)getCurrentLogStr;
- (void)regualPrintLog;
- (void)stopRegualPrint;
- (void)startRegualPrint;
- (id)getLogStrForSubTitleComponentArr:(id)arg1;
- (id)getLogStrForStyle:(id)arg1 logSize:(_Bool)arg2;
- (id)getLogStrForArrStyles:(id)arg1 logSize:(_Bool)arg2;
- (void)logSupplyCategoryUpdateSubTitleList:(id)arg1;
- (void)logNormalCategoryUpdateSubTitleList:(id)arg1;
@property(readonly, nonatomic) TextStyleAttributeObj *engTextAttributeObj;
@property(readonly, nonatomic) TextStyleAttributeObj *chnTextAttributeObj;
@property(readonly, nonatomic) UIFont *engSubTitleFont;
@property(readonly, nonatomic) UIFont *chnSubTitleFont;
@property(readonly, nonatomic) unsigned long long engTextLine;
@property(readonly, nonatomic) unsigned long long chnTextLine;
@property(readonly, nonatomic) double maxContentWidth;
@property(readonly, nonatomic) _Bool isSubTitleRealClosed;
- (void)synchornizeSubTitleSwitch;
- (void)checkSubTitleCacheOverTime;
- (void)initSubTitleSwitch;
- (id)getCurrentSubTitleListInDisplayMode:(unsigned long long)arg1;
- (unsigned long long)getDisplayMode:(long long)arg1;
- (id)getTextAttributeObj:(long long)arg1;
- (id)getSubTitleFont:(long long)arg1;
- (unsigned long long)getMaxDisplayLineNum:(long long)arg1;
- (unsigned long long)getMaxLineNum:(long long)arg1;
- (void)configSubTitleDisplayModel:(id)arg1;
- (_Bool)isOriginSubTitle:(id)arg1 needCombineWithPreviousSubTitle:(id)arg2;
- (id)tryGetSupplySubTitleFromOriginSubTitle:(id)arg1;
- (id)createLastSubTitleData:(id)arg1 previousSubTitle:(id)arg2;
- (_Bool)isSubTitleTypeSupportDisplayLastContent:(long long)arg1;
- (id)getSubTitleDisplayModel:(long long)arg1 autoCreate:(_Bool)arg2;
- (id)getCurrentTempDisplayList;
- (void)updateLastSubTitle:(id)arg1;
- (void)clearLastSubTitle:(long long)arg1;
- (void)clearCurrentSubTitle:(long long)arg1;
- (id)getLastSubTitleWithSubTitleType:(long long)arg1 subTitleIndex:(long long)arg2;
- (id)getLastSubTitle:(long long)arg1;
- (id)getCurrentSubTitle:(long long)arg1;
- (id)getSupplyCategoryUpdatedSubTitleList:(id)arg1;
- (id)getNormalCategoryUpdatedSubTitleList:(id)arg1;
- (double)getSupplyModeSubTitleAutoRefreshDelayTime;
- (_Bool)tryToForceRefreshUI:(long long)arg1;
- (void)timeoutToAutoRefreshSupplyModeSubTitle;
- (_Bool)checkNeedToAutoRefreshSupplyModeSubTitle;
- (void)stopTimeoutToAutoRefreshSupplyModeSubTitle;
- (void)delayTimeoutToAutoRefreshSupplyModeSubTitleIfNeeded;
- (void)timeoutToDisplay;
- (void)delayTimeoutToDisplay;
- (_Bool)updateDisplayModel:(long long)arg1;
- (void)tryUpdateDisplayModel:(long long)arg1;
- (void)updateDisplayModels;
- (_Bool)checkSubTitleListContentUpdated:(id)arg1;
- (_Bool)checkSubTitleListIndexUpdated:(id)arg1;
- (_Bool)isSubTitleOnlyUpdateForCurrSupplying:(id)arg1;
- (id)filterUnvalidSubTitleList:(id)arg1;
- (void)handleSubTitleList:(id)arg1;
- (void)clearData;
- (void)notifySubTitleBegin;
- (void)notifyScrollForRefreshEnd:(long long)arg1;
- (void)notifyScrollForRefreshStart:(long long)arg1;
- (void)updateSubTitleDisabled:(_Bool)arg1;
- (void)updateSubTitleClosed:(_Bool)arg1;
- (void)updateSubTitleList:(id)arg1;
- (id)initWithTaskId:(id)arg1;

@end

