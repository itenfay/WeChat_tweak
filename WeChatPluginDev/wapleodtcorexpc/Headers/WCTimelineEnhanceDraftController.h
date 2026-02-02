//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTimelineEnhanceDraftController : NSObject
{
    NSString *_userName;
    unsigned long long _draftType;
    NSString *_draftID;
}

+ (id)getReferenceImageFiles;
+ (id)keyWithDraftIndex:(id)arg1 draftDetailType:(unsigned long long)arg2 curUsrName:(id)arg3;
+ (id)draftIndexWithDraftType:(unsigned long long)arg1 draftId:(id)arg2;
+ (void)clearTempSightDraftFile;
+ (void)recoveSightDraftFileIfNeeded:(id)arg1;
+ (void)copySightDraftToSingletonPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *draftID; // @synthesize draftID=_draftID;
@property(readonly, nonatomic) unsigned long long draftType; // @synthesize draftType=_draftType;
@property(readonly, copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (_Bool)copyImageAtAlbumToFile:(id)arg1;
- (_Bool)cleanDraftWithDraftIdex:(id)arg1 SynchronizeWithConcernData:(_Bool)arg2;
- (void)cleanAllForwardDraft;
- (void)cleanExpiredDraft;
- (_Bool)isDraftExpired:(id)arg1;
- (id)createDate;
- (id)keyWithDraftIndex:(id)arg1 draftDetailType:(unsigned long long)arg2;
- (id)keyWithType:(unsigned long long)arg1;
- (id)extBean;
- (_Bool)setExtBean:(id)arg1;
- (id)draftRemindContactUsernames;
- (_Bool)setDraftRemindContactUsernames:(id)arg1;
- (id)draftLastPostInVisibleLabelName;
- (_Bool)setDraftLastPostInVisibleLabelName:(id)arg1;
- (id)draftLastPostVisibleLabelName;
- (_Bool)setDraftLastPostVisibleLabelName:(id)arg1;
- (long long)draftLastPrivacy;
- (_Bool)setDraftLastPrivacy:(long long)arg1;
- (id)draftTempSelectContacts;
- (_Bool)setDraftTempSelectContacts:(id)arg1;
- (id)draftTempSelectContactsForDynamicTag;
- (_Bool)setDraftTempSelectContactsForDynamicTag:(id)arg1;
- (_Bool)draftDynamicTagEnabled;
- (_Bool)setDraftDynamicTagEnabled:(_Bool)arg1;
- (id)draftPoiInfo;
- (_Bool)setDraftPoiInfo:(id)arg1;
- (id)draftSight;
- (_Bool)setDraftSight:(id)arg1;
- (id)draftImages;
- (_Bool)setDraftImages:(id)arg1 needCopyImageToFile:(_Bool)arg2;
- (unsigned long long)draftPasteTextLength;
- (_Bool)setDraftPasteTextLength:(unsigned long long)arg1;
- (id)draftText;
- (_Bool)setDraftText:(id)arg1;
- (id)postCycleId;
- (_Bool)setPostCycleId:(id)arg1;
- (_Bool)cleanCurrentDraftSynchronizeWithConcernData:(_Bool)arg1;
- (_Bool)createDraft;
- (_Bool)isDraftExpired;
- (_Bool)hasDraft;
- (id)initWithDraftType:(unsigned long long)arg1 draftID:(id)arg2;

@end

