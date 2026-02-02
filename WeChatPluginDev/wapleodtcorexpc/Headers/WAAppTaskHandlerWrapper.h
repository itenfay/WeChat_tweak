//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAAppTaskHandlerWrapper : NSObject
{
    CDUnknownBlockType _updateContactHandler;
    CDUnknownBlockType _launchTaskHandler;
    CDUnknownBlockType _runningEventHandler;
    CDUnknownBlockType _bizCompleteHandler;
    CDUnknownBlockType _bizDataPipeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType bizDataPipeHandler; // @synthesize bizDataPipeHandler=_bizDataPipeHandler;
@property(copy, nonatomic) CDUnknownBlockType bizCompleteHandler; // @synthesize bizCompleteHandler=_bizCompleteHandler;
@property(copy, nonatomic) CDUnknownBlockType runningEventHandler; // @synthesize runningEventHandler=_runningEventHandler;
@property(copy, nonatomic) CDUnknownBlockType launchTaskHandler; // @synthesize launchTaskHandler=_launchTaskHandler;
@property(copy, nonatomic) CDUnknownBlockType updateContactHandler; // @synthesize updateContactHandler=_updateContactHandler;

@end

