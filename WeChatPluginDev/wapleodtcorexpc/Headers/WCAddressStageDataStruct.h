//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCAddressStageDataStruct : NSObject
{
    NSString *m_nsAddressStageID;
    NSString *m_nsAddressPostCode;
    unsigned int m_uiAddressStage;
    NSString *m_nsAddressStageName;
    NSMutableArray *m_arrAddressSubStageData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsAddressStageName; // @synthesize m_nsAddressStageName;
@property(retain, nonatomic) NSString *m_nsAddressStageID; // @synthesize m_nsAddressStageID;
@property(retain, nonatomic) NSString *m_nsAddressPostCode; // @synthesize m_nsAddressPostCode;
@property(retain, nonatomic) NSMutableArray *m_arrAddressSubStageData; // @synthesize m_arrAddressSubStageData;
@property(nonatomic) unsigned int m_uiAddressStage; // @synthesize m_uiAddressStage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

