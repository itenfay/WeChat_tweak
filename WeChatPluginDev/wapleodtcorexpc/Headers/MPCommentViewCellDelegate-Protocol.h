//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MPCommentBaseCellViewModel;

@protocol MPCommentViewCellDelegate <NSObject>
- (void)onClickLikeBtn:(MPCommentBaseCellViewModel *)arg1;
- (void)onClickReplyBtn:(MPCommentBaseCellViewModel *)arg1;
- (void)onClickDeleteBtn:(MPCommentBaseCellViewModel *)arg1;
@end

