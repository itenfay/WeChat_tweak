//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdFinderLiveNoticeInfo : NSObject
{
    NSString *_finderUsername;
    NSString *_finderLiveNoticeId;
    NSString *_finderAvatar;
    NSString *_finderNickname;
    NSString *_finderLiveTitle;
    NSString *_finderLiveDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderLiveDesc; // @synthesize finderLiveDesc=_finderLiveDesc;
@property(retain, nonatomic) NSString *finderLiveTitle; // @synthesize finderLiveTitle=_finderLiveTitle;
@property(retain, nonatomic) NSString *finderNickname; // @synthesize finderNickname=_finderNickname;
@property(retain, nonatomic) NSString *finderAvatar; // @synthesize finderAvatar=_finderAvatar;
@property(retain, nonatomic) NSString *finderLiveNoticeId; // @synthesize finderLiveNoticeId=_finderLiveNoticeId;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

