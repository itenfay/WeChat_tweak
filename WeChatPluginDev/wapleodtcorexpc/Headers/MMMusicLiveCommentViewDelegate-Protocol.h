//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicLiveCommentBaseViewModel, MMMusicLiveCommentView;

@protocol MMMusicLiveCommentViewDelegate <NSObject>

@optional
- (void)onCommentViewContentChanged;
- (void)onCommentClicked:(MMMusicLiveCommentBaseViewModel *)arg1;
- (void)onCommentLongPressed:(MMMusicLiveCommentBaseViewModel *)arg1;
- (void)liveCommentViewWillBeginScroll:(MMMusicLiveCommentView *)arg1;
- (void)liveCommentView:(MMMusicLiveCommentView *)arg1 didTappedDetailWithModel:(MMMusicLiveCommentBaseViewModel *)arg2;
@end

