//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath;

@protocol WCFinderFollowSearchContactViewModelDelegate <NSObject>

@optional
- (void)onFinderSearchContactReload:(NSIndexPath *)arg1;
- (void)onFinderSearchContactNextPageError;
- (void)onFinderSearchContactResultError;
- (void)onFinderSearchContactResultChanged;
- (void)onFinderSearchContactResultNoMore;
- (void)onFinderSearchContactResultEmpty;
@end

