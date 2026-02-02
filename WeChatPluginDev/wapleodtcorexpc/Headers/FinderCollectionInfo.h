//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderNextObjectInfo, NSData, NSString;

@interface FinderCollectionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSData *collectionBuffer; // @dynamic collectionBuffer;
@property(retain, nonatomic) NSString *collectionDesc; // @dynamic collectionDesc;
@property(nonatomic) int collectionEnterType; // @dynamic collectionEnterType;
@property(retain, nonatomic) NSString *collectionName; // @dynamic collectionName;
@property(nonatomic) unsigned long long collectionTopicId; // @dynamic collectionTopicId;
@property(nonatomic) int collectionType; // @dynamic collectionType;
@property(retain, nonatomic) NSString *collectionTypeWording; // @dynamic collectionTypeWording;
@property(retain, nonatomic) NSString *coverImgUrl; // @dynamic coverImgUrl;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned int feedCount; // @dynamic feedCount;
@property(nonatomic) unsigned int feedPosId; // @dynamic feedPosId;
@property(nonatomic) unsigned int feedSortId; // @dynamic feedSortId;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool highPriorityThanJumpInfo; // @dynamic highPriorityThanJumpInfo;
@property(nonatomic) unsigned int isLandscape; // @dynamic isLandscape;
@property(nonatomic) unsigned int lastUpdateTime; // @dynamic lastUpdateTime;
@property(nonatomic) unsigned long long nextObjectId; // @dynamic nextObjectId;
@property(retain, nonatomic) FinderNextObjectInfo *nextObjectInfo; // @dynamic nextObjectInfo;
@property(nonatomic) unsigned int readCount; // @dynamic readCount;
@property(readonly) Class superclass;

@end

