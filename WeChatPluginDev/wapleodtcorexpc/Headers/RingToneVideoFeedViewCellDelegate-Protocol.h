//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, RingToneDetail, RingToneVideoFeedViewCell;

@protocol RingToneVideoFeedViewCellDelegate <NSObject>
- (void)onJumpToTingInfoPage:(RingToneDetail *)arg1;
- (_Bool)getIfNoNeedToPlay;
- (void)finderPickerListTableViewCellTriggerAntiAddictCheckLogic;
- (void)reportRingEvent:(unsigned long long)arg1 ring:(RingToneDetail *)arg2 cell:(RingToneVideoFeedViewCell *)arg3;
- (NSString *)getSettingsName;
- (unsigned long long)getRingSheetViewFlag;
@end

