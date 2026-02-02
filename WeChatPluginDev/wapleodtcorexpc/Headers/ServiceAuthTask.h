//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, ServiceAuthConfig;
@protocol ServiceAuthTaskDelegate;

@interface ServiceAuthTask : NSObject
{
    NSString *_taskId;
    id <ServiceAuthTaskDelegate> _delegate;
    ServiceAuthConfig *_config;
}

+ (id)taskWithConfig:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ServiceAuthConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <ServiceAuthTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void)startTask;
- (id)init;

@end

