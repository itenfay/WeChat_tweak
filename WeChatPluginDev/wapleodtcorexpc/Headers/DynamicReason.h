//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderColor, NSString;

@interface DynamicReason : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) FinderColor *color; // @dynamic color;
@property(retain, nonatomic) NSString *dynamicReason; // @dynamic dynamicReason;
@property(nonatomic) unsigned int reasonLocation; // @dynamic reasonLocation;

@end

