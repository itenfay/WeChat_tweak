//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MyFavoritesDB, NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol FavoritesTagMgrDelegate;

@interface FavoritesTagMgr
{
    NSMutableArray *m_editingLocalIds;
    NSString *m_editingTag;
    NSString *m_newTag;
    CDUnknownBlockType m_tagEditHandler;
    unsigned int m_editingTagId;
    NSMutableArray *m_editingItemArr;
    NSArray *m_editingTagArr;
    NSMutableArray *m_bindTagRequestArr;
    NSMutableDictionary *m_editingItemDic;
    _Bool m_editContainFail;
    MyFavoritesDB *_favDB;
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_tag2TagIdDic;
    NSMutableDictionary *m_tagId2TagDic;
    NSMutableDictionary *m_tagItemDic;
    NSMutableDictionary *m_dbTagId2TagDic;
    id <FavoritesTagMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesTagMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleBatchModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)updateTagInFavItem:(id)arg1;
- (void)startBatchUpdateTag;
- (void)updateTag:(id)arg1 to:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)HandleDeleteTagResp:(id)arg1 Event:(unsigned int)arg2;
- (void)deleteTagWithId:(unsigned int)arg1;
- (void)HandleRenameTagResp:(id)arg1 Event:(unsigned int)arg2;
- (void)renameTagNameFrom:(id)arg1 withId:(unsigned int)arg2 to:(id)arg3;
- (void)newUpdateTag:(id)arg1 to:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)updateTagForItem:(id)arg1;
- (void)updateItems:(id)arg1 tags:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)HandleBatchBindTagResp:(id)arg1 Event:(unsigned int)arg2;
- (void)processBatchBindTag;
- (void)newUpdateItems:(id)arg1 tags:(id)arg2 mode:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)HandleGetAllTagsResp:(id)arg1 Event:(unsigned int)arg2;
- (void)getAllTagsFromServer;
- (_Bool)processTagsFromServer:(id)arg1;
- (_Bool)saveAllTags;
- (id)getValidTagsFromIdList:(id)arg1;
- (id)getTagsFromIdList:(id)arg1;
- (unsigned int)getTagId:(id)arg1;
- (void)loadAllFavFags;
- (id)getAllTags;
- (void)initDB:(id)arg1;

@end

