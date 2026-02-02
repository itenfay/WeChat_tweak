//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ContactExtendCodePB : NSObject
{
    unsigned int _conType;
    unsigned int _certificationFlag;
    NSString *_remark;
    NSString *_remarkPYFull;
}

+ (void)initialize;
+ (void)PBArrayAdd_certificationFlag;
+ (void)PBArrayAdd_conType;
+ (void)PBArrayAdd_remarkPYFull;
+ (void)PBArrayAdd_remark;
- (void).cxx_destruct;
@property(nonatomic) unsigned int certificationFlag; // @synthesize certificationFlag=_certificationFlag;
@property(nonatomic) unsigned int conType; // @synthesize conType=_conType;
@property(retain, nonatomic) NSString *remarkPYFull; // @synthesize remarkPYFull=_remarkPYFull;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
- (_Bool)decodeFromData:(id)arg1;
- (id)encodeData;
- (id)initWithContact:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

