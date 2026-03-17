//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSURL, UIButton;

@protocol WCFinderFeedToolbarActionDelegate <NSObject>

@optional
- (void)triangleShadowViewHideChanged:(_Bool)arg1;
- (void)finderAuthorClickAllViewBtn;
- (void)finderAuthorClickAllFavAction;
- (void)finderAuthorClickAllLikeAction;
- (void)clickRecommendUrl:(NSURL *)arg1;
- (void)viewAllCommentAction;
- (_Bool)isToolbarEnableClickLike;
- (void)didClickShareAction:(UIButton *)arg1;
- (void)didClickCollectionAction;
- (void)willClickCollectionAction;
- (void)didClickLikeAction:(_Bool)arg1;
- (void)willClickLikeAction:(_Bool)arg1;
- (void)didClickCommentAction;
- (void)didClickLike;
@end

