//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCMomentsTemplateInfo;

@interface WCMomentsTemplateShareInfo : NSObject
{
    long long _shareSource;
    NSString *_itemID;
    WCMomentsTemplateInfo *_templateInfo;
    NSString *_extInfo;
    NSString *_title;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) WCMomentsTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) long long shareSource; // @synthesize shareSource=_shareSource;

@end

