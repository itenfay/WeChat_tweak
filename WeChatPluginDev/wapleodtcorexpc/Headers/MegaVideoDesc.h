//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class MegaVideoExtendedReading, MegaVideoLocation, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface MegaVideoDesc : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) MegaVideoExtendedReading *extReading; // @dynamic extReading;
@property(retain, nonatomic) MegaVideoLocation *feedLocation; // @dynamic feedLocation;
@property(retain, nonatomic) MegaVideoLocation *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *media; // @dynamic media;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *mixedBuffer; // @dynamic mixedBuffer;

@end

