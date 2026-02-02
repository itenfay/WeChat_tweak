//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflinePayCardItem : NSObject
{
    NSString *_bankType;
    NSString *_bindSerial;
    long long _cardId;
    NSString *_forbidWord;
}

+ (void)initialize;
+ (void)PBArrayAdd_forbidWord;
+ (void)PBArrayAdd_cardId;
+ (void)PBArrayAdd_bindSerial;
+ (void)PBArrayAdd_bankType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *forbidWord; // @synthesize forbidWord=_forbidWord;
@property(nonatomic) long long cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *bindSerial; // @synthesize bindSerial=_bindSerial;
@property(retain, nonatomic) NSString *bankType; // @synthesize bankType=_bankType;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

