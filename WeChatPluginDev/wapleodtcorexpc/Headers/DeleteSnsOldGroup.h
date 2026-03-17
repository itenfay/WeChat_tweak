//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray;

@class WXPBGeneratedMessage;

@interface DeleteSnsOldGroup : WXPBGeneratedMessage
{
    int groupIdsMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int groupCount; // @dynamic groupCount;
@property(retain, nonatomic) NSMutableArray *groupIds; // @dynamic groupIds;

@end

