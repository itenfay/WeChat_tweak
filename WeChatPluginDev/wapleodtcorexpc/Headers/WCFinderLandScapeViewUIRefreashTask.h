//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface WCFinderLandScapeViewUIRefreashTask : NSObject
{
    CDUnknownBlockType _block;
    NSString *_uniqueID;
}

@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;

@end
