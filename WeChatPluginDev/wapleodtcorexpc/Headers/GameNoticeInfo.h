//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameNoticeAdditionalInfo, NSString;

@interface GameNoticeInfo : NSObject
{
    _Bool _hasAdditionalInfo;
    _Bool _hasCheckBtn;
    _Bool _checkState;
    NSString *_noticeIconUrl;
    NSString *_noticeTitle;
    GameNoticeAdditionalInfo *_additionalInfo;
    NSString *_buttonTitle;
    NSString *_checkTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool checkState; // @synthesize checkState=_checkState;
@property(copy, nonatomic) NSString *checkTitle; // @synthesize checkTitle=_checkTitle;
@property(nonatomic) _Bool hasCheckBtn; // @synthesize hasCheckBtn=_hasCheckBtn;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) GameNoticeAdditionalInfo *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(nonatomic) _Bool hasAdditionalInfo; // @synthesize hasAdditionalInfo=_hasAdditionalInfo;
@property(copy, nonatomic) NSString *noticeTitle; // @synthesize noticeTitle=_noticeTitle;
@property(copy, nonatomic) NSString *noticeIconUrl; // @synthesize noticeIconUrl=_noticeIconUrl;

@end

