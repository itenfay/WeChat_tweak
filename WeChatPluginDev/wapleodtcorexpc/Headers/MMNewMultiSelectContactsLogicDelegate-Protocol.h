//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, NSIndexPath;

@protocol MMNewMultiSelectContactsLogicDelegate <NSObject>
- (void)onSelectCountOutOfLimit;
- (void)onResultTableViewNeedReload;
- (void)onHandleCotnactTableViewSelected:(CContact *)arg1 atIndexPath:(NSIndexPath *)arg2 isSelected:(_Bool)arg3;
- (void)onGetContactSearchResult:(NSArray *)arg1;
@end

