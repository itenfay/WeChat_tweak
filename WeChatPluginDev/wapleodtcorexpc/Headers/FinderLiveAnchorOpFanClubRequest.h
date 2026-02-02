//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveAnchorCustomGiftInfo, FinderLiveFanClubInfo, NSString;

@interface FinderLiveAnchorOpFanClubRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(retain, nonatomic) FinderLiveAnchorCustomGiftInfo *opCustomGiftInfo; // @dynamic opCustomGiftInfo;
@property(retain, nonatomic) FinderLiveFanClubInfo *opFanClubInfo; // @dynamic opFanClubInfo;

@end

