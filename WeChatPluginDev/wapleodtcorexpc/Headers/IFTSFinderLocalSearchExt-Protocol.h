//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol IFTSFinderLocalSearchExt <NSObject>

@optional
- (void)onFTSFinderCommonSearchResultChanged;
- (void)onFTSFinderSearchResultChangedForDetail;
- (void)onFTSFinderSearchTipsResult:(NSArray *)arg1;
- (void)onFTSFinderSearchResultChanged;
@end

