//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderProfileFeedManager;

@protocol WCFinderProfileFeedManagerDelegate <NSObject>

@optional
- (void)onFeedManager:(WCFinderProfileFeedManager *)arg1 onPostingFeedSuccess:(NSString *)arg2;
@end

