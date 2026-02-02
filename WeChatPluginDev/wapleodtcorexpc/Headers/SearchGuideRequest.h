//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChildMode, LbsLocationNew, NSMutableArray, NSString;

@interface SearchGuideRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long businessType; // @dynamic businessType;
@property(retain, nonatomic) ChildMode *childMode; // @dynamic childMode;
@property(nonatomic) unsigned long long configParam; // @dynamic configParam;
@property(retain, nonatomic) NSMutableArray *extReqParams; // @dynamic extReqParams;
@property(retain, nonatomic) NSString *guideInfo; // @dynamic guideInfo;
@property(nonatomic) unsigned int h5Version; // @dynamic h5Version;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) LbsLocationNew *location; // @dynamic location;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

