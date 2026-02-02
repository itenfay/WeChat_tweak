//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderObject, NSString;

@interface JumpToShowProfileByNickNameReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int enterType; // @dynamic enterType;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) FinderObject *object; // @dynamic object;

@end

