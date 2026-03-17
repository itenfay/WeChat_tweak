//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact;

@protocol ContactPickerViewDelegate <NSObject>
- (void)onCreateChatRoom:(CContact *)arg1;

@optional
- (void)onSelectCancel;
@end

