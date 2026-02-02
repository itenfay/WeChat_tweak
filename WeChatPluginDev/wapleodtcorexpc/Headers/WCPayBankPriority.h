//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayBankPriority : NSObject
{
    NSArray *_bankinfo_array;
}

+ (id)getLocalBankPriorityData;
+ (_Bool)saveBankPriorityData:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_bankinfo_array;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *bankinfo_array; // @synthesize bankinfo_array=_bankinfo_array;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

