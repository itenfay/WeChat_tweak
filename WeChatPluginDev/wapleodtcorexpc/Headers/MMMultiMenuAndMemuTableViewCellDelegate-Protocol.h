//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMultiMenuAndMemuTableViewCell, NSIndexPath;

@protocol MMMultiMenuAndMemuTableViewCellDelegate <NSObject>

@optional
- (void)onMemuNotFoucusOnCell:(MMMultiMenuAndMemuTableViewCell *)arg1;
- (_Bool)canPerformAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)onMenuTransitionToConfirmWithState:(long long)arg1;
- (void)onMemuShowOnCell:(MMMultiMenuAndMemuTableViewCell *)arg1;
- (void)onMenuOptionsShowOnCell:(MMMultiMenuAndMemuTableViewCell *)arg1;
@end

