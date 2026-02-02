//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary;

@interface EmoticonStoreSession
{
    NSMutableDictionary *m_itemList;
    NSMutableArray *m_downloadingItemList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_downloadingItemList; // @synthesize m_downloadingItemList;
@property(retain, nonatomic) NSMutableDictionary *m_itemList; // @synthesize m_itemList;
- (id)megerFromArray:(id)arg1 IsForceUpdateTagAndIntroduce:(_Bool)arg2;
- (id)megerFromArray:(id)arg1;
- (id)addItem:(id)arg1 ForProductID:(id)arg2;
- (id)findItemByProductID:(id)arg1;
- (id)init;

@end

