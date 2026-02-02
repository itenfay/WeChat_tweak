//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface MJAnalyticsPreviewTemplateAction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *musicActions; // @dynamic musicActions;
@property(nonatomic) unsigned long long previewDurationMs; // @dynamic previewDurationMs;
@property(retain, nonatomic) NSString *previewTemplateId; // @dynamic previewTemplateId;
@property(nonatomic) int previewTemplateSourceType; // @dynamic previewTemplateSourceType;

@end

