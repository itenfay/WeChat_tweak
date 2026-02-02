//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, ShootingTemplateTab;

@interface GetCameraTemplateListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) ShootingTemplateTab *curTab; // @dynamic curTab;
@property(nonatomic) unsigned int maxAge; // @dynamic maxAge;
@property(retain, nonatomic) NSData *pageBuffer; // @dynamic pageBuffer;
@property(retain, nonatomic) NSMutableArray *tabs; // @dynamic tabs;
@property(retain, nonatomic) NSMutableArray *tpls; // @dynamic tpls;

@end

