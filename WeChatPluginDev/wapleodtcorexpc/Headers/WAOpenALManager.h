//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface WAOpenALManager : NSObject
{
    struct ALCdevice_struct *device;
    NSMutableDictionary *buffers;
    NSMutableArray *contexts;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getCachedAudio:(id)arg1 path:(id)arg2;
- (void)removeCachedAudio:(id)arg1 path:(id)arg2;
- (void)addCachedAudio:(id)arg1 path:(id)arg2 audio:(id)arg3;
- (id)cachedAudio:(id)arg1;
- (void)setCurrentContext:(struct ALCcontext_struct *)arg1;
- (struct ALCcontext_struct *)currentContext;
- (struct ALCcontext_struct *)createContext;
- (void)__releaseContext:(struct ALCcontext_struct *)arg1;
- (void)releaseContext:(struct ALCcontext_struct *)arg1;
- (void)endInterruption:(struct ALCcontext_struct *)arg1;
- (void)beginInterruption:(struct ALCcontext_struct *)arg1;
- (id)init;

@end

