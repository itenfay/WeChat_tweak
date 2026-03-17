//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderUserPageContactInfo, WCFinderUserPageData;

@protocol WCFinderUserPageFetchExt <NSObject>

@optional
- (void)onFinderUserPageLogouted;
- (void)onFinderUserPageFetchFail:(int)arg1;
- (void)onFinderUserPageContactInfoUpdate:(WCFinderUserPageContactInfo *)arg1;
- (void)onFinderUserPageFetchSuccess:(WCFinderUserPageData *)arg1;
@end

