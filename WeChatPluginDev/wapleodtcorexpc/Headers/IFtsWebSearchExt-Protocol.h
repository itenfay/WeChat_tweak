//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, PardusSearchRequest, PardusSearchResponse;

@protocol IFtsWebSearchExt <NSObject>

@optional
- (void)onPardusSearchResultFail:(NSString *)arg1 request:(PardusSearchRequest *)arg2;
- (void)onPardusSearchResultReturn:(PardusSearchResponse *)arg1 request:(PardusSearchRequest *)arg2;
@end

