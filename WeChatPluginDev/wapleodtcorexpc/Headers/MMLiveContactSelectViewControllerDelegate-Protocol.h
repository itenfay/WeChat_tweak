//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact;

@protocol MMLiveContactSelectViewControllerDelegate <NSObject>
- (void)onCloseSelectContact:(long long)arg1;
- (void)didSelectAll;
- (void)didSelectFriendContact:(CContact *)arg1;
@end

