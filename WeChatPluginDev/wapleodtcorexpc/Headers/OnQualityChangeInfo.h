//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class QualityTagInfo;

@interface OnQualityChangeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int changeQualityCfg; // @dynamic changeQualityCfg;
@property(nonatomic) unsigned long long qualityChangeControlFlag; // @dynamic qualityChangeControlFlag;
@property(retain, nonatomic) QualityTagInfo *qualityTagInfo; // @dynamic qualityTagInfo;

@end

