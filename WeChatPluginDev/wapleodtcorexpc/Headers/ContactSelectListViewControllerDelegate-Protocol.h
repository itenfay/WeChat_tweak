//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class CContact, NSArray;

@protocol ContactSelectListViewControllerDelegate <MMUIViewControllerDelegate>

@optional
- (void)onSelectedContact:(CContact *)arg1;
- (void)onSelectedOrCancelContact:(CContact *)arg1 isSelected:(_Bool)arg2;
- (NSArray *)getReloadContactDataList;
@end

