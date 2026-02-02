//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TextStateIcon;

@protocol TextStatePublishRecentUseIconViewDelegate <NSObject>

@optional
- (void)onRecentUseIconListCleared;
- (void)onSelectRecentUseIcon:(TextStateIcon *)arg1;
@end

