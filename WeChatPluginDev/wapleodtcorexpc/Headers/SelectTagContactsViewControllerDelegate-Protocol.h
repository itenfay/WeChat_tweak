//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSDictionary;

@protocol SelectTagContactsViewControllerDelegate <NSObject>
- (_Bool)onShouldTagSelectContact:(CContact *)arg1 withDicMultiSelect:(NSDictionary *)arg2 andDicExistContact:(NSDictionary *)arg3;
- (void)onSelectDoneWithContacts:(NSDictionary *)arg1;
@end

