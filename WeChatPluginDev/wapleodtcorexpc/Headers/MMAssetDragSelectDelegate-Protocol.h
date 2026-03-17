//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath;

@protocol MMAssetDragSelectDelegate <NSObject>
- (NSIndexPath *)dragSelectIndexPathForRowAtPoint:(struct CGPoint)arg1;
- (void)dragSelectDoActionForIndexPath:(NSArray *)arg1 select:(_Bool)arg2;
- (_Bool)dragSelectAssetIsSelectedAtPoint:(struct CGPoint)arg1;
@end

