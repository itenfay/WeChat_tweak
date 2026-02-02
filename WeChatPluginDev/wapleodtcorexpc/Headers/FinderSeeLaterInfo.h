//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderSeeLaterInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;
- (id)description;

// Remaining properties
@property(nonatomic) unsigned int addTime; // @dynamic addTime;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

