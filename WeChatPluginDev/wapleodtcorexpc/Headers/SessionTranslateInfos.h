//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface SessionTranslateInfos
{
    NSString *_userName;
    NSMutableArray *_arrTransInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_arrTransInfo;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrTransInfo; // @synthesize arrTransInfo=_arrTransInfo;
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

