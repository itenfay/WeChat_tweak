//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPermissionLaunchAction : NSObject
{
    _Bool _isUpdateHistoryList;
    unsigned int _actionCode;
    NSString *_openURL;
    NSString *_alertMsg;
    NSString *_alertTitle;
    NSString *_migrateTargetAppid;
    NSString *_retryPageShowMsg;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_migrateTargetAppid;
+ (void)PBArrayAdd_alertTitle;
+ (void)PBArrayAdd_alertMsg;
+ (void)PBArrayAdd_isUpdateHistoryList;
+ (void)PBArrayAdd_openURL;
+ (void)PBArrayAdd_actionCode;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *retryPageShowMsg; // @synthesize retryPageShowMsg=_retryPageShowMsg;
@property(copy, nonatomic) NSString *migrateTargetAppid; // @synthesize migrateTargetAppid=_migrateTargetAppid;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(retain, nonatomic) NSString *alertMsg; // @synthesize alertMsg=_alertMsg;
@property(nonatomic) _Bool isUpdateHistoryList; // @synthesize isUpdateHistoryList=_isUpdateHistoryList;
@property(retain, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(nonatomic) unsigned int actionCode; // @synthesize actionCode=_actionCode;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

