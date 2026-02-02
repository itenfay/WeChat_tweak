//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface MMLocationDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
}

+ (long long)getIntegerNumber:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *m_table; // @synthesize m_table;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (_Bool)setAddress:(id)arg1 ByLocation:(struct CLLocationCoordinate2D)arg2 type:(long long)arg3 languageName:(id)arg4;
- (id)getAddressByLocation:(struct CLLocationCoordinate2D)arg1 floorName:(id)arg2 type:(long long)arg3 language:(unsigned long long)arg4;
- (void)closeDBBeforeInit;
- (void)clearData;
- (void)closeDB;
- (void)setupDatabase;
- (id)pathForDatabase;
- (id)init;

@end

