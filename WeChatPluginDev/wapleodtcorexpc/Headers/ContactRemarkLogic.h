//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSMutableArray;

@interface ContactRemarkLogic
{
    NSMutableArray *_uploadedCardItem;
    CContact *_downloadingContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *downloadingContact; // @synthesize downloadingContact=_downloadingContact;
@property(retain, nonatomic) NSMutableArray *uploadedCardItem; // @synthesize uploadedCardItem=_uploadedCardItem;
- (void)onFailedToGetContactsFromSvr;
- (void)onModifyContact:(id)arg1;
- (_Bool)contactNeedDownloadCardImg:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onUploadCardImg:(id)arg1;
- (void)onFinishUploadCDN:(id)arg1;
- (void)uploadCardImg:(id)arg1 cardImageList:(id)arg2 index:(long long)arg3;
- (void)uploadCardImg:(id)arg1 cardImgList:(id)arg2;
- (id)getStrangerCardImgList:(id)arg1;
- (id)getFirstCardImg:(id)arg1;
- (id)getCardImgList:(id)arg1;
- (void)downloadCardImg:(id)arg1;
- (void)deleteInvalidateCardForUserName:(id)arg1 rootPath:(id)arg2 fileList:(id)arg3 validPath:(id)arg4;
- (void)tryDeleteInvalidateStrangerCardImg:(id)arg1;
- (void)tryDeleteInvalidateCardImg:(id)arg1;
- (id)pathForStrangerCardImageWithFileName:(id)arg1;
- (id)pathForCardImage:(id)arg1 url:(id)arg2;
- (id)listStrangerCardImgFile;
- (id)listCardImgFile;
- (id)strangerCardImageRootPath;
- (id)cardImageRootPath;
- (id)init;
- (void)dealloc;

@end

