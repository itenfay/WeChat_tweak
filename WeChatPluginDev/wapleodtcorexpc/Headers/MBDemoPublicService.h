//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol IMBViewDelegate;

@interface MBDemoPublicService : NSObject
{
    id <IMBViewDelegate> _viewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IMBViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (void)onCreated;
- (id)provideFileSystem;
- (void)provideMainScript:(CDUnknownBlockType)arg1;
- (id)provideLifecycle;
- (id)provideConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

