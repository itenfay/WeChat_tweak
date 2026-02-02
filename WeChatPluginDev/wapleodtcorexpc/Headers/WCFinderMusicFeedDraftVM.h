//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedDraft;

@interface WCFinderMusicFeedDraftVM
{
    WCFinderFeedDraft *_draftVM;
}

+ (id)feedVMWithContentVM:(id)arg1 drfatVM:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedDraft *draftVM; // @synthesize draftVM=_draftVM;
- (id)defaultIconWithSize:(struct CGSize *)arg1;
- (double)uploadProgress;
- (_Bool)showProgress;
- (void)onFinderFeedDraftUploadProgressChanged:(id)arg1;
- (void)onFinderFeedDraftBindDraftId:(id)arg1 newDraft:(id)arg2;
- (void)onFinderFeedDraftChanged:(id)arg1;
- (id)observeKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

