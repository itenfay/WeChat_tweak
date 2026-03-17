//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedDraft;

@protocol WCFinderFeedDraftKeyExt <NSObject>

@optional
- (void)onFinderFeedDraftBindDraftId:(NSString *)arg1 newDraft:(WCFinderFeedDraft *)arg2;
- (void)onFinderFeedDraftUploadProgressChanged:(WCFinderFeedDraft *)arg1;
- (void)onFinderFeedDraftChanged:(WCFinderFeedDraft *)arg1;
@end

