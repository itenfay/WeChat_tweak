//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SdkUIContext;

@interface SquareItemSessionContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int itemLoc; // @dynamic itemLoc;
@property(retain, nonatomic) NSString *itemRequestId; // @dynamic itemRequestId;
@property(retain, nonatomic) NSString *itemTitle; // @dynamic itemTitle;
@property(retain, nonatomic) NSString *lineId; // @dynamic lineId;
@property(nonatomic) unsigned int lineLoc; // @dynamic lineLoc;
@property(retain, nonatomic) NSString *lineTitle; // @dynamic lineTitle;
@property(retain, nonatomic) NSMutableArray *newExtinfo; // @dynamic newExtinfo;
@property(retain, nonatomic) NSString *rootCategoryId; // @dynamic rootCategoryId;
@property(retain, nonatomic) NSString *rootListenId; // @dynamic rootListenId;
@property(retain, nonatomic) NSString *rootListenIdType; // @dynamic rootListenIdType;
@property(retain, nonatomic) SdkUIContext *sdkId; // @dynamic sdkId;
@property(nonatomic) unsigned long long time; // @dynamic time;

@end

