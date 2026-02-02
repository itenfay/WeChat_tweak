//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TextStateLikeData : NSObject
{
    NSMutableDictionary *_idToTypeDict;
    NSMutableDictionary *_idToExpireTimeDict;
}

+ (void)initialize;
+ (void)PBArrayAdd_idToExpireTimeDict;
+ (void)PBArrayAdd_idToTypeDict;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *idToExpireTimeDict; // @synthesize idToExpireTimeDict=_idToExpireTimeDict;
@property(retain, nonatomic) NSMutableDictionary *idToTypeDict; // @synthesize idToTypeDict=_idToTypeDict;
- (void)batchRemoveExpiredLike;
- (void)removeLikeForTextStateId:(id)arg1;
- (void)setLikeType:(long long)arg1 forTextStateWithId:(id)arg2 expireTime:(unsigned int)arg3;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

