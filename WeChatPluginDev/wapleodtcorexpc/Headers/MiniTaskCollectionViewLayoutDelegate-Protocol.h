//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MiniTaskCollectionViewLayoutDelegate <NSObject>
- (_Bool)shouldShowSectionHeader:(long long)arg1;
- (_Bool)isSectionCanLoadMore:(long long)arg1;
- (void)onFinalizeCollectionViewUpdates;
@end

