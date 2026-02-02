//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayLQTEnteranceInfo : NSObject
{
    unsigned int _lqt_state;
    int _is_show_cell;
    int _is_open_lqt;
    NSString *_lct_wording;
    NSString *_lct_url;
    NSString *_cell_icon;
    NSString *_lqt_open_url;
    NSString *_lqt_title;
    NSString *_lqt_wording;
}

+ (_Bool)saveLQTEnteranceInfo:(id)arg1;
+ (id)getLocalLQTEnteranceInfo;
+ (void)initialize;
+ (void)PBArrayAdd_lqt_wording;
+ (void)PBArrayAdd_lqt_title;
+ (void)PBArrayAdd_lqt_open_url;
+ (void)PBArrayAdd_is_open_lqt;
+ (void)PBArrayAdd_cell_icon;
+ (void)PBArrayAdd_is_show_cell;
+ (void)PBArrayAdd_lct_url;
+ (void)PBArrayAdd_lqt_state;
+ (void)PBArrayAdd_lct_wording;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lqt_wording; // @synthesize lqt_wording=_lqt_wording;
@property(retain, nonatomic) NSString *lqt_title; // @synthesize lqt_title=_lqt_title;
@property(retain, nonatomic) NSString *lqt_open_url; // @synthesize lqt_open_url=_lqt_open_url;
@property(nonatomic) int is_open_lqt; // @synthesize is_open_lqt=_is_open_lqt;
@property(retain, nonatomic) NSString *cell_icon; // @synthesize cell_icon=_cell_icon;
@property(nonatomic) int is_show_cell; // @synthesize is_show_cell=_is_show_cell;
@property(retain, nonatomic) NSString *lct_url; // @synthesize lct_url=_lct_url;
@property(nonatomic) unsigned int lqt_state; // @synthesize lqt_state=_lqt_state;
@property(retain, nonatomic) NSString *lct_wording; // @synthesize lct_wording=_lct_wording;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

