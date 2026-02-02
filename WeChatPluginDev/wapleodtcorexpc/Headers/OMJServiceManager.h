//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface OMJServiceManager : NSObject
{
    SharedPtr_3bf8917f _backingServiceManager;
}

@property(nonatomic) SharedPtr_3bf8917f backingServiceManager; // @synthesize backingServiceManager=_backingServiceManager;
- (void)requestTemplateDescWithTemplateID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAllCamFunTemplateInfosWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithBackingServiceManager:(const void *)arg1;

@end
