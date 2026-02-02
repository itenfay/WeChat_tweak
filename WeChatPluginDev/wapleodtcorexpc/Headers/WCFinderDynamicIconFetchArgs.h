//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WCFinderDynamicIconFetchArgs : NSObject
{
    int _type;
    SEL _iconIdentify;
    UIColor *_iconColor;
    long long _iconId;
    NSString *_key;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long iconId; // @synthesize iconId=_iconId;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) SEL iconIdentify; // @synthesize iconIdentify=_iconIdentify;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

