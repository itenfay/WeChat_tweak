//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString, WCFinderFeedContentVM, WCFinderSearchHotWord, WCFinderSearchKVReporter, WCFinderSearchMetaData;
@protocol WCFinderSearchDataProviderDelegate;

@protocol WCFinderSearchDataProvider <NSObject>
- (_Bool)loading;
- (_Bool)continueFlag;
- (id <WCFinderSearchDataProviderDelegate>)delegate;
- (void)setDelegate:(id <WCFinderSearchDataProviderDelegate>)arg1;
- (NSMutableArray *)contentVMS;
- (void)requestPageDatas;
- (WCFinderSearchMetaData *)metaData;
- (NSString *)text;

@optional
- (long long)positionForContentVM:(WCFinderFeedContentVM *)arg1;
- (void)setReporter:(WCFinderSearchKVReporter *)arg1;
- (WCFinderSearchHotWord *)hotwordForContentVM:(WCFinderFeedContentVM *)arg1;
@end

