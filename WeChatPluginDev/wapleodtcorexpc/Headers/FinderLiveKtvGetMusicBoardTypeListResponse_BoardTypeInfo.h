//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveKtvGetMusicBoardTypeListResponse_BoardTypeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *boardName; // @dynamic boardName;
@property(nonatomic) unsigned int boardType; // @dynamic boardType;
@property(retain, nonatomic) NSMutableArray *subBoardTypeInfoList; // @dynamic subBoardTypeInfoList;

@end

