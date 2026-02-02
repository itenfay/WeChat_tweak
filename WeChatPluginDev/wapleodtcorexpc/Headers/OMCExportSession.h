//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMCExportSession : NSObject
{
    SharedPtr_3f9afb9a _backingSession;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) SharedPtr_3f9afb9a backingSession; // @synthesize backingSession=_backingSession;
- (void)cancelExportingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startExportingWithOutputFilePath:(id)arg1 exportSettings:(id)arg2 timeline:(id)arg3 exportTimeRange:(CDStruct_e83c9415)arg4 startHandler:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)dealloc;
- (id)init;

@end

