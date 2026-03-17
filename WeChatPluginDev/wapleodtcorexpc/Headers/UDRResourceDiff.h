//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString;

@class WXPBGeneratedMessage;

@interface UDRResourceDiff : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int baseVersion; // @dynamic baseVersion;
@property(nonatomic) unsigned int diffAlgo; // @dynamic diffAlgo;
@property(retain, nonatomic) NSString *diffMd5; // @dynamic diffMd5;
@property(nonatomic) unsigned int diffSize; // @dynamic diffSize;
@property(retain, nonatomic) NSString *diffUrl; // @dynamic diffUrl;

@end

