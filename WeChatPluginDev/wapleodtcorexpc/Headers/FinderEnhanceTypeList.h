//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface FinderEnhanceTypeList : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)typeListWithConfig:(id)arg1 isFeedContainVideo:(_Bool)arg2;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)description;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *detail; // @dynamic detail;
@property(retain, nonatomic) NSMutableArray *listenEventList; // @dynamic listenEventList;

@end

