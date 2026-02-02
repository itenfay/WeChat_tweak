//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveCardHighlightTag, FinderLiveCoverInfo, NSString;

@protocol WCFinderFeedContentVMLiveExt <NSObject>

@optional
- (void)onFeedLiveHighlightTagUpdate:(FinderLiveCardHighlightTag *)arg1;
- (void)onFeedLiveCoverInfoUpdate:(FinderLiveCoverInfo *)arg1;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(NSString *)arg2;
- (void)onFeedLiveStatusChanged:(NSString *)arg1 state:(unsigned long long)arg2;
@end

