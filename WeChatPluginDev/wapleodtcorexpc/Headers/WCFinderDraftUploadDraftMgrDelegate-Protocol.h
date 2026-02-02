//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderDataItem, WCFinderDraftUploadProgress, WCFinderFeedDraft;

@protocol WCFinderDraftUploadDraftMgrDelegate <NSObject>
- (void)onUploadDraftProgressChanged:(WCFinderFeedDraft *)arg1 progress:(WCFinderDraftUploadProgress *)arg2;
- (void)onUploadDraftFailed:(WCFinderFeedDraft *)arg1;
- (void)doUpdateDBFinderDraft:(WCFinderFeedDraft *)arg1;
- (void)onFinderPostDraftFail:(NSString *)arg1 errorType:(long long)arg2;
- (void)onFinderPostDraftSuccess:(WCFinderFeedDraft *)arg1 dataItem:(WCFinderDataItem *)arg2;
@end

