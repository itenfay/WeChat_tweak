//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChildMode, LbsLocationNew, NSMutableArray, NSString, PardusSearchRequest_ClickContextInfo, PardusSearchRequest_SearchClickItem;

@interface PardusSearchRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(retain, nonatomic) ChildMode *childMode; // @dynamic childMode;
@property(retain, nonatomic) PardusSearchRequest_ClickContextInfo *clickContext; // @dynamic clickContext;
@property(nonatomic) unsigned int darkMode; // @dynamic darkMode;
@property(retain, nonatomic) NSMutableArray *extReqParams; // @dynamic extReqParams;
@property(nonatomic) unsigned int h5Version; // @dynamic h5Version;
@property(retain, nonatomic) LbsLocationNew *location; // @dynamic location;
@property(nonatomic) int pardusSwitch; // @dynamic pardusSwitch;
@property(retain, nonatomic) PardusSearchRequest_SearchClickItem *prefixLocalClickInfo; // @dynamic prefixLocalClickInfo;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSMutableArray *searchClickHistory; // @dynamic searchClickHistory;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *source; // @dynamic source;
@property(retain, nonatomic) NSMutableArray *sugPrefixSequence; // @dynamic sugPrefixSequence;
@property(nonatomic) unsigned int webSearchH5Version; // @dynamic webSearchH5Version;

@end

