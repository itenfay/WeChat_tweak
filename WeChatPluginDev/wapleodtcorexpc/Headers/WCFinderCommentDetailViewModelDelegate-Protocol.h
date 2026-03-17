//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSString, WCFinderComment, WCFinderCommentSectionDataUpdateModel;

@protocol WCFinderCommentDetailViewModelDelegate <NSObject>

@optional
- (void)finderFeedCommentRecommendUpdate:(WCFinderComment *)arg1;
- (void)finderFeedCommentUpdateCommentCount;
- (void)finderSelectAccountChange;
- (void)finderFeedCommentCloseStatusChange;
- (void)finderFeedCommentFeedWasDeleted;
- (void)finderFeedCommentSubCommentFetchFailWithCommentID:(unsigned long long)arg1 direction:(unsigned long long)arg2 retCode:(int)arg3;
- (void)finderFeedTranslateTypeChange:(NSArray *)arg1 errorMsg:(NSString *)arg2;
- (void)finderFeedSubCommentPostTid:(NSString *)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentFetchByRefCommentWithTid:(NSString *)arg1 refCommentID:(unsigned long long)arg2 refCommentIndexPath:(NSIndexPath *)arg3;
- (void)finderFeedDataItemUpdate:(NSString *)arg1;
- (void)finderFeedCommentPostNetworError:(int)arg1 errorMsg:(NSString *)arg2 comment:(WCFinderComment *)arg3;
- (void)finderFeedCommentPostTid:(NSString *)arg1 commentID:(unsigned long long)arg2;
- (void)finderFeedCommentNetworkError:(int)arg1 tid:(NSString *)arg2 direction:(unsigned long long)arg3;
- (void)finderFeedCommentShowShopComment;
- (void)finderFeedCommentFetchWithSpecialCode:(int)arg1;
- (void)finderFeedCommentClickRefcontentFullTextTid:(NSString *)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickFullTextTid:(NSString *)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickLikeTid:(NSString *)arg1 comment:(WCFinderComment *)arg2;
- (void)finderFeedCommentSubCommentDataChange:(unsigned long long)arg1 updateModel:(WCFinderCommentSectionDataUpdateModel *)arg2;
- (void)finderFeedCommentDataChange:(NSString *)arg1;
- (void)finderFeedCommentIsEmpty:(NSString *)arg1;
- (void)finderFeedCommentNoMoreData:(NSString *)arg1 direction:(unsigned long long)arg2;
@end

