//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCanvasComponentRedEnvelopStatusInfo;

@interface WCAdShakeActionResultModel
{
    int _result;
    double _maxAcceleration;
    NSString *_twistCardId;
    WCCanvasComponentRedEnvelopStatusInfo *_hbCard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponentRedEnvelopStatusInfo *hbCard; // @synthesize hbCard=_hbCard;
@property(retain, nonatomic) NSString *twistCardId; // @synthesize twistCardId=_twistCardId;
@property(nonatomic) double maxAcceleration; // @synthesize maxAcceleration=_maxAcceleration;
@property(nonatomic) int result; // @synthesize result=_result;

@end

