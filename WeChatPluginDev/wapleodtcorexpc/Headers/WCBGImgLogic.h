//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCDataItem, WCLogicMgr;
@protocol WCBGImgLogicNotity;

@interface WCBGImgLogic
{
    id <WCBGImgLogicNotity> m_delFacade;
    WCDataItem *m_lastUploadingDataItem;
    NSMutableDictionary *m_bgUserInfoDictionary;
    NSMutableDictionary *m_coverDataItemDictionary;
    NSString *m_lastDownloadMediaID;
    _Bool _videoCoverEnabled;
    WCLogicMgr *_logicMgr;
}

+ (id)middleSquareImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCLogicMgr *logicMgr; // @synthesize logicMgr=_logicMgr;
@property(nonatomic) _Bool videoCoverEnabled; // @synthesize videoCoverEnabled=_videoCoverEnabled;
@property(nonatomic) __weak id <WCBGImgLogicNotity> m_delFacade; // @synthesize m_delFacade;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (_Bool)validateSecurityWithUserInfo:(id)arg1;
- (_Bool)validateSecurityWithContact:(id)arg1;
- (_Bool)validateSecurityWithMediaItem:(id)arg1;
- (void)updateWCFlagForContact:(id)arg1;
- (void)updateCoverInfoForContact:(id)arg1;
- (void)updateContactBGUserInfo:(id)arg1;
- (void)requestCoverDataItemIfNeededWithContact:(id)arg1;
- (void)requestCoverDataItemWithContact:(id)arg1;
- (void)userInfoDidChange:(id)arg1 forUsername:(id)arg2;
- (void)updateUserInfo:(id)arg1 forUsername:(id)arg2;
- (void)setBGImgUnlikedForUser:(id)arg1 source:(long long)arg2;
- (void)setBGImgLikedForUser:(id)arg1 source:(long long)arg2;
- (_Bool)isBGImgLikedForUser:(id)arg1;
- (_Bool)hasBGImg:(id)arg1;
- (void)updateLastUploadDataItem;
- (void)SetBGBySightDraft:(id)arg1;
- (void)SetBGImgByImg:(id)arg1;
- (void)setCoverWithFinderDataItem:(id)arg1 image:(id)arg2 options:(id)arg3;
- (void)SetBGImgByMedia:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)downloadBackgroundImageForContact:(id)arg1 withMediaItem:(id)arg2;
- (id)signatureForContact:(id)arg1;
- (id)loadBackgroundImageFromMediaItem:(id)arg1;
- (id)backgroundImageByContact:(id)arg1;
- (id)coverDataItemByContact:(id)arg1;
- (id)tryLoadSelfWCBackground;
- (void)trySaveSelfWCBackground:(id)arg1;
- (void)saveSelfWCBackground:(id)arg1;
- (id)fetchCoverDataItemForContact:(id)arg1;
- (id)fetchMyUploadingCoverDataItem;
- (void)updateVideoCoverConfigurations;
- (_Bool)equalCoverInfoInUserInfo1:(id)arg1 userInfo2:(id)arg2;
- (id)generateBGUserInfoFromDataItem:(id)arg1;
- (id)hashForImageUrl:(id)arg1;
- (_Bool)updateCachedCoverDataItem:(id)arg1 forUsername:(id)arg2;
- (id)cachedCoverDataItemForUsername:(id)arg1;
- (void)cleanCache;
- (id)coverDataItemDictionary;
- (id)bgUserInfoDictionary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

