//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCanvasComponentRedEnvelopStatusInfo;

@interface WCAdCanvasHbCardBtnClickModel
{
    int _btnType;
    NSString *_canvasId;
    NSString *_twistCardId;
    WCCanvasComponentRedEnvelopStatusInfo *_hbCard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponentRedEnvelopStatusInfo *hbCard; // @synthesize hbCard=_hbCard;
@property(retain, nonatomic) NSString *twistCardId; // @synthesize twistCardId=_twistCardId;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(nonatomic) int btnType; // @synthesize btnType=_btnType;

@end

