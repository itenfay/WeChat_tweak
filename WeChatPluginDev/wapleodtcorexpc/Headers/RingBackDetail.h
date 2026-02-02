//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderRingBackDetail, MusicRingBackDetail, NSString, RingBackListenInfo, VibrationInfo;

@interface RingBackDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) FinderRingBackDetail *finderRingBackDetail; // @dynamic finderRingBackDetail;
@property(nonatomic) _Bool isInvalid; // @dynamic isInvalid;
@property(retain, nonatomic) MusicRingBackDetail *musicRingBackDetail; // @dynamic musicRingBackDetail;
@property(nonatomic) int ret; // @dynamic ret;
@property(retain, nonatomic) RingBackListenInfo *ringBackListenInfo; // @dynamic ringBackListenInfo;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) VibrationInfo *vibrationInfo; // @dynamic vibrationInfo;

@end

