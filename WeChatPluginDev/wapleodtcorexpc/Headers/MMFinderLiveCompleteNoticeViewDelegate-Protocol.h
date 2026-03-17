//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveCompleteNoticeView;

@protocol MMFinderLiveCompleteNoticeViewDelegate <NSObject>

@optional
- (void)onShowNoticeDetailsRequestedByLiveCompleteNoticeView:(MMFinderLiveCompleteNoticeView *)arg1;
- (void)onCreateNoticeRequestedByLiveCompleteNoticeView:(MMFinderLiveCompleteNoticeView *)arg1;
@end

