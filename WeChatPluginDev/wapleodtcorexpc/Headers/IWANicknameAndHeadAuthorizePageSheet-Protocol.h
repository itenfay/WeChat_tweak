//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "IWAAuthorizePage-Protocol.h"

@class WAAvatarItem;

@protocol IWANicknameAndHeadAuthorizePageSheet <IWAAuthorizePage>
@property(readonly, nonatomic) unsigned int selectedAvatarId;
- (void)editAvatar:(WAAvatarItem *)arg1;
- (void)deleteAvatar:(WAAvatarItem *)arg1;
- (void)markAvartarIdSelected:(unsigned int)arg1;
- (void)tryAddAvatar;
@end

