//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCSnsOperation;

@interface WCSnsLocalCacheData
{
    unsigned int _updateTime;
    NSString *_itemId;
    WCSnsOperation *_snsOperation;
}

+ (void)initialize;
+ (void)PBArrayAdd_itemId;
+ (void)PBArrayAdd_snsOperation;
+ (void)PBArrayAdd_updateTime;
- (void).cxx_destruct;
@property(retain, nonatomic) WCSnsOperation *snsOperation; // @synthesize snsOperation=_snsOperation;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

