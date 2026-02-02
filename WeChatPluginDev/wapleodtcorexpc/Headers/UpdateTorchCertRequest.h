//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventBaseRequest, NSString;

@interface UpdateTorchCertRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderEventBaseRequest *baseReq; // @dynamic baseReq;
@property(nonatomic) _Bool isAccessLocation; // @dynamic isAccessLocation;
@property(nonatomic) _Bool isShowSportStep; // @dynamic isShowSportStep;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *name; // @dynamic name;

@end

