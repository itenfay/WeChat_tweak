//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderWebRedDotModelContainer : NSObject
{
    NSMutableDictionary *_webRedDotDic;
}

+ (void)initialize;
+ (void)PBArrayAdd_webRedDotDic;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *webRedDotDic; // @synthesize webRedDotDic=_webRedDotDic;
- (void)setWebRedDotModel:(id)arg1 forType:(long long)arg2;
- (id)getWebRedDotModelWithType:(long long)arg1;
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

