//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderStartLiveReportInfo, NSData, NSString;

@interface FinderSetAnchorStatusRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long anchorSettingOpFlag; // @dynamic anchorSettingOpFlag;
@property(retain, nonatomic) NSData *anchorStatusBuffer; // @dynamic anchorStatusBuffer;
@property(nonatomic) unsigned long long anchorStatusOpFlag; // @dynamic anchorStatusOpFlag;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned int liveStatus; // @dynamic liveStatus;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) FinderStartLiveReportInfo *startReportInfo; // @dynamic startReportInfo;

@end

