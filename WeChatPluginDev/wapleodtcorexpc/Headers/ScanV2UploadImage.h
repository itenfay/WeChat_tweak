//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BizAiScanCdnImg, NSData, NSMutableArray;

@interface ScanV2UploadImage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BizAiScanCdnImg *cdnImg; // @dynamic cdnImg;
@property(retain, nonatomic) NSData *imgData; // @dynamic imgData;
@property(retain, nonatomic) NSMutableArray *markInfos; // @dynamic markInfos;

@end

