//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJTemplateFinderUserInfo : NSObject
{
    NSString *_nickName;
    NSString *_headImgUrl;
    NSString *_signature;
}

+ (void)initialize;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_nickName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFinderUserInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

