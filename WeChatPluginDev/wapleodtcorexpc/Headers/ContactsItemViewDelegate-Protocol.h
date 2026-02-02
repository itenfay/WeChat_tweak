//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ContactsItemView;

@protocol ContactsItemViewDelegate <NSObject>

@optional
- (void)onContactsItemViewHeightChanged:(ContactsItemView *)arg1;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
@end

