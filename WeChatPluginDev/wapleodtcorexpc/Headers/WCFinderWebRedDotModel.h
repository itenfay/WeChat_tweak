//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCFinderWebRedDotModel : NSObject
{
    long long _webBusinessType;
    NSDictionary *_redDotDic;
}

+ (void)initialize;
+ (void)PBArrayAdd_redDotDic;
+ (void)PBArrayAdd_webBusinessType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *redDotDic; // @synthesize redDotDic=_redDotDic;
@property(nonatomic) long long webBusinessType; // @synthesize webBusinessType=_webBusinessType;
- (id)getRedDotDicByRedDotPathArray:(id)arg1;
- (void)addRedDotShowInfo:(id)arg1 ctrlInfo:(id)arg2;
- (void)cleanWebRedDotPath:(id)arg1;
- (id)initWithWebBusinessType:(long long)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

