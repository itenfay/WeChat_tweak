//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCardPkgMsgAcceptItem : NSObject
{
    unsigned int endTime;
    unsigned int actionType;
    NSString *title;
    NSString *subTitle;
    NSString *cardId;
    NSString *cardExt;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int actionType; // @synthesize actionType;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (_Bool)IsAcceptItemValid;

@end

