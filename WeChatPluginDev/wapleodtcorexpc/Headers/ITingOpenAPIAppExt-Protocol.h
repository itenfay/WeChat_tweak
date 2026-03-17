//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMListenCategoryItem;

@protocol ITingOpenAPIAppExt <NSObject>

@optional
- (void)categoryItem:(MMListenCategoryItem *)arg1 onCategoryChangeEvent:(unsigned long long)arg2;
- (void)categoryItem:(MMListenCategoryItem *)arg1 onLikeStatusChanged:(_Bool)arg2;
@end

