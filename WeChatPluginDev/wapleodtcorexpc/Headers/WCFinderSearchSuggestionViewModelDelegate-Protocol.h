//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderSearchSuggestionViewModelDelegate <NSObject>

@optional
- (int)enterScene;
- (void)clearCurrentDataSuccess;
- (void)onFetchSuggestionSuccess;
- (void)onLoadHistorySuccess;
@end

