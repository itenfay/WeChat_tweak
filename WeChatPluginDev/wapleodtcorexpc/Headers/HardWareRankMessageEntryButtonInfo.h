//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString, UIColor;

@interface HardWareRankMessageEntryButtonInfo : NSObject
{
    CMessageWrap *m_msgWrap;
    int _type;
    NSString *_title;
    UIColor *_titleColor;
    NSString *_iconUrl;
    UIColor *_iconColor;
    UIColor *_backgroundColor;
    UIColor *_highlightBackgroundColor;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
- (double)marginRight;
- (id)initWithMsgwrap:(id)arg1;

@end

