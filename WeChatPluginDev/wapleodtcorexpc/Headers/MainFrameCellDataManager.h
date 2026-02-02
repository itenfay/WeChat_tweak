//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LSMFileStorage, NSMutableDictionary, NSString;

@interface MainFrameCellDataManager
{
    NSMutableDictionary *m_dictMainFrameCellData;
    LSMFileStorage *m_fileStorage;
}

- (void).cxx_destruct;
- (void)onBoldTextStatusChanged;
- (void)onLanguageChange;
- (void)onFontSizeChange;
- (void)onMultiTalkMsgCellIconChange:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)updateTimeFieldForCellData;
- (void)removeCellData:(id)arg1;
- (id)getCellDataByUsrName:(id)arg1;
- (void)cleanupAllCache;
- (id)updateCellData:(id)arg1;
- (void)batchSaveCellDatas:(id)arg1;
- (void)saveCellData:(id)arg1;
- (id)getCellData:(id)arg1;
- (void)clearOldVersionCellDataFile;
- (void)reLoadLSMFileStorage;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

