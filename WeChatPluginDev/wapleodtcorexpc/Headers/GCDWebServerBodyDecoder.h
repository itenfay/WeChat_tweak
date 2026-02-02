//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCDWebServerRequest, NSString;
@protocol GCDWebServerBodyWriter;

@interface GCDWebServerBodyDecoder : NSObject
{
    GCDWebServerRequest *_request;
    id <GCDWebServerBodyWriter> _writer;
}

- (_Bool)close:(id *)arg1;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;
- (_Bool)open:(id *)arg1;
- (id)initWithRequest:(id)arg1 writer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

