//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CaraPredictionPositive : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)isProbValid;
- (_Bool)isPositiveValid;
- (id)initWithUUID:(id)arg1 positive:(_Bool)arg2 prob:(float)arg3;
- (id)initWithUUID:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool positive; // @dynamic positive;
@property(nonatomic) float prob; // @dynamic prob;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

