//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderJumpInfo_NativeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(nonatomic) unsigned int nativeType; // @dynamic nativeType;
@property(retain, nonatomic) NSData *necessaryBytesParams; // @dynamic necessaryBytesParams;
@property(retain, nonatomic) NSString *necessaryParams; // @dynamic necessaryParams;

@end

