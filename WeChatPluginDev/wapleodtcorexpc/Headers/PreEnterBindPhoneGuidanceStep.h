//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAccountBindPhoneControlLogic, WCAccountPhoneBindGuidanceData;

@interface PreEnterBindPhoneGuidanceStep
{
    _Bool _isForceShow;
    _Bool _needSyncEscape;
    WCAccountPhoneBindGuidanceData *_guidancedData;
    WCAccountBindPhoneControlLogic *_bindPhoneLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountBindPhoneControlLogic *bindPhoneLogic; // @synthesize bindPhoneLogic=_bindPhoneLogic;
@property(retain, nonatomic) WCAccountPhoneBindGuidanceData *guidancedData; // @synthesize guidancedData=_guidancedData;
@property(nonatomic) _Bool needSyncEscape; // @synthesize needSyncEscape=_needSyncEscape;
@property(nonatomic) _Bool isForceShow; // @synthesize isForceShow=_isForceShow;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)bindPhoneEnterWithIsFromGuidanceHelp:(_Bool)arg1;
- (void)bindPhoneReturn;
- (void)realFinishStep;
- (void)showBindPhoneGuidanceView:(id)arg1;
- (void)startStep;
- (id)initWithMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

