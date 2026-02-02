//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentReportRedEnvelopCardInfo
{
    int _subType;
    int _isDoubleCard;
    unsigned int _expCnt;
    unsigned int _btnClkCnt;
    unsigned int _linkClkCnt;
    NSString *_giveCardId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *giveCardId; // @synthesize giveCardId=_giveCardId;
@property(nonatomic) unsigned int linkClkCnt; // @synthesize linkClkCnt=_linkClkCnt;
@property(nonatomic) unsigned int btnClkCnt; // @synthesize btnClkCnt=_btnClkCnt;
@property(nonatomic) unsigned int expCnt; // @synthesize expCnt=_expCnt;
@property(nonatomic) int isDoubleCard; // @synthesize isDoubleCard=_isDoubleCard;
@property(nonatomic) int subType; // @synthesize subType=_subType;
- (id)dictionaryRepresentation;
- (id)initWithSubType:(int)arg1 isDoubleCard:(int)arg2 giveCardId:(id)arg3;

@end

