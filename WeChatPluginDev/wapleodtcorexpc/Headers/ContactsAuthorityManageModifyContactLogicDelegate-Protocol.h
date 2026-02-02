//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary;

@protocol ContactsAuthorityManageModifyContactLogicDelegate <MMUIViewControllerDelegate>
- (void)reloadAuthorityDetailDeleteContactWithDicMultiSelect:(NSDictionary *)arg1 andDicExistContact:(NSDictionary *)arg2;
- (void)reloadAuthorityDetailAddContactWithDicMultiSelect:(NSDictionary *)arg1 andDicExistContact:(NSDictionary *)arg2;
- (void)onNewContactAuthorityDeleteContactSuccess:(NSArray *)arg1;
- (void)onNewContactAuthorityAddContactSuccess:(NSArray *)arg1;
@end

