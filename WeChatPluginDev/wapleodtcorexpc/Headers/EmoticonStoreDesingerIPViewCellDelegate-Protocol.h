//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol EmoticonStoreDesingerIPViewCellDelegate <NSObject>
- (void)loadMoreForIPSets;
- (_Bool)isIPSetsHasMore;
- (void)onSelectIPSetAtIndex:(unsigned long long)arg1;
- (NSArray *)displayingIpSets;
@end

