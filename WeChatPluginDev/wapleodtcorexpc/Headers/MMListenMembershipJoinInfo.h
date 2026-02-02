//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenHalfPanelInfo, MMListenMembershipJoinInfo_AdSchemeInfo, MMListenMembershipJoinInfo_BindQQMusicSchemeInfo, MMListenMembershipJoinInfo_H5Info, MMListenMembershipJoinInfo_SchemeInfo, MMListenMembershipJoinInfo_WecoinSchemeInfo, NSString;

@interface MMListenMembershipJoinInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenMembershipJoinInfo_AdSchemeInfo *adSchemeInfo; // @dynamic adSchemeInfo;
@property(retain, nonatomic) MMListenMembershipJoinInfo_BindQQMusicSchemeInfo *bindQqMusicSchemeInfo; // @dynamic bindQqMusicSchemeInfo;
@property(retain, nonatomic) MMListenMembershipJoinInfo_H5Info *h5Info; // @dynamic h5Info;
@property(retain, nonatomic) MMListenHalfPanelInfo *halfPanelInfo; // @dynamic halfPanelInfo;
@property(nonatomic) int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) MMListenMembershipJoinInfo_SchemeInfo *schemeInfo; // @dynamic schemeInfo;
@property(retain, nonatomic) NSString *vipIconUrl; // @dynamic vipIconUrl;
@property(retain, nonatomic) MMListenMembershipJoinInfo_WecoinSchemeInfo *wecoinSchemeInfo; // @dynamic wecoinSchemeInfo;

@end

