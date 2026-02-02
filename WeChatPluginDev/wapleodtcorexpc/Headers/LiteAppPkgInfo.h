//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiteAppPkgInfo : NSObject
{
    _Bool _isAutoCheck;
    NSString *_appId;
    NSString *_baseId;
    NSString *_patchId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAutoCheck; // @synthesize isAutoCheck=_isAutoCheck;
@property(retain, nonatomic) NSString *patchId; // @synthesize patchId=_patchId;
@property(retain, nonatomic) NSString *baseId; // @synthesize baseId=_baseId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)init:(id)arg1 baseId:(id)arg2;

@end

