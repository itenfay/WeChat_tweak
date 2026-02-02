//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSMutableArray, NSString;

@interface FinderObjectAdvertisementInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo *accountJumpInfo; // @dynamic accountJumpInfo;
@property(retain, nonatomic) NSString *adPosId; // @dynamic adPosId;
@property(nonatomic) unsigned long long adType; // @dynamic adType;
@property(nonatomic) unsigned long long aid; // @dynamic aid;
@property(nonatomic) _Bool hiddenAdsIcon; // @dynamic hiddenAdsIcon;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSMutableArray *jumpInfoList; // @dynamic jumpInfoList;
@property(nonatomic) unsigned long long originalObjectid; // @dynamic originalObjectid;
@property(retain, nonatomic) NSString *reportExtraData; // @dynamic reportExtraData;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

