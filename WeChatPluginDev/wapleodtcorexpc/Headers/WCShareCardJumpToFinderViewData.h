//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCCardDataCardInfo;

@interface WCShareCardJumpToFinderViewData : NSObject
{
    WCCardDataCardInfo *_cardInfo;
    NSString *_feedId;
    NSString *_nonceId;
    NSString *_leftIconUrl;
    NSString *_rightIconUrl;
    NSString *_finderUsername;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *rightIconUrl; // @synthesize rightIconUrl=_rightIconUrl;
@property(retain, nonatomic) NSString *leftIconUrl; // @synthesize leftIconUrl=_leftIconUrl;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) WCCardDataCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;

@end

