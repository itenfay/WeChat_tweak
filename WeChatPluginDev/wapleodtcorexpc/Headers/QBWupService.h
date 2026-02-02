//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QBWupTransfer;

@interface QBWupService : NSObject
{
    QBWupTransfer *_transfer;
    NSString *_servantName;
}

+ (id)service;
- (void).cxx_destruct;
- (id)invocation:(id)arg1 parameter:(id)arg2 completeHandle:(CDUnknownBlockType)arg3;
- (id)encodePackageWithFuncName:(id)arg1 parameter:(id)arg2;
- (id)initWithServant:(id)arg1;
- (id)init;

@end

