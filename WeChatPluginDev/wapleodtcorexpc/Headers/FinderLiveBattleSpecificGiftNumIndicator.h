//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderLiveBattleSpecificGiftNumIndicator : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)areArgumentsEqualTo:(id)arg1;
@property(readonly, nonatomic) NSData *serializedArguments;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *giftId; // @dynamic giftId;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

