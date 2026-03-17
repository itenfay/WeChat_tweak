//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonBoardCrossCollectionBasePageCell;

@protocol EmoticonBoardCrossCollectionBasePageDelegate <NSObject>
- (_Bool)isLayoutForExpand;
- (_Bool)shouldDisableScrollAdjustment;
- (_Bool)accessibilityManualScrollTo:(long long)arg1;
- (void)onPageCell:(EmoticonBoardCrossCollectionBasePageCell *)arg1 didScrollToOffset:(struct CGPoint)arg2;
@end

