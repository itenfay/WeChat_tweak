//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSCTarget;

@interface JSCDebuggerWrapper : NSObject
{
    struct JSCRemoteConnectionToTarget *_connection;
    JSCTarget *_targetInternal;
    CDUnknownBlockType _disconnectBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType disconnectBlock; // @synthesize disconnectBlock=_disconnectBlock;
@property(retain, nonatomic) JSCTarget *targetInternal; // @synthesize targetInternal=_targetInternal;
@property(nonatomic) struct JSCRemoteConnectionToTarget *connection; // @synthesize connection=_connection;
- (void)dealloc;

@end

