//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSString;

@interface MessageTipsViewModel
{
    unsigned long long _tipsType;
    CMessageWrap *_msgWrap;
    NSString *_wording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) unsigned long long tipsType; // @synthesize tipsType=_tipsType;
- (id)systemTextFont;
- (id)getTipsWording;
- (struct CGSize)measure:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)initWithTipsType:(unsigned long long)arg1 wording:(id)arg2;

@end

