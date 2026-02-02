//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface MMListenRedDotEventData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bizId; // @dynamic bizId;
@property(nonatomic) unsigned int ctrlType; // @dynamic ctrlType;
@property(nonatomic) unsigned int ctrlinfoBusinessType; // @dynamic ctrlinfoBusinessType;
@property(retain, nonatomic) NSData *extReportinfo; // @dynamic extReportinfo;
@property(retain, nonatomic) NSString *lastBizId; // @dynamic lastBizId;
@property(retain, nonatomic) NSString *lastReportEventId; // @dynamic lastReportEventId;
@property(nonatomic) unsigned int messageNum; // @dynamic messageNum;
@property(retain, nonatomic) NSString *objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *showPath; // @dynamic showPath;
@property(retain, nonatomic) NSString *showTxt; // @dynamic showTxt;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(retain, nonatomic) NSString *tipsUuid; // @dynamic tipsUuid;
@property(retain, nonatomic) NSString *tipsid; // @dynamic tipsid;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

