//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderMemberShipZoneHeader;

@protocol WCFinderMemberShipZoneHeaderDelegate <NSObject>
- (_Bool)onMemberShipZoneContentTextViewShouldForbidClick;
- (void)onMemberShipZoneHeaderHeightChanged;
- (void)onMemberShipZoneHeaderClickActivity:(WCFinderMemberShipZoneHeader *)arg1;
- (void)onMemberShipZoneHeaderClickFans:(WCFinderMemberShipZoneHeader *)arg1;
- (void)onMemberShipZoneHeaderDataChanged:(WCFinderMemberShipZoneHeader *)arg1;
- (void)onMemberShipZoneHeaderClickLive:(WCFinderMemberShipZoneHeader *)arg1;
- (void)onMemberShipZoneHeaderClickPost:(WCFinderMemberShipZoneHeader *)arg1;
@end

