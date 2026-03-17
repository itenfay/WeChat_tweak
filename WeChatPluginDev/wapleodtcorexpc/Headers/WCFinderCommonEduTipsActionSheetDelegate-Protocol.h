//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderCommonEduTipsActionSheet;

@protocol WCFinderCommonEduTipsActionSheetDelegate <NSObject>
- (void)eduTipsActionSheetClickCancelBtnFrom:(WCFinderCommonEduTipsActionSheet *)arg1;
- (void)eduTipsActionSheetClickAcceptBtnFrom:(WCFinderCommonEduTipsActionSheet *)arg1 receiveRule:(_Bool)arg2;
- (void)eduTipsActionSheetClickTrailBtnFrom:(WCFinderCommonEduTipsActionSheet *)arg1;
- (void)eduTipsActionSheetClickRuleUrl:(NSString *)arg1 actionSheet:(WCFinderCommonEduTipsActionSheet *)arg2;
@end

