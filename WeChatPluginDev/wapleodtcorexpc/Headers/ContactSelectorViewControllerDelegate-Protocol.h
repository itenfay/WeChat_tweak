//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, ContactSelectorViewController, OrderedDictionary;

@protocol ContactSelectorViewControllerDelegate <NSObject>

@optional
- (void)contactSelectorViewControllerDidCancel:(ContactSelectorViewController *)arg1;
- (void)contactSelectorViewController:(ContactSelectorViewController *)arg1 didFinishMultiplySelectingContacts:(OrderedDictionary *)arg2;
- (void)contactSelectorViewController:(ContactSelectorViewController *)arg1 didMultiplyDeselectContact:(CContact *)arg2;
- (void)contactSelectorViewController:(ContactSelectorViewController *)arg1 didMultiplySelectContact:(CContact *)arg2;
- (void)contactSelectorViewController:(ContactSelectorViewController *)arg1 didSelectContact:(CContact *)arg2;
- (_Bool)contactSelectorViewController:(ContactSelectorViewController *)arg1 canSelectContact:(CContact *)arg2;
@end

