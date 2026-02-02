//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCStackFeatPool;

@interface WCFilterStackHandler : NSObject
{
    WCStackFeatPool *_stackFeatPool;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStackFeatPool *stackFeatPool; // @synthesize stackFeatPool=_stackFeatPool;
- (unsigned long long)addStackFeat:(unsigned long long)arg1;
- (void)saveStackFeat;
- (void)loadStackFeat;
- (id)init;

@end

