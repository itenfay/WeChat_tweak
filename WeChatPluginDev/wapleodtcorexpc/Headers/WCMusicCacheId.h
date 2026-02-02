//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMusicCacheId : NSObject
{
    _Bool _ignoreCache;
    NSString *_innerCacheId;
    NSString *_musicId;
}

+ (id)replacedStringWithInput:(id)arg1 charMap:(id)arg2;
+ (id)base64StringFromSafeFileName:(id)arg1;
+ (id)safeFileNameFromBase64String:(id)arg1;
+ (id)cacheIdFromKSCacheId:(id)arg1;
+ (id)hashForUrl:(id)arg1;
+ (id)cacheIdWithInnerCacheId:(id)arg1 cacheUrl:(id)arg2 dataUrl:(id)arg3;
+ (void)initialize;
+ (void)PBArrayAdd_musicId;
+ (void)PBArrayAdd_ignoreCache;
+ (void)PBArrayAdd_innerCacheId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(copy, nonatomic) NSString *innerCacheId; // @synthesize innerCacheId=_innerCacheId;
- (id)generateKSCacheId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

