//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMWebCanvasContextPerfInfo : NSObject
{
    _Bool _preload;
    unsigned long long _launchTs;
    unsigned long long _preloadTs;
}

@property(nonatomic) unsigned long long preloadTs; // @synthesize preloadTs=_preloadTs;
@property(nonatomic) unsigned long long launchTs; // @synthesize launchTs=_launchTs;
@property(nonatomic) _Bool preload; // @synthesize preload=_preload;

@end

