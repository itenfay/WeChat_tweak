//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ContactProfileRecommendInfo : NSObject
{
    unsigned int recommendTime;
    unsigned int lastTextMessageLocalId;
    NSString *userName;
    NSString *profileMark;
    NSString *profilePhone;
    NSString *profileDesc;
    NSMutableArray *_arrProfileLabel;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastTextMessageLocalId;
+ (void)PBArrayAdd_recommendTime;
+ (void)PBArrayAdd_profileDesc;
+ (void)PBArrayAdd_arrProfileLabel;
+ (void)PBArrayAdd_profilePhone;
+ (void)PBArrayAdd_profileMark;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrProfileLabel; // @synthesize arrProfileLabel=_arrProfileLabel;
@property(nonatomic) unsigned int lastTextMessageLocalId; // @synthesize lastTextMessageLocalId;
@property(nonatomic) unsigned int recommendTime; // @synthesize recommendTime;
@property(retain, nonatomic) NSString *profileDesc; // @synthesize profileDesc;
@property(retain, nonatomic) NSString *profilePhone; // @synthesize profilePhone;
@property(retain, nonatomic) NSString *profileMark; // @synthesize profileMark;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void)copyFrom:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

