//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSData, NSMutableArray;

@class WXPBGeneratedMessage;

@interface HWFrameBuffer : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *rawBuf; // @dynamic rawBuf;
@property(retain, nonatomic) NSMutableArray *sampleSize; // @dynamic sampleSize;
@property(nonatomic) int samplesCount; // @dynamic samplesCount;
@property(retain, nonatomic) NSMutableArray *timeInfo; // @dynamic timeInfo;

@end

