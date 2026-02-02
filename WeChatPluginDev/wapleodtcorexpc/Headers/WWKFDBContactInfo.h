//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WWKFDBContactInfo : NSObject
{
    unsigned int _lastUpdateTime;
    unsigned int _kefuType;
    NSString *_nickName;
    NSString *_bigHeadImg;
    NSString *_smallHeadImg;
    NSString *_nickNamePyinit;
    NSString *_nickNameQuanpin;
    NSString *_ticket;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_kefuType;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_nickNameQuanpin;
+ (void)PBArrayAdd_nickNamePyinit;
+ (void)PBArrayAdd_smallHeadImg;
+ (void)PBArrayAdd_bigHeadImg;
+ (void)PBArrayAdd_nickName;
- (void).cxx_destruct;
@property(nonatomic) unsigned int kefuType; // @synthesize kefuType=_kefuType;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSString *nickNameQuanpin; // @synthesize nickNameQuanpin=_nickNameQuanpin;
@property(retain, nonatomic) NSString *nickNamePyinit; // @synthesize nickNamePyinit=_nickNamePyinit;
@property(retain, nonatomic) NSString *smallHeadImg; // @synthesize smallHeadImg=_smallHeadImg;
@property(retain, nonatomic) NSString *bigHeadImg; // @synthesize bigHeadImg=_bigHeadImg;
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

