//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray;

@interface FinderCollectionListInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(nonatomic) unsigned int collectionCount; // @dynamic collectionCount;
@property(retain, nonatomic) NSMutableArray *collectionInfo; // @dynamic collectionInfo;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;

@end

