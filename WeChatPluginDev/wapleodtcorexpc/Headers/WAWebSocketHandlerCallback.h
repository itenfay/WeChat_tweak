//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAWebSocketHandlerCallback : NSObject
{
    CDUnknownBlockType _openhandler;
    CDUnknownBlockType _closehandler;
    CDUnknownBlockType _errorhandler;
    CDUnknownBlockType _msghandler;
    NSString *_taskId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType msghandler; // @synthesize msghandler=_msghandler;
@property(copy, nonatomic) CDUnknownBlockType errorhandler; // @synthesize errorhandler=_errorhandler;
@property(copy, nonatomic) CDUnknownBlockType closehandler; // @synthesize closehandler=_closehandler;
@property(copy, nonatomic) CDUnknownBlockType openhandler; // @synthesize openhandler=_openhandler;

@end

