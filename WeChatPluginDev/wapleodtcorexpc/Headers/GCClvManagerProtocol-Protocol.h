//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UICollectionViewDelegate-Protocol.h"

@class GCBaseCellModel;

@protocol GCClvManagerProtocol <UICollectionViewDelegate>

@optional
- (void)onLastItemVisible:(GCBaseCellModel *)arg1;
@end

