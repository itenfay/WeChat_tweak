//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveAppMsgInfoCacheObject : NSObject
{
    CDUnknownBlockType _processAppMsgBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType processAppMsgBlock; // @synthesize processAppMsgBlock=_processAppMsgBlock;
- (void)process;
- (id)initWithProcessAppMsgBlock:(CDUnknownBlockType)arg1;

@end

