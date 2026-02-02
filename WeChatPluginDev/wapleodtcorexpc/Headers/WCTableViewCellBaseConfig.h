//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTableViewCellBaseConfig : NSObject
{
    unsigned long long _selectionStyle;
    long long _editStyle;
    SEL _clickAction;
    id _clickTarget;
    NSString *_nsPathKey;
    id _displayTarget;
    SEL _willDisplayAction;
}

- (void).cxx_destruct;
@property(nonatomic) SEL willDisplayAction; // @synthesize willDisplayAction=_willDisplayAction;
@property(nonatomic) __weak id displayTarget; // @synthesize displayTarget=_displayTarget;
@property(retain, nonatomic) NSString *nsPathKey; // @synthesize nsPathKey=_nsPathKey;
@property(nonatomic) __weak id clickTarget; // @synthesize clickTarget=_clickTarget;
@property(nonatomic) SEL clickAction; // @synthesize clickAction=_clickAction;
@property(nonatomic) long long editStyle; // @synthesize editStyle=_editStyle;
@property(nonatomic) unsigned long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
- (void)addTarget:(id)arg1 clickAction:(SEL)arg2;

@end

