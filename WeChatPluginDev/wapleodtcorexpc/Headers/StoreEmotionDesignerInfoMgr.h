//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface StoreEmotionDesignerInfoMgr
{
    NSMutableDictionary *m_getDesignerSimpleInfoCgiDic;
    NSMutableDictionary *_designerIdDecodeDic;
    NSMutableDictionary *_getDesignerAcctInfoCgiDic;
    NSMutableDictionary *_getDesignerBlockDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *getDesignerBlockDic; // @synthesize getDesignerBlockDic=_getDesignerBlockDic;
@property(retain, nonatomic) NSMutableDictionary *getDesignerAcctInfoCgiDic; // @synthesize getDesignerAcctInfoCgiDic=_getDesignerAcctInfoCgiDic;
@property(retain, nonatomic) NSMutableDictionary *designerIdDecodeDic; // @synthesize designerIdDecodeDic=_designerIdDecodeDic;
- (void)onGetDesignerAcctInfoOKWithDesignerId:(id)arg1 PersonalDesigner:(id)arg2;
- (void)onGetDesignerAcctInfoFailWithDesignerId:(id)arg1;
- (void)onGetDesignerAcctInfoOKWithDeisignerUin:(unsigned int)arg1 PersonalDesigner:(id)arg2;
- (void)onGetDesignerAcctInfoFailWithDeisignerUin:(unsigned int)arg1;
- (void)onGetEmotionActivityCgiFinished:(id)arg1 activity:(id)arg2 link:(id)arg3;
- (void)onGetDesignerSimpleInfoCgiFailedWithDesignerId:(id)arg1;
- (void)onGetDesignerSimpleInfoCgiOkWithDesignerId:(id)arg1 previewEmotion:(id)arg2 previewEmoji:(id)arg3;
- (void)onGetDesignerSimpleInfoCgiOkWithDesignerId:(id)arg1 PersonalDesigner:(id)arg2;
- (void)askForDesignerUseCgiWithDesignerUin:(unsigned int)arg1;
- (void)askForDesignerUseCgiForDesignerId:(id)arg1;
- (void)saveDesignerIdDecoderDic:(id)arg1;
- (id)loadDesignerIdDecodeDic;
- (_Bool)isActivityDegradedFor:(id)arg1;
- (id)askCacheForLink:(id)arg1 md5:(id)arg2;
- (id)askCacheForActivity:(id)arg1;
- (void)askForActivityForActivityId:(id)arg1 md5:(id)arg2 linkId:(id)arg3;
- (_Bool)updateDesignerInfo:(id)arg1 AndneedCallExt:(_Bool)arg2;
- (_Bool)updateDesignerInfo:(id)arg1;
- (id)getDesignerWithDesignerUin:(unsigned int)arg1;
- (id)getDesignerWithDesignerId:(id)arg1;
- (void)askForDesignerWithDesignerUin:(unsigned int)arg1 isForced:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)askForDesignerWithDesignerUin:(unsigned int)arg1 isForced:(_Bool)arg2;
- (void)askForDesignerWithDesignerUin:(unsigned int)arg1;
- (void)askForDesignerForDesignerId:(id)arg1 isForced:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)askForDesignerForDesignerId:(id)arg1 isForced:(_Bool)arg2;
- (void)askForDesignerForDesignerId:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

