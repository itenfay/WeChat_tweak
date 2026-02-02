//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSObject, NSString, WCFileBrowseBuildIndexOperation, WCFileBrowseInfoDB, WCFileBrowseKVLog;
@protocol OS_dispatch_queue;

@interface WCFileBrowseService
{
    _Bool _bOpen;
    _Bool _bLoadingChatLogFile;
    _Bool _bLoadingFavFile;
    WCFileBrowseInfoDB *_browseInfoDB;
    NSObject<OS_dispatch_queue> *_fileBrowseQueue;
    WCFileBrowseBuildIndexOperation *_buildIndexOperation;
    NSString *_currentSearchText;
    NSMutableArray *_fileBrowseInfoArray;
    NSMutableArray *_fileBrowseInfoSectionArray;
    NSMutableArray *_favFileBrowseInfoArray;
    NSMutableArray *_favFileBrowseInfoSectionArray;
    NSMutableArray *_searchResultInfoSectionArray;
    WCFileBrowseKVLog *_kvLogObj;
}

+ (id)p_getFileBrowseInfoSectionArray:(id)arg1;
+ (id)p_getFullDateStringOfTime:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFileBrowseKVLog *kvLogObj; // @synthesize kvLogObj=_kvLogObj;
@property(nonatomic) _Bool bLoadingFavFile; // @synthesize bLoadingFavFile=_bLoadingFavFile;
@property(nonatomic) _Bool bLoadingChatLogFile; // @synthesize bLoadingChatLogFile=_bLoadingChatLogFile;
@property(retain, nonatomic) NSMutableArray *searchResultInfoSectionArray; // @synthesize searchResultInfoSectionArray=_searchResultInfoSectionArray;
@property(retain, nonatomic) NSMutableArray *favFileBrowseInfoSectionArray; // @synthesize favFileBrowseInfoSectionArray=_favFileBrowseInfoSectionArray;
@property(retain, nonatomic) NSMutableArray *favFileBrowseInfoArray; // @synthesize favFileBrowseInfoArray=_favFileBrowseInfoArray;
@property(retain, nonatomic) NSMutableArray *fileBrowseInfoSectionArray; // @synthesize fileBrowseInfoSectionArray=_fileBrowseInfoSectionArray;
@property(retain, nonatomic) NSMutableArray *fileBrowseInfoArray; // @synthesize fileBrowseInfoArray=_fileBrowseInfoArray;
@property(nonatomic) _Bool bOpen; // @synthesize bOpen=_bOpen;
@property(copy, nonatomic) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(retain, nonatomic) WCFileBrowseBuildIndexOperation *buildIndexOperation; // @synthesize buildIndexOperation=_buildIndexOperation;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileBrowseQueue; // @synthesize fileBrowseQueue=_fileBrowseQueue;
@property(retain, nonatomic) WCFileBrowseInfoDB *browseInfoDB; // @synthesize browseInfoDB=_browseInfoDB;
- (void)report21059:(id)arg1;
- (void)setReportKVLog:(unsigned long long)arg1 withBrowseInfoArray:(id)arg2;
- (void)setFirstScreenAssetNum:(unsigned int)arg1 andFirstAssetIndex:(int)arg2;
- (void)reportCurrentKVLog;
- (id)getCurrentKVLog;
- (void)makeWholeNewKVLog;
- (void)onFileDetailViewOpenMsgSvrID:(long long)arg1;
- (id)getOneFileInfoOfMD5:(id)arg1 retSameMD5FilePath:(id *)arg2;
- (void)onImportingMessage;
- (void)onImportMessageSuccess;
- (void)p_tryAddBrowseInfo:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)getSearchFileBrowseInfoInIndex:(id)arg1;
- (unsigned long long)getSearchFileBrowseSectionCount;
- (unsigned long long)getSearchFileBrowseInfoCountInSection:(unsigned long long)arg1;
- (id)getSearchFileBrowseSectionTitleForSection:(unsigned long long)arg1;
- (void)doSearch:(id)arg1 withDataType:(unsigned long long)arg2;
- (id)getSearchText;
- (id)getAllFilesBrowseInfo;
- (void)OnSearch:(id)arg1;
- (void)checkLoadFavData;
- (void)checkLoadData:(id)arg1;
- (id)getFileBrowseInfoInIndex:(id)arg1 withDataType:(unsigned long long)arg2 andChatName:(id)arg3;
- (id)getFileBrowseInfoInIndex:(id)arg1 withDataType:(unsigned long long)arg2;
- (unsigned long long)getFileBrowseSectionCountWithDataType:(unsigned long long)arg1 andChatName:(id)arg2;
- (unsigned long long)getFileBrowseSectionCountWithDataType:(unsigned long long)arg1;
- (unsigned long long)getFileBrowseInfoCountInSection:(unsigned long long)arg1 withDataType:(unsigned long long)arg2 andChatName:(id)arg3;
- (unsigned long long)getFileBrowseInfoCountInSection:(unsigned long long)arg1 withDataType:(unsigned long long)arg2;
- (id)getFileBrowseSectionTitleForSection:(unsigned long long)arg1 withDataType:(unsigned long long)arg2 andChatName:(id)arg3;
- (id)getFileBrowseSectionTitleForSection:(unsigned long long)arg1 withDataType:(unsigned long long)arg2;
- (_Bool)shouldOpen;
- (void)existFileBrowser;
- (void)startBuildIndexOperation;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)reloadInfo;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

