//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBankInfo : NSObject
{
    NSString *_bind_serial;
    NSString *_polling_forbid_word;
}

+ (void)initialize;
+ (void)PBArrayAdd_polling_forbid_word;
+ (void)PBArrayAdd_bind_serial;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *polling_forbid_word; // @synthesize polling_forbid_word=_polling_forbid_word;
@property(retain, nonatomic) NSString *bind_serial; // @synthesize bind_serial=_bind_serial;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

