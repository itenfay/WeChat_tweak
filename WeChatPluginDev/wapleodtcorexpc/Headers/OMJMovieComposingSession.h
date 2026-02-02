//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJMovieComposingSession : NSObject
{
    SharedPtr_d86e1db6 _backingSession;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_d86e1db6 backingSession; // @synthesize backingSession=_backingSession;
- (void)teardownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startupWithcompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithBackingSession:(const void *)arg1;

@end

