//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface TingDiscoverTaskWrapper : NSObject
{
    CDUnknownBlockType _discoverCompletion;
    CDUnknownBlockType _getCommentInfoCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType getCommentInfoCompletion; // @synthesize getCommentInfoCompletion=_getCommentInfoCompletion;
@property(copy, nonatomic) CDUnknownBlockType discoverCompletion; // @synthesize discoverCompletion=_discoverCompletion;

@end
