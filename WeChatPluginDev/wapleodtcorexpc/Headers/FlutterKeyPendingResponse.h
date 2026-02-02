//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterEmbedderKeyResponder;

@interface FlutterKeyPendingResponse : NSObject
{
    FlutterEmbedderKeyResponder *_responder;
    unsigned long long _responseId;
}

@property(nonatomic) unsigned long long responseId; // @synthesize responseId=_responseId;
@property(readonly) FlutterEmbedderKeyResponder *responder; // @synthesize responder=_responder;
- (id)initWithHandler:(id)arg1 responseId:(unsigned long long)arg2;

@end

