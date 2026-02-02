//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAOpenSDKJSEventHandlerContext;

@interface WAOpenSDKJSEventResult : NSObject
{
    NSString *_respDataMsg;
    WAOpenSDKJSEventHandlerContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAOpenSDKJSEventHandlerContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *respDataMsg; // @synthesize respDataMsg=_respDataMsg;

@end

