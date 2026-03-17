//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedDraft;

@protocol WCFinderFeedDraftExt <NSObject>

@optional
- (void)onMembershipFeedDraftCreated:(WCFinderFeedDraft *)arg1;
- (void)onMembershipFeedDraftDeleted:(WCFinderFeedDraft *)arg1;
- (void)onMembershipFeedDraftAdded:(WCFinderFeedDraft *)arg1;
- (void)onMembershipFeedDraftChanged:(WCFinderFeedDraft *)arg1;
- (void)onFinderFeedDraftCreated:(WCFinderFeedDraft *)arg1;
- (void)onFinderFeedDraftDeleted:(WCFinderFeedDraft *)arg1;
- (void)onFinderFeedDraftAdded:(WCFinderFeedDraft *)arg1;
- (void)onFinderFeedDraftChanged:(WCFinderFeedDraft *)arg1;
@end

