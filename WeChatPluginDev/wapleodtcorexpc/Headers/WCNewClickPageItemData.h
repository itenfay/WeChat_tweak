//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCNewClickPageItemData
{
    int _costTime;
    unsigned int _count;
    unsigned int _specialPV;
    NSString *_pageID;
    NSMutableDictionary *_dicWidgetDatas;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicWidgetDatas;
+ (void)PBArrayAdd_specialPV;
+ (void)PBArrayAdd_count;
+ (void)PBArrayAdd_costTime;
+ (void)PBArrayAdd_pageID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicWidgetDatas; // @synthesize dicWidgetDatas=_dicWidgetDatas;
@property(nonatomic) unsigned int specialPV; // @synthesize specialPV=_specialPV;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(nonatomic) int costTime; // @synthesize costTime=_costTime;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
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

