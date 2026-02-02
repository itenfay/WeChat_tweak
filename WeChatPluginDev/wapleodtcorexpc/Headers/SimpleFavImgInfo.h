//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItem, FavoritesItemDataField, NSString;

@interface SimpleFavImgInfo
{
    FavoritesItemDataField *_m_favData;
    FavoritesItem *_m_favItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FavoritesItem *m_favItem; // @synthesize m_favItem=_m_favItem;
@property(retain, nonatomic) FavoritesItemDataField *m_favData; // @synthesize m_favData=_m_favData;
- (id)getImgUUID;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (id)getThumbUrl;
- (_Bool)isUseWebImg;
- (_Bool)isBrandMpVideoMsg;
- (_Bool)isVideoMsg;
- (_Bool)isImgMsg;
- (id)getDefaultImg;
- (unsigned int)getVideoTime;
- (id)getSightPath;
- (id)getImgPath;
- (id)getSquareImgDir;
- (id)m_strMsgLocalID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

