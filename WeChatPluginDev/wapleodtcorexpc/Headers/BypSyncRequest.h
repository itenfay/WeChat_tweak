//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BypSyncKeyBuff, NSMutableArray;

@interface BypSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) BypSyncKeyBuff *cliSyncKeyBuff; // @dynamic cliSyncKeyBuff;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) NSMutableArray *selector; // @dynamic selector;

@end

