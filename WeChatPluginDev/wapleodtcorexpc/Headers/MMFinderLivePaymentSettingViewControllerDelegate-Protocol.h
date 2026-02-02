//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray;

@protocol MMFinderLivePaymentSettingViewControllerDelegate <NSObject>

@optional
- (void)onMMFinderLivePaymentSettingViewControllerTapDoneWithPaymentOpened:(_Bool)arg1 liveMode:(int)arg2 priceInWecoin:(unsigned int)arg3 andFreeContactUsernameList:(NSMutableArray *)arg4 andFreeContactChatroomList:(NSMutableArray *)arg5 andFreeContactListForDigestDisplay:(NSArray *)arg6 selectedFreeFileLists:(NSArray *)arg7 purchaseLivePreviewType:(long long)arg8 trialTimeHour:(unsigned int)arg9 trialTimeMinute:(unsigned int)arg10;
@end

