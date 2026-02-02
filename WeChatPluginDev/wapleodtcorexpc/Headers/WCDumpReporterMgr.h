//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCDumpReporterMgr
{
    NSMutableArray *_uploadedIssueArray;
    NSMutableArray *_uploadingIssueArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadingIssueArray; // @synthesize uploadingIssueArray=_uploadingIssueArray;
@property(retain, nonatomic) NSMutableArray *uploadedIssueArray; // @synthesize uploadedIssueArray=_uploadedIssueArray;
- (void)handleReportLagIssue:(id)arg1 success:(_Bool)arg2;
- (void)handleBeginReportLagIssue:(id)arg1;
- (void)uploadDumpOnIPXX:(id)arg1;
- (void)asyncUploadFolderData:(id)arg1;
- (id)getDataPath;
- (void)onIPXX:(id)arg1;
- (void)uploadDumpWithDate:(id)arg1;
- (void)uploadAllDump;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

