//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol IFTSKFContactLocalSearchExt <NSObject>

@optional
- (void)onFTSKFContactCommonSearchResultChanged;
- (void)onFTSKFContactSearchResultChangedForDetail;
- (void)onFTSKFContactSearchTipsResult:(NSArray *)arg1;
- (void)onFTSKFContactSearchResultChanged;
@end

