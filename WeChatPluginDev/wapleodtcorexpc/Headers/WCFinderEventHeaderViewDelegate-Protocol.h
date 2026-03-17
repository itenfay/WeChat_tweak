//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderEventInfo;

@protocol WCFinderEventHeaderViewDelegate <NSObject>
- (void)onEventHeaderClickMiniAppEntranceAction:(FinderEventInfo *)arg1;
- (void)onEventHeaderClickJoinButtonAction:(FinderEventInfo *)arg1;
- (void)onEventHeaderClickDescriptionContactAction:(FinderEventInfo *)arg1;
- (void)onEventHeaderClickAuthorInfoAction:(FinderEventInfo *)arg1;
- (void)onEventHeaderClickDescriptionDetailAction:(FinderEventInfo *)arg1;
@end

