//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OpenImContactWordingResource : NSObject
{
    unsigned int _updateTime;
    NSString *_language;
    NSString *_content;
    NSString *_pinyin;
    NSString *_quanpin;
}

+ (void)initialize;
+ (void)PBArrayAdd_quanpin;
+ (void)PBArrayAdd_pinyin;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_language;
+ (void)PBArrayAdd_updateTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *quanpin; // @synthesize quanpin=_quanpin;
@property(retain, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

