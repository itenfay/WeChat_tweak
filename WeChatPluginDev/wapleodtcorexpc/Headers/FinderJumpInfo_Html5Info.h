//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderJumpInfo_Html5Info : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(nonatomic) unsigned int heightPercent; // @dynamic heightPercent;
@property(nonatomic) unsigned int style; // @dynamic style;
@property(retain, nonatomic) NSString *transitCommonUxInfo; // @dynamic transitCommonUxInfo;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *webviewExtInfo; // @dynamic webviewExtInfo;

@end

