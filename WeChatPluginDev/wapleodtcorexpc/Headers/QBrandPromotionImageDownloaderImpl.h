//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSString, QMapLRUCache;

@interface QBrandPromotionImageDownloaderImpl : NSObject
{
    NSMutableDictionary *_imageTaskDict;
    QMapLRUCache *_imageCache;
    NSLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) QMapLRUCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableDictionary *imageTaskDict; // @synthesize imageTaskDict=_imageTaskDict;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)handleResponseError:(id)arg1 urlString:(id)arg2;
- (void)handleResponseData:(id)arg1 urlString:(id)arg2;
- (void)cancelRequestWithViewItem:(id)arg1;
- (void)requestLogoImageWithViewItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

