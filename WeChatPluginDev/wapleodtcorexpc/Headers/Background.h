//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BgImgInfo, BgPagInfo;

@interface Background : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BgImgInfo *imgInfo; // @dynamic imgInfo;
@property(retain, nonatomic) BgPagInfo *pagInfo; // @dynamic pagInfo;
@property(nonatomic) int type; // @dynamic type;

@end

