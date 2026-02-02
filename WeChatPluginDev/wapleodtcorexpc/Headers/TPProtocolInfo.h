//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPProtocolInfo : NSObject
{
    NSString *_protocolName;
    NSString *_protocolVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, nonatomic) NSString *protocolName; // @synthesize protocolName=_protocolName;
- (id)initWithProtocolName:(id)arg1 protocolVersion:(id)arg2;

@end

