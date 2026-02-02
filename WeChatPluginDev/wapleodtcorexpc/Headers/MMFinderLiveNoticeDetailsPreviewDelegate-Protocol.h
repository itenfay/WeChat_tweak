//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveNoticeInfo;

@protocol MMFinderLiveNoticeDetailsPreviewDelegate <NSObject>
- (void)onPreviewCreateNoticeFinished:(FinderLiveNoticeInfo *)arg1;
- (void)onPreviewCreateNoticeWithCompletion:(void (^)(FinderLiveNoticeInfo *, int, NSString *))arg1;
@end

