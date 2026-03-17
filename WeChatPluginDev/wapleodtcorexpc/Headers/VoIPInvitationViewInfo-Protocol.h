//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact;

@protocol VoIPInvitationViewInfo <NSObject>
@property(readonly, nonatomic) CContact *contact;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) unsigned long long animateStatus;
@property(readonly, nonatomic) unsigned long long lastScene;
@property(readonly, nonatomic) unsigned long long scene;
@end

