//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface TingPlayInfoCallbackObj : NSObject
{
    CDUnknownBlockType _statusCallback;
}

@property(copy, nonatomic) CDUnknownBlockType statusCallback; // @synthesize statusCallback=_statusCallback;

@end
