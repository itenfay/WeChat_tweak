//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString;

@class WXPBGeneratedMessage;

@interface PardusSearchRequest_SearchClickItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int clickType; // @dynamic clickType;
@property(nonatomic) _Bool localOrNet; // @dynamic localOrNet;
@property(retain, nonatomic) NSString *searchPrefix; // @dynamic searchPrefix;
@property(nonatomic) unsigned long long searchTimestampMs; // @dynamic searchTimestampMs;

@end

