//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface MMFinderLiveOpenProductPageAspect : NSObject
{
    CDUnknownBlockType _didBuildFinderLiveWeAppParams;
    CDUnknownBlockType _openWeAppAspect;
}

@property(copy, nonatomic) CDUnknownBlockType openWeAppAspect; // @synthesize openWeAppAspect=_openWeAppAspect;
@property(copy, nonatomic) CDUnknownBlockType didBuildFinderLiveWeAppParams; // @synthesize didBuildFinderLiveWeAppParams=_didBuildFinderLiveWeAppParams;

@end
