//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderRingBack, MusicRingBack;

@interface SimpleRingBack : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderRingBack *finderRingBack; // @dynamic finderRingBack;
@property(retain, nonatomic) MusicRingBack *musicRingBack; // @dynamic musicRingBack;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

