//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NanoCrashGuardConfig : NSObject
{
    NSMutableArray *_guardVersions;
    _Bool _exception;
    NSString *_path;
}

+ (void)checkABTest:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isEnableGuard;
- (void)synchronize;
- (void)setException:(_Bool)arg1;
- (void)clearGuardVersion;
- (void)addGuardVersionFrom:(id)arg1 to:(id)arg2;
- (id)initWithContentsOfFile:(id)arg1;

@end

