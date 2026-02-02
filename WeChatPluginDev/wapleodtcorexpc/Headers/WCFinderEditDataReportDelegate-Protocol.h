//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderEditDataReportDelegate <NSObject>
- (NSString *)getEditId;
- (unsigned long long)getEnterScene;
- (NSString *)getSourceFeedId;
@end

