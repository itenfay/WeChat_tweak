//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCDWebServerResponse, NSString;
@protocol GCDWebServerBodyReader;

@interface GCDWebServerBodyEncoder : NSObject
{
    GCDWebServerResponse *_response;
    id <GCDWebServerBodyReader> _reader;
}

- (void)close;
- (id)readData:(id *)arg1;
- (_Bool)open:(id *)arg1;
- (id)initWithResponse:(id)arg1 reader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

