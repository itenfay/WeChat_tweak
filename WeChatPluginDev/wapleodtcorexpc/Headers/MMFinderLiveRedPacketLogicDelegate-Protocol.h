//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveRedPacketLogic, NSError;
@protocol MMUIViewControllerDelegate;

@protocol MMFinderLiveRedPacketLogicDelegate <NSObject>
- (void)redPacketLogic:(MMFinderLiveRedPacketLogic *)arg1 didFailToOpenRedPacketWithError:(NSError *)arg2 handled:(_Bool *)arg3;
- (id <MMUIViewControllerDelegate>)viewControllerForRedPacketLogic:(MMFinderLiveRedPacketLogic *)arg1;
@end

