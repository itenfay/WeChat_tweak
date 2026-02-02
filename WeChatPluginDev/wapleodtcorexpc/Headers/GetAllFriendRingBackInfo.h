//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString, RingBack, RingBackDetail;

@class WXPBGeneratedMessage;

@interface GetAllFriendRingBackInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) RingBack *ringBack; // @dynamic ringBack;
@property(retain, nonatomic) RingBackDetail *ringBackDetail; // @dynamic ringBackDetail;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

