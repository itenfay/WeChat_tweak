//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GroupNoticeItem, NSString;

@interface WNPasteMgr
{
    GroupNoticeItem *_downloadingItem;
    CDUnknownBlockType _downloadCallback;
}

+ (void)tryClearPasteData:(int)arg1;
+ (_Bool)hasCopyDataInTemp;
+ (_Bool)hasPasteData;
+ (void)clearPasteData;
+ (id)getPasteSection;
+ (void)asyncGetPasteData:(CDUnknownBlockType)arg1 viewController:(id)arg2;
+ (id)getPasteData;
+ (id)getDescOfAttachment:(id)arg1;
+ (void)resetFilePathForMessageInfo:(id)arg1;
+ (id)getTempPathWithMd5:(id)arg1 isThumb:(_Bool)arg2 dataFmt:(id)arg3;
+ (void)resetFileInfoInPasteData;
+ (_Bool)copyFromGroupNotice;
+ (void)tryRemoveRiskDataFromStorageForMsgScene:(id)arg1 msg:(id)arg2;
+ (void)copy:(id)arg1 sections:(id)arg2 itemLocalId:(int)arg3 fromMessage:(id)arg4 isFromGroupNotice:(_Bool)arg5;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType downloadCallback; // @synthesize downloadCallback=_downloadCallback;
@property(retain, nonatomic) GroupNoticeItem *downloadingItem; // @synthesize downloadingItem=_downloadingItem;
- (void)onGroupNoticeDownloadItem:(id)arg1 retCode:(int)arg2;
- (void)downloadPasteDataIfNeed:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

