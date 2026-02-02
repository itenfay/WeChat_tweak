//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderObject, NSMutableArray, NSString;

@interface FinderMemberQAVO : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *favUsers; // @dynamic favUsers;
@property(nonatomic) unsigned int qaType; // @dynamic qaType;
@property(retain, nonatomic) NSString *refQContent; // @dynamic refQContent;
@property(retain, nonatomic) FinderObject *refQObject; // @dynamic refQObject;

@end

