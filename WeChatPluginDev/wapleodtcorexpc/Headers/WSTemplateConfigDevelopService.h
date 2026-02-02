//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMapTable, NSMutableDictionary, NSString;

@interface WSTemplateConfigDevelopService
{
    NSMutableDictionary *m_matchPatternDic;
    NSMutableDictionary *m_actionSheetButtonTitleDic;
    NSMapTable *m_templateMgrMapTable;
}

- (void).cxx_destruct;
- (id)getTemplateMgrWithResourceType:(unsigned int)arg1 resourceSubType:(unsigned int)arg2;
- (id)getActionSheetButtonTitleWithResourceType:(unsigned int)arg1 resourceSubType:(unsigned int)arg2;
- (unsigned int)getMatchPatternResourceSubTypeByFileTitle:(id)arg1;
- (unsigned int)getMatchPatternResourceTypeByFileTitle:(id)arg1;
- (void)registerDevelopWithResourceType:(unsigned int)arg1 resourceSubType:(unsigned int)arg2 andMatchPattern:(id)arg3 andActionSheetButtonTitle:(id)arg4 andTemplateMgr:(id)arg5;
- (void)registerDevelopWithTemplateMgr:(id)arg1;
- (void)registerDevelopWithResourceType:(unsigned int)arg1 andMatchPattern:(id)arg2 andActionSheetButtonTitle:(id)arg3 andTemplateMgr:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

