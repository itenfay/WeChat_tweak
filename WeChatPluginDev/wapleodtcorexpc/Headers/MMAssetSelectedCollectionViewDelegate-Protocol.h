//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAssetInfo;

@protocol MMAssetSelectedCollectionViewDelegate <NSObject>
- (void)onAssetSelectedCollectionViewMoveAssetInfo:(MMAssetInfo *)arg1 oldIndex:(unsigned long long)arg2;
- (void)onAssetSelectedCollectionViewClickAtIndex:(unsigned long long)arg1;
@end

