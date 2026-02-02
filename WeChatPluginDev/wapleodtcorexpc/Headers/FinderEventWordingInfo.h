//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderEventWordingInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *customJoininTimesWording; // @dynamic customJoininTimesWording;
@property(retain, nonatomic) NSString *describePrefix; // @dynamic describePrefix;
@property(retain, nonatomic) NSString *endButton; // @dynamic endButton;
@property(retain, nonatomic) NSString *exitButton; // @dynamic exitButton;
@property(retain, nonatomic) NSString *exitHint; // @dynamic exitHint;
@property(retain, nonatomic) NSString *feedPrefix; // @dynamic feedPrefix;
@property(retain, nonatomic) NSString *joininButton; // @dynamic joininButton;
@property(retain, nonatomic) NSString *joininTimes; // @dynamic joininTimes;
@property(retain, nonatomic) NSString *pageDescribe; // @dynamic pageDescribe;
@property(retain, nonatomic) NSString *shareFrom; // @dynamic shareFrom;
@property(nonatomic) _Bool showPageDescribe; // @dynamic showPageDescribe;
@property(nonatomic) _Bool showPageNotice; // @dynamic showPageNotice;

@end

