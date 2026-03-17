//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicLiveCommentBaseViewModel;

@protocol MMusicLiveCommentCommonDelegate <NSObject>

@optional
- (void)onCommentDetailViewClicked:(MMMusicLiveCommentBaseViewModel *)arg1;
- (void)onCommentClicked:(MMMusicLiveCommentBaseViewModel *)arg1;
- (void)onCommentLongPressed:(MMMusicLiveCommentBaseViewModel *)arg1;
@end

