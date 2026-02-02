//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItemDB, NSMutableArray;

@interface FavoritesRepairSvrDataLogic
{
    FavoritesItemDB *_favItemDB;
    NSMutableArray *_resendFavItems;
    _Bool _isCurrentUploading;
    NSMutableArray *_resendingFavItems;
}

- (void).cxx_destruct;
- (void)OnCdnUpload:(id)arg1;
- (void)handleModFavItem:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleCheckFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)updateItemXml:(id)arg1 withResendItem:(id)arg2;
- (void)startCheckResendFavItem:(unsigned int)arg1 resendFavItem:(id)arg2;
- (_Bool)checkAllowUpdateItem:(unsigned int)arg1;
- (void)tryUploadAndSendFavItem;
- (void)checkResendFavItem:(id)arg1;
- (void)processResendFavItem:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processUploadFavItem:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)doCheckFavItem:(id)arg1;
- (void)saveResendFavItem;
- (void)loadResendFavItem;
- (id)resendFavItemSaveFilePath;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;

@end

