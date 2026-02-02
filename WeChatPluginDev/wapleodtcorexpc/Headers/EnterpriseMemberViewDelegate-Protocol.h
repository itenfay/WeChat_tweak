//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EnterpriseMemberViewItem;

@protocol EnterpriseMemberViewDelegate <NSObject>

@optional
- (void)onEnterpriseMemberViewAdd:(EnterpriseMemberViewItem *)arg1;
- (void)onEnterpriseMemberViewDelete:(EnterpriseMemberViewItem *)arg1;
- (void)onEnterpriseMemberHeadImageLongPress:(EnterpriseMemberViewItem *)arg1;
- (void)onEnterpriseMemberHeadImageClick:(EnterpriseMemberViewItem *)arg1;
@end

