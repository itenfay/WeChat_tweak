//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavSearchExtendFilterPanel, NSString;

@protocol FavSearchExtendFilterPanelDelegate <NSObject>
- (void)onHideExtendFilterPanel;
- (void)onUpdateTag:(NSString *)arg1 to:(NSString *)arg2 fromFilter:(FavSearchExtendFilterPanel *)arg3;
- (void)onCancelTagFromExtendPanel:(NSString *)arg1;
- (void)onSelectTagFromExtendPanel:(NSString *)arg1;
- (void)onCancelTypeFromExtendPanel;
- (void)onSelectTypeFromExtendPanel:(NSString *)arg1;
@end

