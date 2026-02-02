//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface ContactTagCacheMgr
{
    NSMutableDictionary *m_dicCache;
    _Bool _bIsAlreadyBuildCacheFromContacts;
}

- (void).cxx_destruct;
- (id)GetLabelIDToUserNameList;
- (id)GetCacheValue:(id)arg1;
- (void)DelCacheKey:(id)arg1;
- (void)ModCacheKey:(id)arg1 Value:(id)arg2;
- (void)checkLoadCacheDataFromContacts;
- (id)init;

@end

