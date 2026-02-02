//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TemplateScheduleOPWrap : NSObject
{
    _Bool _showAll;
    unsigned int _remindSubType;
    NSString *_username;
    long long _mesSvrID;
    NSString *_nickname;
    NSString *_headimg;
    NSString *_content;
    NSString *_contentDesc;
    NSString *_time;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *contentDesc; // @synthesize contentDesc=_contentDesc;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *headimg; // @synthesize headimg=_headimg;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) long long mesSvrID; // @synthesize mesSvrID=_mesSvrID;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned int remindSubType; // @synthesize remindSubType=_remindSubType;
@property(nonatomic) _Bool showAll; // @synthesize showAll=_showAll;

@end

