//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface EmoticonTabRecommendData : NSObject
{
    NSMutableArray *_m_itemList;
}

+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (id)Instance;
+ (void)initialize;
+ (void)PBArrayAdd_m_itemList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_itemList; // @synthesize m_itemList=_m_itemList;
- (void)saveToFile;
- (void)removeItemWithProductId:(id)arg1;
- (void)addItem:(id)arg1;
- (id)itemList;
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

