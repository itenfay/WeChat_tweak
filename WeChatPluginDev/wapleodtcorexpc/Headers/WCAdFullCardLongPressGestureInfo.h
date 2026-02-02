//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdFullCardLongPressGestureInfo : NSObject
{
    unsigned long long _pressStartTime;
    unsigned long long _pressEndTime;
    unsigned long long _minimumPressDuration;
    unsigned long long _spriteDuration;
    NSString *_spriteImageUrl;
    long long _spriteType;
    long long _spriteSizeType;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long spriteSizeType; // @synthesize spriteSizeType=_spriteSizeType;
@property(nonatomic) long long spriteType; // @synthesize spriteType=_spriteType;
@property(retain, nonatomic) NSString *spriteImageUrl; // @synthesize spriteImageUrl=_spriteImageUrl;
@property(nonatomic) unsigned long long spriteDuration; // @synthesize spriteDuration=_spriteDuration;
@property(nonatomic) unsigned long long minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property(nonatomic) unsigned long long pressEndTime; // @synthesize pressEndTime=_pressEndTime;
@property(nonatomic) unsigned long long pressStartTime; // @synthesize pressStartTime=_pressStartTime;
- (_Bool)isValidForSpriteAnimation;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

