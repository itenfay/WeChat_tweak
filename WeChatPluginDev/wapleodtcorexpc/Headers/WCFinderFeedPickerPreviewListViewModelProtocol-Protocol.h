//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedContentVM;

@protocol WCFinderFeedPickerPreviewListViewModelProtocol <NSObject>
- (void)loadNextPageData;
- (_Bool)hasMoreData;
- (long long)indexOfTid:(NSString *)arg1;
- (unsigned long long)dataCount;
- (WCFinderFeedContentVM *)contentVMOfTid:(NSString *)arg1;
- (WCFinderFeedContentVM *)contentVMAtIndex:(unsigned long long)arg1;
@end

