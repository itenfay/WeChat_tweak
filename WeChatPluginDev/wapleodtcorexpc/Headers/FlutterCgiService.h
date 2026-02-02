//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterCgiServiceCallback, NSString;

@interface FlutterCgiService : NSObject
{
    FlutterCgiServiceCallback *_callback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FlutterCgiServiceCallback *callback; // @synthesize callback=_callback;
- (void)sendAsync:(unsigned long long)arg1 funcId:(long long)arg2 uri:(id)arg3 data:(id)arg4 longPolling:(_Bool)arg5 longPollingTimeout:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

