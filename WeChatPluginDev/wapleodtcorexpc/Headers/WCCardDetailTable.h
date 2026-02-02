//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCCardDetailTable
{
    unsigned int _showNum;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_rows;
}

+ (void)initialize;
+ (void)PBArrayAdd_rows;
+ (void)PBArrayAdd_showNum;
+ (void)PBArrayAdd_subtitle;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(nonatomic) unsigned int showNum; // @synthesize showNum=_showNum;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

