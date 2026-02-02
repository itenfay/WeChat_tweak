//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSString;

@protocol ContactInfoViewControllerDelegate <NSObject>

@optional
- (void)onUpdateContact:(CContact *)arg1;
- (void)onRemoveContact;
- (void)onSendVerifyMessage:(NSString *)arg1;
- (void)onAddContact;
@end

