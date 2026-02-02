//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAUserGuideParam : NSObject
{
    unsigned int _dialogType;
    int _pagAnimRepeatCount;
    NSString *_appId;
    NSString *_title;
    NSString *_pagAnim;
    CDUnknownBlockType _confirmAction;
    NSString *_gotoText;
    CDUnknownBlockType _gotoAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType gotoAction; // @synthesize gotoAction=_gotoAction;
@property(retain, nonatomic) NSString *gotoText; // @synthesize gotoText=_gotoText;
@property(copy, nonatomic) CDUnknownBlockType confirmAction; // @synthesize confirmAction=_confirmAction;
@property(nonatomic) int pagAnimRepeatCount; // @synthesize pagAnimRepeatCount=_pagAnimRepeatCount;
@property(retain, nonatomic) NSString *pagAnim; // @synthesize pagAnim=_pagAnim;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int dialogType; // @synthesize dialogType=_dialogType;

@end

