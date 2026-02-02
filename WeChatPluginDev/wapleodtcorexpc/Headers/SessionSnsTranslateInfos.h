//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface SessionSnsTranslateInfos
{
    NSString *_userName;
    NSMutableDictionary *_dicTransInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicTransInfo;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicTransInfo; // @synthesize dicTransInfo=_dicTransInfo;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

