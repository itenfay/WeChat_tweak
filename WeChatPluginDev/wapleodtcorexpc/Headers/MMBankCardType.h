//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMBankCardType : NSObject
{
    _Bool _isMaintainance;
    NSString *_bankType;
    NSString *_bankName;
    NSString *_bankaccType;
    NSString *_bankaccTypeName;
    NSString *_forbidWord;
}

+ (id)BankCardTypeWithBankType:(id)arg1 bankName:(id)arg2 bankaccType:(id)arg3 bankaccTypeName:(id)arg4 isMaintainance:(_Bool)arg5 forbidWord:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *forbidWord; // @synthesize forbidWord=_forbidWord;
@property(readonly, nonatomic) _Bool isMaintainance; // @synthesize isMaintainance=_isMaintainance;
@property(readonly, nonatomic) NSString *bankaccTypeName; // @synthesize bankaccTypeName=_bankaccTypeName;
@property(readonly, nonatomic) NSString *bankaccType; // @synthesize bankaccType=_bankaccType;
@property(readonly, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(readonly, nonatomic) NSString *bankType; // @synthesize bankType=_bankType;
- (id)description;
- (id)initWithBankType:(id)arg1 bankName:(id)arg2 bankaccType:(id)arg3 bankaccTypeName:(id)arg4 isMaintainance:(_Bool)arg5 forbidWord:(id)arg6;

@end

