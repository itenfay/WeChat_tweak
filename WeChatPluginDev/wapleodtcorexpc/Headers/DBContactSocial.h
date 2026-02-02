//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface DBContactSocial : NSObject
{
    unsigned int _wcFlag;
    NSString *_mobileHash;
    NSString *_mobileFullHash;
    unsigned long long _qqUin;
    NSString *_linkedInID;
    NSString *_linkedInName;
    NSString *_linkedInPublicUrl;
    NSString *_wcBGImgObjectID;
    NSString *_wcBGImgID;
    NSString *_cardUrl;
    NSMutableArray *_phoneList;
    NSString *_weiDianInfo;
    NSMutableArray *_cardList;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_cardList;
+ (void)PBArrayAdd_weiDianInfo;
+ (void)PBArrayAdd_phoneList;
+ (void)PBArrayAdd_cardUrl;
+ (void)PBArrayAdd_wcBGImgID;
+ (void)PBArrayAdd_wcBGImgObjectID;
+ (void)PBArrayAdd_wcFlag;
+ (void)PBArrayAdd_linkedInPublicUrl;
+ (void)PBArrayAdd_linkedInName;
+ (void)PBArrayAdd_linkedInID;
+ (void)PBArrayAdd_qqUin;
+ (void)PBArrayAdd_mobileFullHash;
+ (void)PBArrayAdd_mobileHash;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cardList; // @synthesize cardList=_cardList;
@property(retain, nonatomic) NSString *weiDianInfo; // @synthesize weiDianInfo=_weiDianInfo;
@property(retain, nonatomic) NSMutableArray *phoneList; // @synthesize phoneList=_phoneList;
@property(retain, nonatomic) NSString *cardUrl; // @synthesize cardUrl=_cardUrl;
@property(retain, nonatomic) NSString *wcBGImgID; // @synthesize wcBGImgID=_wcBGImgID;
@property(retain, nonatomic) NSString *wcBGImgObjectID; // @synthesize wcBGImgObjectID=_wcBGImgObjectID;
@property(nonatomic) unsigned int wcFlag; // @synthesize wcFlag=_wcFlag;
@property(retain, nonatomic) NSString *linkedInPublicUrl; // @synthesize linkedInPublicUrl=_linkedInPublicUrl;
@property(retain, nonatomic) NSString *linkedInName; // @synthesize linkedInName=_linkedInName;
@property(retain, nonatomic) NSString *linkedInID; // @synthesize linkedInID=_linkedInID;
@property(nonatomic) unsigned long long qqUin; // @synthesize qqUin=_qqUin;
@property(retain, nonatomic) NSString *mobileFullHash; // @synthesize mobileFullHash=_mobileFullHash;
@property(retain, nonatomic) NSString *mobileHash; // @synthesize mobileHash=_mobileHash;
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

