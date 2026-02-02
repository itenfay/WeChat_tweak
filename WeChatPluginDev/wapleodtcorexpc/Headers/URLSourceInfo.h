//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface URLSourceInfo : NSObject
{
    NSString *m_url;
    NSString *m_bundleId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_bundleId; // @synthesize m_bundleId;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;

@end

