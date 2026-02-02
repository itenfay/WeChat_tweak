//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCardPkgMsgJumpButton : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_buttonTitle;
    NSString *_jumpUrlStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *jumpUrlStr; // @synthesize jumpUrlStr=_jumpUrlStr;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

