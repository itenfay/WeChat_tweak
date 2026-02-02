//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SnsObject;

@interface WSGroup : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *completeWording; // @dynamic completeWording;
@property(retain, nonatomic) NSMutableArray *feedIdList; // @dynamic feedIdList;
@property(nonatomic) unsigned long long groupId; // @dynamic groupId;
@property(nonatomic) unsigned int groupTime; // @dynamic groupTime;
@property(retain, nonatomic) SnsObject *topObject; // @dynamic topObject;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

