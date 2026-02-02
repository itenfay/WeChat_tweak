//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;

@interface MMRTCSessionMenuResponder
{
    _Bool _bFromTranlateText;
    CMessageWrap *_msgWrap;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bFromTranlateText; // @synthesize bFromTranlateText=_bFromTranlateText;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (id)getSelectMenuItem;
- (void)onTranslateText;
- (void)onWordFingertipSearch;
- (void)onTextFavorite:(id)arg1;
- (id)initWithMessageWrap:(id)arg1;

@end

