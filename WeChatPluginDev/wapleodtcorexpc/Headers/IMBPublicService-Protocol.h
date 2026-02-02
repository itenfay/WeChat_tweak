//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MBBuildConfig, NSString;
@protocol IMBLifecycle, IMBPublicServiceDispatcher;

@protocol IMBPublicService <NSObject>
- (id <IMBLifecycle>)provideLifecycle;
- (MBBuildConfig *)provideConfig:(NSString *)arg1;

@optional
- (void)setupDispatcher:(id <IMBPublicServiceDispatcher>)arg1;
@end

