//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, UGCDesignerInfo;

@interface GetDesignerSimpleInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *designerId; // @dynamic designerId;
@property(nonatomic) unsigned int reqType; // @dynamic reqType;
@property(retain, nonatomic) UGCDesignerInfo *ugcdesignerInfo; // @dynamic ugcdesignerInfo;

@end

