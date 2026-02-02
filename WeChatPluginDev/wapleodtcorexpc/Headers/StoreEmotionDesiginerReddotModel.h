//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface StoreEmotionDesiginerReddotModel
{
    unsigned int _reddotTimeStamp;
    NSString *_designerUin;
    NSMutableDictionary *_pidsWithReddotStatus;
}

+ (id)getSavePath:(id)arg1;
+ (id)getSaveRootDir;
+ (void)initialize;
+ (void)PBArrayAdd_pidsWithReddotStatus;
+ (void)PBArrayAdd_reddotTimeStamp;
+ (void)PBArrayAdd_designerUin;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pidsWithReddotStatus; // @synthesize pidsWithReddotStatus=_pidsWithReddotStatus;
@property(nonatomic) unsigned int reddotTimeStamp; // @synthesize reddotTimeStamp=_reddotTimeStamp;
@property(retain, nonatomic) NSString *designerUin; // @synthesize designerUin=_designerUin;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

