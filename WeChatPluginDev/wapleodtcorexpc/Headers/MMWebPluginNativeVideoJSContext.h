//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSEventInvokeContext;

@interface MMWebPluginNativeVideoJSContext : NSObject
{
    NSObject *_data;
    JSEventInvokeContext *_jsContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEventInvokeContext *jsContext; // @synthesize jsContext=_jsContext;
@property(retain, nonatomic) NSObject *data; // @synthesize data=_data;

@end

