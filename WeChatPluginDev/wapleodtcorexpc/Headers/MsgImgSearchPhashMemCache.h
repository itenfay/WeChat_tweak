//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet;

@interface MsgImgSearchPhashMemCache
{
    NSMutableSet *_isGetingPhashStrSet;
    NSMutableDictionary *_localID2MemItemMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *localID2MemItemMap; // @synthesize localID2MemItemMap=_localID2MemItemMap;
@property(retain, nonatomic) NSMutableSet *isGetingPhashStrSet; // @synthesize isGetingPhashStrSet=_isGetingPhashStrSet;
- (id)getPhashStrForLocalID:(unsigned long long)arg1;
- (id)getMemItemForLocalID:(unsigned long long)arg1;
- (void)setMemItem:(id)arg1 localID:(unsigned long long)arg2;
- (void)removeFromGettingSet:(id)arg1;
- (void)addToGettingSet:(id)arg1;
- (_Bool)isInGettingSet:(id)arg1;
- (id)init;

@end

