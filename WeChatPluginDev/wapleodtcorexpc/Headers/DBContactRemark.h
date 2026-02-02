//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactRemark : NSObject
{
    NSString *_nickName;
    NSString *_aliasName;
    NSString *_remark;
    NSString *_remarkPYFull;
    NSString *_remarkShortPinYin;
    NSString *_fullPinYin;
    NSString *_descriptions;
    NSString *_labelIDList;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_labelIDList;
+ (void)PBArrayAdd_descriptions;
+ (void)PBArrayAdd_fullPinYin;
+ (void)PBArrayAdd_remarkShortPinYin;
+ (void)PBArrayAdd_remarkPYFull;
+ (void)PBArrayAdd_remark;
+ (void)PBArrayAdd_aliasName;
+ (void)PBArrayAdd_nickName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *labelIDList; // @synthesize labelIDList=_labelIDList;
@property(retain, nonatomic) NSString *descriptions; // @synthesize descriptions=_descriptions;
@property(retain, nonatomic) NSString *fullPinYin; // @synthesize fullPinYin=_fullPinYin;
@property(retain, nonatomic) NSString *remarkShortPinYin; // @synthesize remarkShortPinYin=_remarkShortPinYin;
@property(retain, nonatomic) NSString *remarkPYFull; // @synthesize remarkPYFull=_remarkPYFull;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *aliasName; // @synthesize aliasName=_aliasName;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

