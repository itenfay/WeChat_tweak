//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class WCTDatabase, WCTTable;

@interface MMMetricsNetworkDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_tableNetworkSample;
    WCTTable *m_tableStackInfo;
    WCTTable *m_tableImageInfo;
}

- (id)getAllImageInfos;
- (_Bool)insertImageInfos:(id)arg1;
- (id)getNetworkSamplesFrom:(double)arg1 to:(double)arg2;
- (_Bool)insertNetworkSamples:(id)arg1;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)vacuumCleaner;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTable;
- (void)closeDB;
- (id)initWithDBPath:(id)arg1;

@end
