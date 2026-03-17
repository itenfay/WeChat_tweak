//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath;

@protocol WCEditSelectedCollectionViewDelegate <NSObject>
- (struct CGSize)getEditSelectedCollectionViewItemSize;
- (void)onMoveItemAtIndexPath:(NSIndexPath *)arg1 toIndexPath:(NSIndexPath *)arg2;
- (void)onClickItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
@end

