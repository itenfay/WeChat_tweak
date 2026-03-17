//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLivePivotItemViewController;

@protocol MMLivePivotViewDelegate <NSObject>
- (_Bool)isPreviewRelatedState;
- (_Bool)canShowHeaderView;
- (long long)itemCount;
- (MMLivePivotItemViewController *)itemViewControllerWithIndex:(long long)arg1;
@end

