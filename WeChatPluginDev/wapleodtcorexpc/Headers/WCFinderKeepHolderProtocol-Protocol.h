//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIView, WCFinderFeedContentVM, WCFinderFullMultiMediaTableViewCell;

@protocol WCFinderKeepHolderProtocol <NSObject>
- (UIView *)viewForKeepHoldAnimation;
- (UIImage *)snapshotImageForMedia;
- (WCFinderFullMultiMediaTableViewCell *)currentFeedMediaCell;
- (WCFinderFeedContentVM *)currentFeedContentVM;
- (NSString *)minimizeKey;
@end

