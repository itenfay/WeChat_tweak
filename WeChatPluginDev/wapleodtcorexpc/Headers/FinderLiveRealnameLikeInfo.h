//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveFriendRealnameLikeMsg, FinderLiveRealnameLikeButtonInfo, FinderLiveRealnameLikeClientBubble;

@interface FinderLiveRealnameLikeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveRealnameLikeClientBubble *clientBubble; // @dynamic clientBubble;
@property(retain, nonatomic) FinderLiveRealnameLikeButtonInfo *forwardAreaButtonInfo; // @dynamic forwardAreaButtonInfo;
@property(retain, nonatomic) FinderLiveFriendRealnameLikeMsg *joinliveMsg; // @dynamic joinliveMsg;

@end

