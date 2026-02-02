//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface GetTemplateSquareResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *categoryList; // @dynamic categoryList;
@property(nonatomic) unsigned int maxAge; // @dynamic maxAge;
@property(retain, nonatomic) NSData *pageBuffer; // @dynamic pageBuffer;
@property(retain, nonatomic) NSMutableArray *tpls; // @dynamic tpls;

@end

