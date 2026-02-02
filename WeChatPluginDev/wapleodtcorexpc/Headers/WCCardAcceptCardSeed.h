//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardAcceptCardSeed
{
    unsigned int _cardType;
    NSString *_cardTpID;
    NSString *_cardExt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *cardTpID; // @synthesize cardTpID=_cardTpID;
@property(nonatomic) unsigned int cardType; // @synthesize cardType=_cardType;

@end

