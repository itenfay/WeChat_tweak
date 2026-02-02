//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameCenterEntranceInfo : NSObject
{
    _Bool _isIconRoundCorner;
    _Bool _ignoreLocalControl;
    unsigned int _cornerRadius;
    int _basicType;
    NSString *_iconUrl;
    NSString *_desc;
    long long _entranceNotifyType;
    NSString *_coloredText;
    NSString *_jumpLiveJsonStr;
    NSString *_outerColoredText;
    NSString *_clickOpenUrl;
    long long _openType;
    long long _entranceIconType;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long entranceIconType; // @synthesize entranceIconType=_entranceIconType;
@property(nonatomic) long long openType; // @synthesize openType=_openType;
@property(retain, nonatomic) NSString *clickOpenUrl; // @synthesize clickOpenUrl=_clickOpenUrl;
@property(retain, nonatomic) NSString *outerColoredText; // @synthesize outerColoredText=_outerColoredText;
@property(retain, nonatomic) NSString *jumpLiveJsonStr; // @synthesize jumpLiveJsonStr=_jumpLiveJsonStr;
@property(retain, nonatomic) NSString *coloredText; // @synthesize coloredText=_coloredText;
@property(nonatomic) _Bool ignoreLocalControl; // @synthesize ignoreLocalControl=_ignoreLocalControl;
@property(nonatomic) int basicType; // @synthesize basicType=_basicType;
@property(nonatomic) unsigned int cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool isIconRoundCorner; // @synthesize isIconRoundCorner=_isIconRoundCorner;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long entranceNotifyType; // @synthesize entranceNotifyType=_entranceNotifyType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;

@end

