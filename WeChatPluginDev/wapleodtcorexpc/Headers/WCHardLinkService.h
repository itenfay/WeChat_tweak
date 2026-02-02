//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCHardLinkMergeOperation;

@interface WCHardLinkService
{
    WCHardLinkMergeOperation *_mergeOperation;
}

+ (id)getLinkToInfo;
+ (id)getBeLinkedInfo;
+ (void)removeLinkInfo;
+ (void)setCurrentLink:(id)arg1 with:(id)arg2;
+ (void)setStateOfHardLinkDone:(_Bool)arg1;
+ (_Bool)getStateOfHardLinkDone;
+ (id)getRelatedMemoryKV;
- (void).cxx_destruct;
@property(retain, nonatomic) WCHardLinkMergeOperation *mergeOperation; // @synthesize mergeOperation=_mergeOperation;
- (void)tryToHardLinkSameFile;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

