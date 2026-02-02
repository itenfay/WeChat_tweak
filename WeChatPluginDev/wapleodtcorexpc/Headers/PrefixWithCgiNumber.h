//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PrefixWithCgiNumber : NSObject
{
    unsigned int _m_cgiNumber;
    NSString *_m_prefix;
    NSString *_m_cgiName;
}

+ (id)Prefix:(id)arg1 Cgi:(unsigned int)arg2 Name:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_cgiName; // @synthesize m_cgiName=_m_cgiName;
@property(nonatomic) unsigned int m_cgiNumber; // @synthesize m_cgiNumber=_m_cgiNumber;
@property(retain, nonatomic) NSString *m_prefix; // @synthesize m_prefix=_m_prefix;

@end

