//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface ClipboardOperation : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *extOperationInfo; // @dynamic extOperationInfo;
@property(nonatomic) unsigned int operationContentLength; // @dynamic operationContentLength;
@property(retain, nonatomic) SKBuiltinBuffer_t *operationInfo; // @dynamic operationInfo;
@property(nonatomic) unsigned int operationType; // @dynamic operationType;

@end

