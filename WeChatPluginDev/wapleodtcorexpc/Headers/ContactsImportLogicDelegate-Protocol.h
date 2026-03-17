//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ContactsImportLogic, NSArray, NSString;

@protocol ContactsImportLogicDelegate <NSObject>

@optional
- (void)onFetchContactListFailed:(ContactsImportLogic *)arg1;
- (void)onFetchContactListSucceeded:(ContactsImportLogic *)arg1 appendContactList:(NSArray *)arg2 isFinished:(_Bool)arg3;
- (void)onBindOldWechatAccountFailed:(ContactsImportLogic *)arg1 errorMessage:(NSString *)arg2 canRecover:(_Bool)arg3;
- (void)onBindOldWechatAccountSucceeded:(ContactsImportLogic *)arg1;
@end

