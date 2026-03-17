//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCrashReportInterpreter : NSObject
{
}

+ (id)p_getBinaryImageUUID:(id)arg1;
+ (_Bool)p_hasPlusPartInArray:(id)arg1;
+ (id)p_getAddressInfoFromSecondStackFormat:(id)arg1;
+ (_Bool)p_validSecondStackFormat:(id)arg1;
+ (id)p_getAddressInfoFromFirstStackFormat:(id)arg1;
+ (_Bool)p_validFirstStackFormat:(id)arg1;
+ (id)p_getAddressFromArray:(id)arg1;
+ (id)p_getSymblicatedAddressInfo:(id)arg1 fromSymblicatedAddressArray:(id)arg2;
+ (id)p_getSymbolicatedLine:(id)arg1 withSymblicatedAddressArray:(id)arg2 withBinaryUUID:(id)arg3;
+ (_Bool)p_validStackFormat:(id)arg1;
+ (id)p_getReportWithReportLineArray:(id)arg1 withSymblicatedAddressArray:(id)arg2 withBinaryUUID:(id)arg3;
+ (id)p_getNewCrashTextString:(id)arg1;
+ (id)p_cleanAddressArray:(id)arg1;
+ (id)p_cleanEmptyString:(id)arg1;
+ (id)getImageUUID:(id)arg1;
+ (unsigned long long)getImageStartAddr:(id)arg1;
+ (id)p_getSymbolicatedStack:(id)arg1;
+ (id)p_getTextStackArray:(id)arg1;
+ (id)interpretText:(id)arg1;
+ (id)interpretReport:(id)arg1;

@end

