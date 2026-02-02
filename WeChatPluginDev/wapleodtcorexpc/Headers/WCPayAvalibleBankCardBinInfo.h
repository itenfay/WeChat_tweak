//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayAvalibleBankCardBinInfo : NSObject
{
    NSArray *m_arrBankCardBin;
    NSString *m_nsVesionNumber;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsVesionNumber; // @synthesize m_nsVesionNumber;
@property(retain, nonatomic) NSArray *m_arrBankCardBin; // @synthesize m_arrBankCardBin;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

