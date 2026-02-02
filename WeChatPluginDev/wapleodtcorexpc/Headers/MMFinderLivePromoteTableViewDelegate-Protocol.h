//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveAnchorPromoteInfo;

@protocol MMFinderLivePromoteTableViewDelegate <NSObject>

@optional
- (void)onPromoteItemContentDisplay:(MMFinderLiveAnchorPromoteInfo *)arg1;
- (void)onPromoteItemContentAction:(MMFinderLiveAnchorPromoteInfo *)arg1;
- (void)onPromoteItemCancel:(MMFinderLiveAnchorPromoteInfo *)arg1;
- (void)onPromoteItemSend:(MMFinderLiveAnchorPromoteInfo *)arg1 onConfirm:(void (^)(void))arg2;
- (void)onPromoteItemAdd:(MMFinderLiveAnchorPromoteInfo *)arg1;
- (void)onPromoteItemDelete:(MMFinderLiveAnchorPromoteInfo *)arg1;
@end

