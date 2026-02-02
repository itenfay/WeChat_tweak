//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TemplateMsgControlInfo : NSObject
{
    NSString *_foldWording;
    NSString *_foldActionWording;
    NSString *_footerWording;
    NSString *_footerActionWording;
    unsigned long long _footerActionType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long footerActionType; // @synthesize footerActionType=_footerActionType;
@property(retain, nonatomic) NSString *footerActionWording; // @synthesize footerActionWording=_footerActionWording;
@property(retain, nonatomic) NSString *footerWording; // @synthesize footerWording=_footerWording;
@property(retain, nonatomic) NSString *foldActionWording; // @synthesize foldActionWording=_foldActionWording;
@property(retain, nonatomic) NSString *foldWording; // @synthesize foldWording=_foldWording;

@end

