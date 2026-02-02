//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CNContact, CNContactPickerViewController, CNContactProperty, NSArray;

@protocol CNContactPickerDelegate <NSObject>

@optional
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContactProperties:(NSArray *)arg2;
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContacts:(NSArray *)arg2;
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContactProperty:(CNContactProperty *)arg2;
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContact:(CNContact *)arg2;
- (void)contactPickerDidCancel:(CNContactPickerViewController *)arg1;
@end

