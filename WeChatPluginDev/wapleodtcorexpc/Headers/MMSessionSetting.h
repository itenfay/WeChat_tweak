//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMSessionSetting : NSObject
{
    long long m_sessionImportTime;
    unsigned int m_sessionVersion;
    unsigned int m_sessionFailCount;
    unsigned int m_sessionCount;
}

@property unsigned int m_sessionCount; // @synthesize m_sessionCount;
@property unsigned int m_sessionVersion; // @synthesize m_sessionVersion;
@property unsigned int m_sessionFailCount; // @synthesize m_sessionFailCount;
@property long long m_sessionImportTime; // @synthesize m_sessionImportTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

