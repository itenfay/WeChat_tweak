//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MultiDeviceLoginConfirmInfo : NSObject
{
    _Bool _showSyncChatEntrance;
    _Bool _syncChat;
    _Bool _showAutoLoginEntrance;
    _Bool _autoLogin;
}

@property(nonatomic) _Bool autoLogin; // @synthesize autoLogin=_autoLogin;
@property(nonatomic) _Bool showAutoLoginEntrance; // @synthesize showAutoLoginEntrance=_showAutoLoginEntrance;
@property(nonatomic) _Bool syncChat; // @synthesize syncChat=_syncChat;
@property(nonatomic) _Bool showSyncChatEntrance; // @synthesize showSyncChatEntrance=_showSyncChatEntrance;
- (id)description;

@end

