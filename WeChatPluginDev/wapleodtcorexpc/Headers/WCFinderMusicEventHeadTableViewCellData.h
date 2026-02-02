//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMusicEventHeadTableViewCellData : NSObject
{
    NSString *_coverUrl;
    NSString *_title;
    NSString *_authorName;
    NSString *_authIconUrl;
    NSString *_recommendReason;
    NSString *_buttonIcon;
    NSString *_buttonTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *buttonIcon; // @synthesize buttonIcon=_buttonIcon;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(copy, nonatomic) NSString *authIconUrl; // @synthesize authIconUrl=_authIconUrl;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;

@end

