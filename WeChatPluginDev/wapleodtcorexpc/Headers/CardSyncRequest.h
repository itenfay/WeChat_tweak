//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, LayOut, SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface CardSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(retain, nonatomic) LayOut *layout; // @dynamic layout;
@property(nonatomic) unsigned int layoutScene; // @dynamic layoutScene;
@property(nonatomic) unsigned int selector; // @dynamic selector;

@end

