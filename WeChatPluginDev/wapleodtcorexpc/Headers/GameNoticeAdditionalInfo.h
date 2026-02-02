//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameNoticeAdditionalInfo : NSObject
{
    NSString *_iconUrl;
    NSString *_headText;
    NSString *_title;
    NSString *_subTitle;
    NSString *_buttonTitle;
    NSString *_buttonJumpUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *buttonJumpUrl; // @synthesize buttonJumpUrl=_buttonJumpUrl;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *headText; // @synthesize headText=_headText;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;

@end

