//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFolder, MMTableView, NSString;

@interface DiskUsageDetailViewController
{
    _Bool _bPro;
    _Bool _showForMyself;
    _Bool _ignoreDuplicateFile;
    int _showFileClass;
    NSString *_rootPath;
    MMFolder *_m_folder;
    MMTableView *_m_tableView;
}

+ (unsigned long long)sumFileTypeSize:(id)arg1 showTypeInUse:(int)arg2 ignoreDuplicate:(_Bool)arg3 fileIDDict:(id)arg4 resultFileInfo:(id)arg5;
+ (unsigned long long)sumFileClassSize:(id)arg1 showClass:(int)arg2 ignoreDuplicate:(_Bool)arg3 ignoreClass:(_Bool)arg4 fileIDDict:(id)arg5;
+ (unsigned long long)sumFileClassSize:(id)arg1 showClass:(int)arg2 ignoreDuplicate:(_Bool)arg3;
+ (unsigned long long)sumFileSize:(id)arg1 ignoreDuplicate:(_Bool)arg2;
+ (id)getStringWithFileClass:(int)arg1;
+ (id)p_getDescriptionStringNum:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView=_m_tableView;
@property(nonatomic) _Bool ignoreDuplicateFile; // @synthesize ignoreDuplicateFile=_ignoreDuplicateFile;
@property(nonatomic) _Bool showForMyself; // @synthesize showForMyself=_showForMyself;
@property(nonatomic) int showFileClass; // @synthesize showFileClass=_showFileClass;
@property(nonatomic) _Bool bPro; // @synthesize bPro=_bPro;
@property(retain, nonatomic) MMFolder *m_folder; // @synthesize m_folder=_m_folder;
@property(copy, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scanFileInFolder:(id)arg1 withParentPath:(id)arg2;
- (void)scanSubfolder:(id)arg1 withParentPath:(id)arg2 depth:(int)arg3;
- (void)startScanFolder:(id)arg1 withParentPath:(id)arg2 depth:(int)arg3;
- (void)viewDidLoad;
- (void)selectShowType;
- (void)p_handleLongPress:(id)arg1;
- (void)p_handleThreeTap:(id)arg1;
- (void)p_onLongPressNavBar;
- (void)initTableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

