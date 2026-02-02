//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class LiveKTVSEIData, NSData;

@class WXPBGeneratedMessage;

@interface LiveSEIData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) LiveKTVSEIData *ktvSeiData; // @dynamic ktvSeiData;
@property(retain, nonatomic) NSData *maskData; // @dynamic maskData;
@property(nonatomic) _Bool personEmpty; // @dynamic personEmpty;
@property(nonatomic) unsigned int useClientMask; // @dynamic useClientMask;
@property(nonatomic) long long wxT; // @dynamic wxT;

@end

