//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflinePayEnablePageData : NSObject
{
    unsigned int _is_need_show;
    NSString *_icon;
    NSString *_text;
    NSString *_button;
}

+ (void)initialize;
+ (void)PBArrayAdd_button;
+ (void)PBArrayAdd_text;
+ (void)PBArrayAdd_icon;
+ (void)PBArrayAdd_is_need_show;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *button; // @synthesize button=_button;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned int is_need_show; // @synthesize is_need_show=_is_need_show;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

