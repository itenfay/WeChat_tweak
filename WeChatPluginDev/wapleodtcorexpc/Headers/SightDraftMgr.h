//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface SightDraftMgr
{
    NSMutableArray *m_draftList;
}

- (void).cxx_destruct;
- (id)getDraftList;
- (void)removeDraft:(id)arg1 needWriteIndexFile:(_Bool)arg2;
- (void)removeDraft:(id)arg1;
- (void)insertDraft:(id)arg1;
- (void)addDraft:(id)arg1;
- (void)dealloc;
- (id)init;

@end

