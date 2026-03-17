//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveActionSheetFlowLayoutView, MMScrollActionSheetItem, NSString, WCFinderRedDotTipsShowInfo;

@protocol MMLiveActionSheetFlowLayoutViewDelegate <NSObject>
- (WCFinderRedDotTipsShowInfo *)mmLiveActionSheetFlowLayoutView:(MMLiveActionSheetFlowLayoutView *)arg1 getRedDotShowInfoAtPath:(NSString *)arg2;
- (void)onActionSheetItemClicked:(MMScrollActionSheetItem *)arg1 senderView:(MMLiveActionSheetFlowLayoutView *)arg2;
@end

