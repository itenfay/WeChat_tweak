//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SugResult_SugItem;

@protocol WebSearchLocalPageCellDelegate <NSObject>

@optional
- (void)onExposeSearchLocalPageItem:(SugResult_SugItem *)arg1 wordIndex:(long long)arg2;
- (void)onClickSearchLocalPageItem:(SugResult_SugItem *)arg1 wordIndex:(long long)arg2;
@end

