//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KFContact, NSMutableDictionary, NSString, WCTDatabase, WCTTable;

@interface KFContactCacher : NSObject
{
    WCTTable *_table;
    NSString *_brandUsrName;
    NSMutableDictionary *_dictOpenId2KFContact;
    WCTDatabase *_db;
    KFContact *_bindKF;
}

- (void).cxx_destruct;
- (_Bool)isNeedUpdateKFContactInfo:(id)arg1;
- (void)setHeadImgUpdateFlag:(id)arg1 oldContact:(id)arg2;
- (id)tableName;
- (id)pathForBindKFContact;
- (void)updateBindKFContact:(id)arg1;
- (id)getBindKFContact;
- (void)modifyHeadImgUpdateFlag:(id)arg1 isNeedUpdate:(_Bool)arg2;
- (id)getKFContact:(id)arg1 andGetIsContactNeedUpdate:(_Bool *)arg2;
- (void)deleteAllKFContacts;
- (void)deleteKFContact:(id)arg1;
- (void)addOrUpdateKFContactList:(id)arg1;
- (void)addOrUpdateKFContact:(id)arg1;
- (id)initWithBrandUsrName:(id)arg1 withDB:(id)arg2;

@end

