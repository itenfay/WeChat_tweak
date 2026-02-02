//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveGestureGiftSenderCacheItem : NSObject
{
    NSString *_comboId;
    NSString *_nickname;
    NSString *_validForGestureId;
    unsigned long long _validUntil;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long validUntil; // @synthesize validUntil=_validUntil;
@property(retain, nonatomic) NSString *validForGestureId; // @synthesize validForGestureId=_validForGestureId;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *comboId; // @synthesize comboId=_comboId;

@end

