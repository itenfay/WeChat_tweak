//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderNavTabTitle;

@interface WCFinderNavTabDefine : NSObject
{
    WCFinderNavTabTitle *_title;
    WCFinderNavTabTitle *_selectedTitle;
    NSString *_accessibilityLabel;
    CDUnknownBlockType _pageGenerator;
    NSString *_idenfitier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *idenfitier; // @synthesize idenfitier=_idenfitier;
@property(copy, nonatomic) CDUnknownBlockType pageGenerator; // @synthesize pageGenerator=_pageGenerator;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) WCFinderNavTabTitle *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) WCFinderNavTabTitle *title; // @synthesize title=_title;

@end

