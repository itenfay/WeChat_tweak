//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WCPayTransferMoneyAntiCheatViewData : NSObject
{
    _Bool _isShowNotice;
    unsigned int _jumpType;
    NSString *_antiCheatHint;
    UIColor *_antiCheatHintColor;
    UIColor *_antiCheatHintColorDark;
    NSString *_lefticon;
    NSString *_lefticonDark;
    NSString *_righticon;
    NSString *_righticonDark;
    NSString *_url;
    NSString *_userName;
    NSString *_pagepath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pagepath; // @synthesize pagepath=_pagepath;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *righticonDark; // @synthesize righticonDark=_righticonDark;
@property(retain, nonatomic) NSString *righticon; // @synthesize righticon=_righticon;
@property(retain, nonatomic) NSString *lefticonDark; // @synthesize lefticonDark=_lefticonDark;
@property(retain, nonatomic) NSString *lefticon; // @synthesize lefticon=_lefticon;
@property(retain, nonatomic) UIColor *antiCheatHintColorDark; // @synthesize antiCheatHintColorDark=_antiCheatHintColorDark;
@property(retain, nonatomic) UIColor *antiCheatHintColor; // @synthesize antiCheatHintColor=_antiCheatHintColor;
@property(retain, nonatomic) NSString *antiCheatHint; // @synthesize antiCheatHint=_antiCheatHint;
@property(nonatomic) _Bool isShowNotice; // @synthesize isShowNotice=_isShowNotice;

@end

