//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCMomentMiaoJianService
{
}

- (_Bool)replaceExtInfoWithTemplateInfoInUploadTask:(id)arg1;
- (_Bool)canReplaceExtInfoWithTemplateInfo;
- (void)fetchTemplateInfoWithExtInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchExtInfoWithAsset:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (_Bool)canCheckExtInfoForAssets;
- (void)requestExtInfoWithMD5:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

