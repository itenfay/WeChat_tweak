//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderJumpInfo, FinderObject, NSData, NSString;

@interface FinderLiveSelectGoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(retain, nonatomic) NSData *flagBuffer; // @dynamic flagBuffer;
@property(nonatomic) unsigned long long functionType; // @dynamic functionType;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) FinderObject *object; // @dynamic object;
@property(nonatomic) unsigned int scanScene; // @dynamic scanScene;

@end

