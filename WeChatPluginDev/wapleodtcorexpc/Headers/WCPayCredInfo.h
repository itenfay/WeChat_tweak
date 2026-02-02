//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCredInfo : NSObject
{
    NSString *m_nsWCPayCredType;
    NSString *m_nsWCPayCredName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsWCPayCredType; // @synthesize m_nsWCPayCredType;
@property(retain, nonatomic) NSString *m_nsWCPayCredName; // @synthesize m_nsWCPayCredName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

