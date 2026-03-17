//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTCompressionBaseInfo : NSObject
{
    const void *m_baseInfo;
}

@property(readonly, nonatomic) NSString *table;
- (id)initWithBaseInfo:(const void *)arg1;

@end

