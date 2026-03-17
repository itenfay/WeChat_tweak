//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol MMFinderLiveMicInviteAudienceBubbleViewDelegate <NSObject>

@optional
- (void)onMMFinderLiveMicInviteAudienceBubbleViewCloseButtonTapped;
- (void)onMMFinderLiveMicInviteAudienceBubbleViewAcceptButtonTappedWithSeatId:(unsigned long long)arg1 inviteMicBuffer:(NSData *)arg2;
@end

