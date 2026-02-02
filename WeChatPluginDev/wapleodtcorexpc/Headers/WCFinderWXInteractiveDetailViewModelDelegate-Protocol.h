//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderWXInteractiveDetailViewModelDelegate <NSObject>

@optional
- (void)onWXInteractiveListLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onWXInteractiveListEmpty;
- (void)onWXInteractiveListNextPageError;
- (void)onWXInteractiveListResultChanged;
- (void)onWXInteractiveListResultNoMore;
@end

