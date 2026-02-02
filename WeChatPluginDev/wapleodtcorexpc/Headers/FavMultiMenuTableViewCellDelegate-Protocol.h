//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavMultiMenuTableViewCell, NSIndexPath;

@protocol FavMultiMenuTableViewCellDelegate <NSObject>
- (unsigned int)getSelectedItemTypeWith:(NSIndexPath *)arg1;
- (_Bool)canPerformAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)onMenuOptionsShowOnCell:(FavMultiMenuTableViewCell *)arg1;
@end

