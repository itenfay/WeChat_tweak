//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenDiscoverResponse, NSData, TingMusicSquareClientInsertionInfo;

@interface TingMusicSquareClientInsertionPatch : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int clientInsertionResult; // @dynamic clientInsertionResult;
@property(retain, nonatomic) NSData *ctrlInfoBuffer; // @dynamic ctrlInfoBuffer;
@property(retain, nonatomic) TingMusicSquareClientInsertionInfo *insertionInfo; // @dynamic insertionInfo;
@property(retain, nonatomic) MMListenDiscoverResponse *patchResult; // @dynamic patchResult;
@property(nonatomic) long long updatetimeSecond; // @dynamic updatetimeSecond;

@end

