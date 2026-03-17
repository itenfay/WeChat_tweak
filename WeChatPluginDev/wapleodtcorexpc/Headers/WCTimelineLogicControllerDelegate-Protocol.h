//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTableView, MMUIViewController, NSString;
@protocol WCTimelineLogicControllerImplProtocol;

@protocol WCTimelineLogicControllerDelegate <NSObject>
- (MMUIViewController *)getTimelineViewController;
- (long long)getDataItemIndexForSection:(long long)arg1;
- (MMTableView *)getContentTableView;

@optional
- (unsigned long long)sectionIndexForDataItemWithTid:(NSString *)arg1;
- (void)onLogicControllerDataTriggerContentTableViewReload:(id <WCTimelineLogicControllerImplProtocol>)arg1;
- (void)onLogicControllerDataWillChange:(id <WCTimelineLogicControllerImplProtocol>)arg1;
- (_Bool)isInJumpState;
@end

