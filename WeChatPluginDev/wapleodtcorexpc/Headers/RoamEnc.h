//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface RoamEnc : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long createTimeMs; // @dynamic createTimeMs;
@property(retain, nonatomic) NSMutableArray *deviceEncKeyItems; // @dynamic deviceEncKeyItems;
@property(nonatomic) unsigned long long encId; // @dynamic encId;

@end

