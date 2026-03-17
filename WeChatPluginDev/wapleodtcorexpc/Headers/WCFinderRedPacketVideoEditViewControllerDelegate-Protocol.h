//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderRedPacketVideoEditResponseParams;

@protocol WCFinderRedPacketVideoEditViewControllerDelegate <NSObject>
- (void)onRedPacketEditCancel;
- (void)onRedPacketEditResponse:(WCFinderRedPacketVideoEditResponseParams *)arg1;
@end

