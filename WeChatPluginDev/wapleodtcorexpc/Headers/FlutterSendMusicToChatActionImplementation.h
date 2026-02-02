//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterSendMusicToChatActionImplementation : NSObject
{
    NSString *_toUsername;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *toUsername; // @synthesize toUsername=_toUsername;
- (id)getChatUserNameWithError:(id *)arg1;
- (void)sendMusicToChatRequest:(id)arg1 error:(id *)arg2;
- (void)onAttachedToEngine:(id)arg1;
- (id)initWithToUsername:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

