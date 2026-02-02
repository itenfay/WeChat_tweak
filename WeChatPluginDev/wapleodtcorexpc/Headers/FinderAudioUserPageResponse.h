//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderCollectionListInfo, FinderContact, FinderLiteAppParam, MMListenCategoryItem, NSData, NSMutableArray;

@interface FinderAudioUserPageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCategoryItem *allAudioList; // @dynamic allAudioList;
@property(retain, nonatomic) NSMutableArray *audioItems; // @dynamic audioItems;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderCollectionListInfo *collectionListInfo; // @dynamic collectionListInfo;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned long long ctrlFlag; // @dynamic ctrlFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderLiteAppParam *liteAppParam; // @dynamic liteAppParam;
@property(retain, nonatomic) FinderLiteAppParam *manageLiteAppParam; // @dynamic manageLiteAppParam;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(nonatomic) unsigned int totalCount; // @dynamic totalCount;

@end

