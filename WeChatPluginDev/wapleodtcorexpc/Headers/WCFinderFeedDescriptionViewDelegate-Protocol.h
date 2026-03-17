//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedContentVM;

@protocol WCFinderFeedDescriptionViewDelegate <NSObject>

@optional
- (void)onClickContentTopicAction:(NSString *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onClickContentMentionAction:(NSString *)arg1 nickname:(NSString *)arg2 contentVM:(WCFinderFeedContentVM *)arg3;
- (void)onClickContentUsernameAction:(NSString *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onClickCollectionAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickLinkEntry:(WCFinderFeedContentVM *)arg1;
- (void)onClickEventEntry:(WCFinderFeedContentVM *)arg1;
- (void)clickContentPOIAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickContentReadMoreAction:(WCFinderFeedContentVM *)arg1 isExpand:(_Bool)arg2;
@end

