//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface MMFinderLiveAppMsgInfoCacheObject : NSObject
{
    CDUnknownBlockType _processAppMsgBlock;
}

@property(copy, nonatomic) CDUnknownBlockType processAppMsgBlock; // @synthesize processAppMsgBlock=_processAppMsgBlock;
- (void)process;
- (id)initWithProcessAppMsgBlock:(CDUnknownBlockType)arg1;

@end
