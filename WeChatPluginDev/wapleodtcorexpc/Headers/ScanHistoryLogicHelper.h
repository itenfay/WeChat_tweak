//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ScanHistoryLogicHelper : NSObject
{
    NSMutableDictionary *_dicItems;
    NSMutableArray *_arrSortedKeyByTime;
    NSMutableArray *_arrSortedItems;
}

+ (id)GetCachePath;
+ (_Bool)isExistScanHistory;
- (void).cxx_destruct;
- (id)arrHistoryItems;
- (unsigned long long)historyCount;
- (void)cleanAllData;
- (void)removeItem:(unsigned long long)arg1;
- (void)addItem:(id)arg1 withDataID:(id)arg2 andType:(unsigned long long)arg3;
- (void)SaveDataToFile;
- (void)LoadDataFromFile;
- (id)init;

@end

