//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAWebViewController;

@interface WADelayToForegroundExecuter : NSObject
{
    WAWebViewController *_ownerWebViewController;
    CDUnknownBlockType _handler;
    NSString *_jsapiName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *jsapiName; // @synthesize jsapiName=_jsapiName;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) __weak WAWebViewController *ownerWebViewController; // @synthesize ownerWebViewController=_ownerWebViewController;

@end

