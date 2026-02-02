//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WxamImageManager
{
    _Bool _exptOnlyStoreWxam;
    _Bool _exptTransferWxam;
    _Bool _exptWxam2Heif;
}

@property(nonatomic) _Bool exptWxam2Heif; // @synthesize exptWxam2Heif=_exptWxam2Heif;
@property(nonatomic) _Bool exptTransferWxam; // @synthesize exptTransferWxam=_exptTransferWxam;
@property(nonatomic) _Bool exptOnlyStoreWxam; // @synthesize exptOnlyStoreWxam=_exptOnlyStoreWxam;
- (id)getPermanentWxamPathByMsg:(id)arg1;
- (id)getWxamPathForUpload:(id)arg1;
- (id)tempPathForHeif:(id)arg1;
- (id)tempPathForWxamDecode:(id)arg1;
- (id)dirPathForWxamDecode;
- (id)getJpgPathByWxam:(id)arg1;
- (id)parseWxamImg:(id)arg1;
- (id)parseWxamData:(id)arg1;
- (id)parseWxamDataToHeif:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

