//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface FavRecentDataMgr
{
    NSMutableArray *_arrRecentFavDatas;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrRecentFavDatas; // @synthesize arrRecentFavDatas=_arrRecentFavDatas;
- (id)getRecentFavoritesItem;
- (void)removeFavoritesItemByLocalId:(unsigned int)arg1;
- (void)updateFavoritesItemByLocalId:(unsigned int)arg1;
- (void)saveRecentFavDatas;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

