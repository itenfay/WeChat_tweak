//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAJSEventHandler_getFileInfo
{
    _Bool _shouldEndBeforeDealloc;
}

@property(nonatomic) _Bool shouldEndBeforeDealloc; // @synthesize shouldEndBeforeDealloc=_shouldEndBeforeDealloc;
- (void)dealloc;
- (void)onResult:(id)arg1 error:(id)arg2 errNo:(unsigned int)arg3;
- (void)handleJSEvent:(id)arg1;

@end

