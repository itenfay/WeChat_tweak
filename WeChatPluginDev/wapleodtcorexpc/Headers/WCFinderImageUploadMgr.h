//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCFinderImageUploadMgr
{
    NSMutableDictionary *_uploadDict;
    NSMutableArray *_uploadWaitingArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadWaitingArray; // @synthesize uploadWaitingArray=_uploadWaitingArray;
@property(retain, nonatomic) NSMutableDictionary *uploadDict; // @synthesize uploadDict=_uploadDict;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)realUploadImageWithMeta:(id)arg1;
- (void)checkQueue;
- (void)cancelUploadImagePath:(id)arg1;
- (void)startUploadImagePath:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

