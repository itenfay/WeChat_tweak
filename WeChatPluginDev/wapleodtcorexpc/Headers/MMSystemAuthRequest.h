//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMSystemAuthCancellableToken, NSString;

@interface MMSystemAuthRequest : NSObject
{
    _Bool _weChatAuthorized;
    _Bool _weChatRejected;
    _Bool _weChatIgnored;
    unsigned int _capability;
    unsigned int _authStatus;
    unsigned long long _scene;
    CDUnknownBlockType _handler;
    MMSystemAuthCancellableToken *_cancellableToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMSystemAuthCancellableToken *cancellableToken; // @synthesize cancellableToken=_cancellableToken;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool weChatIgnored; // @synthesize weChatIgnored=_weChatIgnored;
@property(nonatomic) _Bool weChatRejected; // @synthesize weChatRejected=_weChatRejected;
@property(nonatomic) _Bool weChatAuthorized; // @synthesize weChatAuthorized=_weChatAuthorized;
@property(nonatomic) unsigned int authStatus; // @synthesize authStatus=_authStatus;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int capability; // @synthesize capability=_capability;
@property(readonly, copy, nonatomic) NSString *identifierKey;
- (id)description;
- (id)init;
- (_Bool)shouldCacheRejectSelection;
- (void)reportWithAction:(unsigned long long)arg1;

@end

