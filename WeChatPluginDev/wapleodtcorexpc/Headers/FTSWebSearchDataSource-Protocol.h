//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol FTSWebSearchDataSource <NSObject>

@optional
- (NSArray *)viewStacks;
- (unsigned long long)businessType;
- (NSString *)query;
- (unsigned int)h5Version;
- (NSString *)htmlPath;
@end

