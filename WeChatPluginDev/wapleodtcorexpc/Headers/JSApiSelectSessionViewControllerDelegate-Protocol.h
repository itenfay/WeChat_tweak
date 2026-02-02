//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact;

@protocol JSApiSelectSessionViewControllerDelegate
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(CContact *)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnJSApiSelectSessionViewControllerFilterContactCandidate:(CContact *)arg1;
- (void)OnJSApiSelectSessionViewControllerBack;
@end

