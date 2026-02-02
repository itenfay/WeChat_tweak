//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface FlutterRestorationPlugin : NSObject
{
    _Bool _waitForData;
    _Bool _restorationEnabled;
    NSData *_restorationData;
    CDUnknownBlockType _pendingRequest;
}

@property(copy, nonatomic) CDUnknownBlockType pendingRequest; // @synthesize pendingRequest=_pendingRequest;
@property(retain, nonatomic) NSData *restorationData; // @synthesize restorationData=_restorationData;
- (void)dealloc;
- (id)dataForFramework;
- (void)reset;
- (void)markRestorationComplete;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)initWithChannel:(id)arg1 restorationEnabled:(_Bool)arg2;

@end

