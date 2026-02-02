//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveRedPacketViewModel, NSString;

@protocol MMFinderLiveRedPacketViewModelObserver <NSObject>

@optional
- (void)redPacketViewModel:(MMFinderLiveRedPacketViewModel *)arg1 hiddenDidChange:(_Bool)arg2;
- (void)redPacketViewModel:(MMFinderLiveRedPacketViewModel *)arg1 countDidChange:(unsigned long long)arg2;
- (void)redPacketViewModel:(MMFinderLiveRedPacketViewModel *)arg1 remainingTimeStringDidChange:(NSString *)arg2;
@end

