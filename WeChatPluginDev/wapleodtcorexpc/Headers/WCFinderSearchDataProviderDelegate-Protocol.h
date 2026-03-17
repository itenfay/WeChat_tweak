//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderSearchDataProvider;

@protocol WCFinderSearchDataProviderDelegate <NSObject>
- (void)dataProviderFetchFailed:(id <WCFinderSearchDataProvider>)arg1;
- (void)dataProvider:(id <WCFinderSearchDataProvider>)arg1 removeAtIdx:(long long)arg2;
- (void)dataProvider:(id <WCFinderSearchDataProvider>)arg1 appendDataToRange:(struct _NSRange)arg2;
@end

