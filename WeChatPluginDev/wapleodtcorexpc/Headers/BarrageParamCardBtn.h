//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BarrageParamCard;

@interface BarrageParamCardBtn
{
    BarrageParamCard *_paramCard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BarrageParamCard *paramCard; // @synthesize paramCard=_paramCard;
- (void)updateBackgroundColor;
- (id)getTitleColor;
- (void)refreshUI;
- (id)initWithParamCard:(id)arg1;

@end

