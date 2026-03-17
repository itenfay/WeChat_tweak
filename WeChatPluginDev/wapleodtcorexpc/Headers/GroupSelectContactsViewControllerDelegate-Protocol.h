//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSArray;

@protocol GroupSelectContactsViewControllerDelegate <NSObject>

@optional
- (void)onGroupMultiSelectContactReturn:(NSArray *)arg1;
- (void)onGroupSelectContactReturn:(CContact *)arg1;
- (_Bool)onShouldSelectContact:(CContact *)arg1;
@end

