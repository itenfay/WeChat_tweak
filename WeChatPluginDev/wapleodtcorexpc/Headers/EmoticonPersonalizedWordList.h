//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonWordListMeta, NSMutableSet, NSString;

@interface EmoticonPersonalizedWordList : NSObject
{
    NSMutableSet *_words;
    EmoticonWordListMeta *_meta;
}

+ (_Bool)isExpiredWithConfigInterval:(unsigned int)arg1;
+ (void)markUpdated;
+ (void)clearAll;
+ (void)saveToCache:(id)arg1;
+ (id)getCachedWordList;
+ (unsigned int)transferSvrWordListType:(unsigned int)arg1;
+ (id)path;
+ (void)initialize;
+ (void)PBArrayAdd_meta;
+ (void)PBArrayAdd_words;
- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonWordListMeta *meta; // @synthesize meta=_meta;
@property(retain, nonatomic) NSMutableSet *words; // @synthesize words=_words;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

