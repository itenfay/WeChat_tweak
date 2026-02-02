//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCGiftCardInfo;

@interface WCCardFieldItem
{
    unsigned int _showflag;
    NSString *_title;
    NSString *_subTitle;
    NSString *_auxTitle;
    NSString *_url;
    NSString *_primaryColor;
    NSString *_secondaryColor;
    NSString *_iconUrl;
    WCGiftCardInfo *_giftCardInfo;
    NSString *_appBrandUserName;
    NSString *_appBrandPass;
    NSString *_cellIconUrl;
    NSString *_cellLinkIconUrl;
    NSString *_finderUsername;
    NSString *_cellCoverUrl;
    NSString *_cellCenterIconUrl;
    NSString *_feedId;
    NSString *_nonceId;
}

+ (void)initialize;
+ (void)PBArrayAdd_secondaryColor;
+ (void)PBArrayAdd_primaryColor;
+ (void)PBArrayAdd_showflag;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_auxTitle;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *cellCenterIconUrl; // @synthesize cellCenterIconUrl=_cellCenterIconUrl;
@property(retain, nonatomic) NSString *cellCoverUrl; // @synthesize cellCoverUrl=_cellCoverUrl;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *cellLinkIconUrl; // @synthesize cellLinkIconUrl=_cellLinkIconUrl;
@property(retain, nonatomic) NSString *cellIconUrl; // @synthesize cellIconUrl=_cellIconUrl;
@property(retain, nonatomic) NSString *appBrandPass; // @synthesize appBrandPass=_appBrandPass;
@property(retain, nonatomic) NSString *appBrandUserName; // @synthesize appBrandUserName=_appBrandUserName;
@property(retain, nonatomic) WCGiftCardInfo *giftCardInfo; // @synthesize giftCardInfo=_giftCardInfo;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned int showflag; // @synthesize showflag=_showflag;
@property(retain, nonatomic) NSString *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) NSString *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *auxTitle; // @synthesize auxTitle=_auxTitle;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)genDic;
- (void)genSelfByDic:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

