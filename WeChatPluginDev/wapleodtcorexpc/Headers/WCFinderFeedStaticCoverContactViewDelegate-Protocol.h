//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderContact, WCFinderFeedStaticCoverContactView;

@protocol WCFinderFeedStaticCoverContactViewDelegate <NSObject>

@optional
- (void)feedStaticCoverContactView:(WCFinderFeedStaticCoverContactView *)arg1 contact:(WCFinderContact *)arg2;
- (void)onClickPrivateMsgAction;
@end

