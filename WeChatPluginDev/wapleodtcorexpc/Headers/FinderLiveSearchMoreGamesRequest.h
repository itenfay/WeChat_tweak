//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, ExtDeviceInfo, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveSearchMoreGamesRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) ExtDeviceInfo *extDeviceInfo; // @dynamic extDeviceInfo;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *nextOffset; // @dynamic nextOffset;
@property(retain, nonatomic) NSString *queryWord; // @dynamic queryWord;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

