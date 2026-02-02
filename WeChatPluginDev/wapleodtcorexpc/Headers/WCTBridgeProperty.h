//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTBridgeProperty : NSObject
{
    const void *m_innerProperty;
}

+ (id)creatBridgeProperty:(const void *)arg1;
- (const void *)tableBinding;
- (const void *)wctProperty;
@property(readonly, nonatomic) NSString *propertyName;

@end

