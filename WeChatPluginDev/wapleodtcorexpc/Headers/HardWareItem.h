//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface HardWareItem
{
    unsigned int uiHardWareShowType;
    NSString *nsRankID;
    NSString *nsRankTitle;
    NSString *nsRankDisplay;
    NSString *nsScoreTitle;
    NSString *nsScoreDisplay;
    NSString *nsTipDisplay;
    NSString *nsColor;
    NSString *nsHighLightColor;
    NSString *nsLineColor;
    NSString *nsHighLightLineColor;
    NSString *nsFontColor;
    NSString *nsChampionUsername;
    NSString *nsDisplayUserName;
    NSString *nsThumbUrl;
    NSString *nsNotifyTitle;
    unsigned int uiTimeStamp;
    NSString *stateIconId;
    NSString *stateText;
    unsigned int stateExpireTime;
    NSDictionary *_extDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extDict; // @synthesize extDict=_extDict;
@property(retain, nonatomic) NSString *stateText; // @synthesize stateText;
@property(retain, nonatomic) NSString *stateIconId; // @synthesize stateIconId;
@property(nonatomic) unsigned int stateExpireTime; // @synthesize stateExpireTime;
@property(retain, nonatomic) NSString *nsNotifyTitle; // @synthesize nsNotifyTitle;
@property(retain, nonatomic) NSString *nsThumbUrl; // @synthesize nsThumbUrl;
@property(retain, nonatomic) NSString *nsDisplayUserName; // @synthesize nsDisplayUserName;
@property(retain, nonatomic) NSString *nsChampionUsername; // @synthesize nsChampionUsername;
@property(retain, nonatomic) NSString *nsFontColor; // @synthesize nsFontColor;
@property(retain, nonatomic) NSString *nsHighLightLineColor; // @synthesize nsHighLightLineColor;
@property(retain, nonatomic) NSString *nsLineColor; // @synthesize nsLineColor;
@property(retain, nonatomic) NSString *nsHighLightColor; // @synthesize nsHighLightColor;
@property(retain, nonatomic) NSString *nsColor; // @synthesize nsColor;
@property(nonatomic) unsigned int uiTimeStamp; // @synthesize uiTimeStamp;
@property(retain, nonatomic) NSString *nsTipDisplay; // @synthesize nsTipDisplay;
@property(retain, nonatomic) NSString *nsScoreDisplay; // @synthesize nsScoreDisplay;
@property(retain, nonatomic) NSString *nsScoreTitle; // @synthesize nsScoreTitle;
@property(retain, nonatomic) NSString *nsRankDisplay; // @synthesize nsRankDisplay;
@property(retain, nonatomic) NSString *nsRankTitle; // @synthesize nsRankTitle;
@property(retain, nonatomic) NSString *nsRankID; // @synthesize nsRankID;
@property(nonatomic) unsigned int uiHardWareShowType; // @synthesize uiHardWareShowType;
- (_Bool)IsExpired;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

