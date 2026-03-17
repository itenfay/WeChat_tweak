//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, RingToneDetail, RingTonePickCollectionViewCell;

@protocol RingTonePickerSectionControllerDelegate <NSObject>
- (NSString *)getFriendName;
- (void)jumpToPlayerPage:(RingToneDetail *)arg1 index:(long long)arg2;
- (void)onExclusiveRingPlay:(RingTonePickCollectionViewCell *)arg1 isToPlay:(_Bool)arg2;
- (void)jumpToAuthorPage:(RingToneDetail *)arg1;
- (void)willDisplayCellAtIndex:(long long)arg1;
- (void)didSelectRowAtIndex:(long long)arg1;
@end

