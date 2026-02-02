//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LinkWeAppJumpWrap, NSString, UIColor;

@interface LinkStyle
{
    NSString *_nsUrl;
    NSString *_nsSourceUrl;
    unsigned long long _eDataDectorType;
    _Bool _bDrawsUnderLine;
    _Bool _bBackgroundEnabled;
    UIColor *_oHighlightedColor;
    unsigned long long _jumpType;
    LinkWeAppJumpWrap *_weappJumpWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LinkWeAppJumpWrap *weappJumpWrap; // @synthesize weappJumpWrap=_weappJumpWrap;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) UIColor *oHighlightedColor; // @synthesize oHighlightedColor=_oHighlightedColor;
@property(nonatomic) _Bool bBackgroundEnabled; // @synthesize bBackgroundEnabled=_bBackgroundEnabled;
@property(nonatomic) _Bool bDrawsUnderLine; // @synthesize bDrawsUnderLine=_bDrawsUnderLine;
@property(nonatomic) unsigned long long eDataDectorType; // @synthesize eDataDectorType=_eDataDectorType;
@property(retain, nonatomic) NSString *nsSourceUrl; // @synthesize nsSourceUrl=_nsSourceUrl;
@property(retain, nonatomic) NSString *nsUrl; // @synthesize nsUrl=_nsUrl;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)hasSameLinkTargetWith:(id)arg1;
- (_Bool)isSelectable;
- (id)init;

@end

