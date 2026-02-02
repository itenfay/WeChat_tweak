//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface BusiF2FFavorCommResp : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)sortComposeArray:(id)arg1;
+ (_Bool)favor:(id)arg1 InArray:(id)arg2;
+ (id)composeInfoWithArray:(id)arg1 SelectedArray:(id)arg2;
+ (id)GenFromDictionary:(id)arg1;
- (id)composeArrayWithFavor:(id)arg1;
- (id)composeInfoWithId:(id)arg1;
- (id)composeInfoDefault;
- (void)updateFakeBit:(_Bool)arg1;
- (_Bool)isFakeResp;

// Remaining properties
@property(retain, nonatomic) NSString *defaultFavComposeId; // @dynamic defaultFavComposeId;
@property(retain, nonatomic) NSMutableArray *favorComposeResultList; // @dynamic favorComposeResultList;
@property(retain, nonatomic) NSMutableArray *favorInfoList; // @dynamic favorInfoList;
@property(retain, nonatomic) NSString *favorRespSign; // @dynamic favorRespSign;
@property(retain, nonatomic) NSString *noComposeWording; // @dynamic noComposeWording;

@end

