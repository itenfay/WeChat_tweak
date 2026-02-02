//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface WCFinderMentionContactSearchTask : NSObject
{
    CDUnknownBlockType _complete;
}

@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;

@end
