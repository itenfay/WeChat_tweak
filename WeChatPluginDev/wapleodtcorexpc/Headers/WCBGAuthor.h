//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCMediaItem;

@interface WCBGAuthor : NSObject
{
    NSString *_name;
    NSString *_title;
    NSString *_quote;
    NSString *_desc;
    WCMediaItem *_icon;
}

+ (void)initialize;
+ (void)PBArrayAdd_icon;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_quote;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_name;
+ (id)bgAuthorFromServerObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMediaItem *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *quote; // @synthesize quote=_quote;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

