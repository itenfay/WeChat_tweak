//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol RingToneSearchViewModelDelegate <NSObject>

@optional
- (void)clearCurrentDataSuccess;
- (void)onFetchSuggestionSuccess;
- (void)onLoadHistorySuccess;
@end

