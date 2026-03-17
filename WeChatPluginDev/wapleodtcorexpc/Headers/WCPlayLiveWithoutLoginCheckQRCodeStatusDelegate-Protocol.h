//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveContact, FinderLiveInfo, WCPlayLiveWithoutLoginCheckQRCodeStatusCGI;

@protocol WCPlayLiveWithoutLoginCheckQRCodeStatusDelegate <NSObject>
- (void)onCheckQRCodeStatusFail;
- (void)onCheckQRCodeStatusSuccuss:(WCPlayLiveWithoutLoginCheckQRCodeStatusCGI *)arg1 nextPollingTs:(double)arg2 liveContact:(FinderLiveContact *)arg3 liveInfo:(FinderLiveInfo *)arg4;
@end

