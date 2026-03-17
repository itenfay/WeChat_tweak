//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderCommentExtraViewModel;

@protocol WCFinderCommentExtraViewModelDelegate <NSObject>

@optional
- (void)onCommentExtraModelShopInfoChanged:(WCFinderCommentExtraViewModel *)arg1;
- (void)onCommentExtraModelLinkTextChanged:(WCFinderCommentExtraViewModel *)arg1;
@end

