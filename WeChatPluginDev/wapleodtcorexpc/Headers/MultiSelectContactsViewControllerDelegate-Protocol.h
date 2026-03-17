//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, NSString;

@protocol MultiSelectContactsViewControllerDelegate <NSObject>
- (void)onMultiSelectContactReturn:(NSArray *)arg1;

@optional
- (_Bool)onSelectRecommendGroupContact:(CContact *)arg1;
- (void)onMultiSelectWithMsgHistory:(NSArray *)arg1 uploadTaskId:(NSString *)arg2;
- (CContact *)contactForContext;
- (unsigned long long)getFTSCommonScene;
- (void)onMultiSelectContactReturn:(NSArray *)arg1 selectContactFromGroup:(NSArray *)arg2;
- (_Bool)onShouldSelectContact:(CContact *)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturnForSns:(NSArray *)arg1;
@end

