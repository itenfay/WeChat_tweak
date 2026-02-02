//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderWindowProductInfo_SkuAttrInfo;

@protocol MMFinderLiveGoodsSKUSelectViewDelegate <NSObject>

@optional
- (void)willShowMoreSKUsTail;
- (void)willShowSKUForIndex:(unsigned long long)arg1;
- (void)didClickTail;
- (void)didReleaseTail;
- (void)didSelectSKU:(FinderWindowProductInfo_SkuAttrInfo *)arg1;
@end

