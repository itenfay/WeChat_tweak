//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJCameraTemplateInfo : NSObject
{
    NSString *_resourcePackUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_resourcePackUrl;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *resourcePackUrl; // @synthesize resourcePackUrl=_resourcePackUrl;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCameraTemplateInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

