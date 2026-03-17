//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedContentVM;

@protocol WCFinderOpenFinderFeedsTableViewCellDelegate <NSObject>

@optional
- (void)onClickHorizonGuideCardWith:(WCFinderFeedContentVM *)arg1 guideTips:(NSString *)arg2;
- (void)onClickOpenFinderFeedsTableViewCellActionWithGuideTips:(NSString *)arg1;
@end

