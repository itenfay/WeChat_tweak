//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameCenterLabelInfo
{
    NSString *_labelName;
    NSString *_labelBgColor;
}

+ (void)initialize;
+ (void)PBArrayAdd_labelBgColor;
+ (void)PBArrayAdd_labelName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *labelBgColor; // @synthesize labelBgColor=_labelBgColor;
@property(retain, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

