//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderAdLiteAppInfo, FinderAdMbInfo, FinderAdPreMovieAdBaseInfo, NSString;

@interface FinderAdPreMovieAdInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *crossPlatformBypData; // @dynamic crossPlatformBypData;
@property(nonatomic) unsigned int displayType; // @dynamic displayType;
@property(retain, nonatomic) FinderAdLiteAppInfo *liteAppInfo; // @dynamic liteAppInfo;
@property(retain, nonatomic) FinderAdMbInfo *mbInfo; // @dynamic mbInfo;
@property(retain, nonatomic) FinderAdPreMovieAdBaseInfo *preMovieInfo; // @dynamic preMovieInfo;

@end

