//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface MMQRCodeMgr
{
    NSMutableSet *m_downloadSet;
    NSMutableSet *m_newDesignDownloadSet;
    NSMutableSet *m_revokeQRCodeSet;
    _Bool _enablePersonalQrCodeUrlAppendStyleWhenLocalGen;
}

- (void).cxx_destruct;
- (id)getPersonalQRCodeUrlMMKVID;
- (id)getPersonalQRCodeUrl;
- (void)setPersonalQRCodeUrl:(id)arg1;
- (void)freeQBarImageInfo:(struct QBarImageInfo)arg1;
- (void)freePersonalParam:(struct PersonalParam)arg1;
- (struct QBarImageInfo)getQBarImageInfoForUIImage:(id)arg1;
- (int)getEcLevelForUrl:(id)arg1;
- (id)localGenQRCodeImage:(id)arg1 type:(unsigned long long)arg2 url:(id)arg3;
- (void)genAndSaveQRCodeImage:(id)arg1 type:(unsigned long long)arg2 url:(id)arg3 isChatRoom:(_Bool)arg4;
- (void)genAndSavePersonalQrCdoeImage:(id)arg1 type:(unsigned long long)arg2 url:(id)arg3;
- (void)genAndSavePersonalQRCodeImage:(id)arg1 url:(id)arg2;
- (_Bool)enablePersonalQrCodeUrlAppendStyleWhenLocalGen;
- (void)genAndSaveChatRoomQRCodeImage:(id)arg1 url:(id)arg2 serverReturnedImageData:(id)arg3;
- (id)localGenPersonalQRCodeDominatorColor:(id)arg1;
- (_Bool)shouldUseQBarSDK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleRevokeOpenIMChatrommQRCodeResponse:(id)arg1;
- (void)handleGetOpenIMChatRoomQRCodeResponse:(id)arg1;
- (void)handleRevokeChatrommQRCodeResponse:(id)arg1;
- (void)handleGetNewDesignContactQRCodeResponse:(id)arg1;
- (long long)getQBarPersonalModeByImageType:(unsigned long long)arg1;
- (id)buildLocalGenPersonalQRCodeUrlWithStyle:(unsigned long long)arg1 originQrCodeUrl:(id)arg2;
- (void)handleGetQRCodeResponse:(id)arg1;
- (void)updateNewDesignContactQRCodePageMode:(id)arg1 pageMode:(unsigned int)arg2;
- (unsigned int)getCurrentNewDesignContactQRCodePageMode:(id)arg1;
- (id)getNewDesignContactQRCodeDominatorColors:(id)arg1;
- (id)getNewDesignContactQRCode:(id)arg1 type:(unsigned long long)arg2 isChatRoom:(_Bool)arg3;
- (void)p_getNewDesignContactQRCodeFromServer:(id)arg1 withImageType:(unsigned long long)arg2 withOpCode:(unsigned int)arg3;
- (void)p_getNewDesignContactQRCodeFromServer:(id)arg1 withOpCode:(unsigned int)arg2;
- (void)getNewDesignContactQRCodeFromServer:(id)arg1;
- (void)revokeNewDesignContactQRCode:(id)arg1;
- (void)setHasShowRevokeTip:(id)arg1 TipID:(id)arg2;
- (_Bool)revokeOpenIMChatRoomQRCode:(id)arg1 qrcode:(id)arg2;
- (_Bool)p_revokeChatRoomQRCode:(id)arg1 qrcode:(id)arg2;
- (_Bool)revokeChatRoomQRCode:(id)arg1 qrcode:(id)arg2;
- (id)getQRCode:(id)arg1 pullIfNotExist:(_Bool)arg2;
- (void)refreshQRCode:(id)arg1;
- (void)getQRCodeFromServer:(id)arg1 withStyle:(unsigned int)arg2;
- (void)getOpenIMChatRoomQRCodeFromServer:(id)arg1;
- (void)p_getQRCodeFromServer:(id)arg1 withStyle:(unsigned int)arg2 withOpCode:(unsigned int)arg3;
- (void)getQRCodeFromServer:(id)arg1 withStyle:(unsigned int)arg2 withOpCode:(unsigned int)arg3;
- (unsigned int)getCurStyle:(id)arg1;
- (id)getQRCodeConfig:(id)arg1;
- (id)getNewDesignContactQRCodeUrlPath:(id)arg1 type:(unsigned long long)arg2;
- (id)getNewDesignContactQRCodeWithStyleImagePath:(id)arg1 type:(unsigned long long)arg2;
- (id)getNewDesignContactQRCodeImagePath:(id)arg1 type:(unsigned long long)arg2;
- (id)getNewDesignContactQRCodeDominatorColorsPath:(id)arg1;
- (id)getNewDesignContactQRCodePageModePath:(id)arg1;
- (id)getQRCodeConfigPath:(id)arg1;
- (id)getQRCodeStylePath:(id)arg1;
- (id)getQRCodeImagePath:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

