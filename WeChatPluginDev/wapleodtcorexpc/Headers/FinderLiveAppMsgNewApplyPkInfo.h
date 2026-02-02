//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString, NewAnchorPkInfo;

@interface FinderLiveAppMsgNewApplyPkInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NewAnchorPkInfo *acceptorAnchor; // @dynamic acceptorAnchor;
@property(retain, nonatomic) NewAnchorPkInfo *applyAnchor; // @dynamic applyAnchor;
@property(retain, nonatomic) NSString *applyId; // @dynamic applyId;
@property(nonatomic) unsigned long long confirmExpiredTime; // @dynamic confirmExpiredTime;
@property(retain, nonatomic) NSMutableArray *pkroomAnchors; // @dynamic pkroomAnchors;
@property(retain, nonatomic) NSData *randomPkBuffer; // @dynamic randomPkBuffer;

@end

