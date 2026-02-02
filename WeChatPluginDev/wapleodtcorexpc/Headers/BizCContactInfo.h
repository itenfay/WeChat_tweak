//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact;

@interface BizCContactInfo : NSObject
{
    _Bool _fromStrange;
    CContact *_contact;
}

+ (id)generateBizCContactInfo:(id)arg1 fromStrange:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool fromStrange; // @synthesize fromStrange=_fromStrange;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;

@end

