//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderEventViewModelDelegate <NSObject>

@optional
- (void)onFinderEventTabListError;
- (void)onFinderEventInvalidWithErrorCode:(int)arg1;
- (void)onFinderEventClose:(_Bool)arg1 errorCode:(int)arg2;
- (void)onFinderEventHeaderViewNeedRefresh;
- (void)onFinderSearchResultReload;
- (void)onFinderSearchResultError;
- (void)onFinderSearchResultEmpty;
@end

