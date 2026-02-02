//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface EnterpriseBrandAttrDB : NSObject
{
    WCTDatabase *_db;
    WCTTable *_table;
}

- (void).cxx_destruct;
- (_Bool)setAttr:(id)arg1 onProperties:(const void *)arg2;
- (_Bool)deleteAttrByUserName:(id)arg1;
- (id)getAttrByUserName:(id)arg1;
- (void)closeDB;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

