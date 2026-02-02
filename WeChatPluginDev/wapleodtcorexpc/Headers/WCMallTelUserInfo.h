//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMallTelUserInfo : NSObject
{
    NSString *m_nsUserName;
    NSString *m_nsTelephoneNumber;
    NSString *m_nsOperatorName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsOperatorName; // @synthesize m_nsOperatorName;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(retain, nonatomic) NSString *m_nsTelephoneNumber; // @synthesize m_nsTelephoneNumber;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

