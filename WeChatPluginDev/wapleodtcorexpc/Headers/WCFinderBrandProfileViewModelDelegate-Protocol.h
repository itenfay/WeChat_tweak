//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderBrandProfileViewModelDelegate <NSObject>
- (void)finderBrandProfileRequestFailWithErrorCode:(int)arg1;
- (void)finderBrandProfileNoMoreData;
- (void)finderBrandProfileAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderBrandProfileReloadAllData;
@end

