//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EncryptSecretInfo : NSObject
{
    NSString *_m_nsTextStateEncryptSecret;
    NSString *_m_nsCommonEncryptSecret;
    NSString *_m_nsRecordEncryptSecret;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_nsRecordEncryptSecret;
+ (void)PBArrayAdd_m_nsCommonEncryptSecret;
+ (void)PBArrayAdd_m_nsTextStateEncryptSecret;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsRecordEncryptSecret; // @synthesize m_nsRecordEncryptSecret=_m_nsRecordEncryptSecret;
@property(retain, nonatomic) NSString *m_nsCommonEncryptSecret; // @synthesize m_nsCommonEncryptSecret=_m_nsCommonEncryptSecret;
@property(retain, nonatomic) NSString *m_nsTextStateEncryptSecret; // @synthesize m_nsTextStateEncryptSecret=_m_nsTextStateEncryptSecret;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

