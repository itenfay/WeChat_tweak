//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface TextViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *text; // @dynamic text;
@property(nonatomic) int textAlign; // @dynamic textAlign;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

