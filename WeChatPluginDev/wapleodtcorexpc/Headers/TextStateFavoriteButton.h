//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber;

@interface TextStateFavoriteButton
{
    _Bool _notify;
    unsigned int _funcType;
    NSNumber *_typeNumber;
}

- (void).cxx_destruct;
@property(nonatomic, getter=hasNotify) _Bool notify; // @synthesize notify=_notify;
@property(nonatomic) unsigned int funcType; // @synthesize funcType=_funcType;
@property(retain, nonatomic) NSNumber *typeNumber; // @synthesize typeNumber=_typeNumber;
- (void)favoriteImpact;
- (void)changeForSelfWithInteractionCount:(unsigned int)arg1 notifyCount:(unsigned int)arg2;
- (void)changeForOther;
@property(readonly, nonatomic) unsigned int type;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFuncType:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

