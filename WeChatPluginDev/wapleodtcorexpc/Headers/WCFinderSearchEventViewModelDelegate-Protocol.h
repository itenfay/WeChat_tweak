//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderSearchEventViewModelDelegate <NSObject>
- (void)finderSearchEventError;
- (void)finderSearchEventNoMoreData;
- (void)finderSearchEventAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderSearchEventReloadAllData;
@end

