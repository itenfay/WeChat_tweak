//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicAudienceApplyPageSheet;

@protocol MMFinderLiveConnectMicAudienceApplyPageSheetDelegate <NSObject>

@optional
- (void)onConnectMicAudienceApplyCameraSettingsRequestedFromPageSheet:(MMFinderLiveConnectMicAudienceApplyPageSheet *)arg1;
- (void)onConnectMicAudienceApplyCanceledFromPageSheet:(MMFinderLiveConnectMicAudienceApplyPageSheet *)arg1;
- (void)onConnectMicAudienceAppliedUsingVideo:(_Bool)arg1 fromPageSheet:(MMFinderLiveConnectMicAudienceApplyPageSheet *)arg2;
@end

