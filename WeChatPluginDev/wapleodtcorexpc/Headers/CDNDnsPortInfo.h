//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface CDNDnsPortInfo : WXPBGeneratedMessage
{
    int portListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int portCount; // @dynamic portCount;
@property(retain, nonatomic) NSMutableArray *portList; // @dynamic portList;

@end

