//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMCProjectManager : NSObject
{
    void *_backingProjectManager;
}

@property(nonatomic) void *backingProjectManager; // @synthesize backingProjectManager=_backingProjectManager;
- (id)loadProjectFromData:(id)arg1;
- (void)prepareProjectResource:(id)arg1 willFetchHandler:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelPrepareProjectResource:(id)arg1;
- (id)initWithBackingProjectManager:(void *)arg1;

@end

