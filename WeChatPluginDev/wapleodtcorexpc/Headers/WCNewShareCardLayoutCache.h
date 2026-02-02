//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCNewShareCardLayoutCacheItem;

@interface WCNewShareCardLayoutCache
{
    WCNewShareCardLayoutCacheItem *_cacheItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCNewShareCardLayoutCacheItem *cacheItem; // @synthesize cacheItem=_cacheItem;
- (void)saveLayoutCache;
- (void)initForSave;
- (void)loadLayoutCache;
- (id)init;

@end

