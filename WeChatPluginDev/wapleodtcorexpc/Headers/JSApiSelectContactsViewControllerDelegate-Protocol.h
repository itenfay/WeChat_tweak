//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact;

@protocol JSApiSelectContactsViewControllerDelegate
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(CContact *)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnJSApiSelectContactsViewControllerFilterContactCandidate:(CContact *)arg1;
- (void)OnJSApiSelectContactsViewControllerBack;
@end

