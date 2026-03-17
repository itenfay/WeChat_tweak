//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppBrandNotifyModuleState : NSObject
{
    _Bool _isAlreadyDownload;
}

+ (void)initialize;
+ (void)PBArrayAdd_isAlreadyDownload;
@property(nonatomic) _Bool isAlreadyDownload; // @synthesize isAlreadyDownload=_isAlreadyDownload;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

