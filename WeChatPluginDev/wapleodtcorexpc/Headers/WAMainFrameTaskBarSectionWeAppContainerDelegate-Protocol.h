//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray, WAMainFrameTaskBarSectionWeAppViewModel;

@protocol WAMainFrameTaskBarSectionWeAppContainerDelegate <NSObject>
- (WAMainFrameTaskBarSectionWeAppViewModel *)myWeAppViewModel;
- (WAMainFrameTaskBarSectionWeAppViewModel *)weAppViewModel;
- (NSMutableArray *)arrMyWeAppItem;
- (NSMutableArray *)arrWeAppItem;
- (NSArray *)weAppSectionData;
- (void)onClickSearch;
@end

