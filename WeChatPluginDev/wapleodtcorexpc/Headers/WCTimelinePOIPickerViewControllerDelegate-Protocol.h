//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCLocationInfo;

@protocol WCTimelinePOIPickerViewControllerDelegate <NSObject>
- (void)onPOIPickerFinished:(WCLocationInfo *)arg1;

@optional
- (void)onPOIReportStr4CommitChanged:(NSString *)arg1;
- (void)onPOIPickerCancel;
@end

